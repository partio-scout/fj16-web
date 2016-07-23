(function($, Drupal, undefined){

  if($('.node-fj16-frontpage-box').length) {
    $('.node-fj16-frontpage-box').each(function(){
      if($(this).find('.image .hashtag').length > 0) {
        
        // Init the Instagram feed
        
        var el = $(this).find('.image');
        var hashtag = el.find('.hashtag').text().trim();
        
        el.addClass('instagram');
        el.parents('.node').css('min-height', 0);

        var i = 1;
        $.getJSON('/instajson/' + hashtag, function(data) {
          $.each(shuffle(data['data']), function(key, img) {
            el.append('<a href="' + img.link + '" target="_blank" class="img' + i + '"><img src="' + img.images.standard_resolution.url + '"></a>');
            if(i++ % 5 == 0) {
              return false;
            }
          });
        });

      } else {
        // We're parallaxin, baby
        $(this).find('.image').attr('data-bottom-top', 'transform: translate3d(0,0%,0)');
        $(this).find('.image').attr('data-top-bottom', 'transform: translate3d(0,-16.66%,0)');  
      }
    });

    initSkrollr();
    $(window).resize(function() {
      initSkrollr();
    });

    // Fade in animations
    if($(window).width() > 1024) {
      $(window).scroll(function() {
        $('.node-fj16-frontpage-box').each(function(){
          if($(this).isOnScreen(1,0.5)){
            var $this = $(this);
            setTimeout(function(){
              $this.find('h2').addClass('animated fadeInDown');
              $this.find('.body, .link').addClass('animated fadeInUp');
            }, 300);
          }
        });

        $('.frontpage-lift').each(function(){
          if($(this).isOnScreen(1,0.5)){
            $(this).find('h2').addClass('animated fadeInDown');
            $(this).find('a').addClass('animated fadeInUp');
          }
        });
      });
    } else {
      $('.node-fj16-frontpage-box').find('h2, .body, .link').addClass('animated');
      $('.frontpage-lift').find('h2, a').addClass('animated');
    }
  }
  
  if($(window).width() > 1024) {
    $(window).scroll(function() {
      $('.frontpage-lift').each(function(){
        if($(this).isOnScreen(1,0.5)){
          $(this).find('h2').addClass('animated fadeInDown');
          $(this).find('a').addClass('animated fadeInUp');
        }
      });
    });
  } else {
    $('.frontpage-lift').find('h2, a').addClass('animated');
  }

  //$('#mobile-menu-toggle').click(function(){
    //$('#mobile-menu').toggleClass('visible');
  //});
  
  $('#mobile-menu-toggle').sidr({
    name: 'sidr-main',
    source: '#mobile-menu'
  });
  
  $(document).bind('click', function () {
    $.sidr('close', 'sidr-main');
  });
  
  //$('.sidr-class-expanded>a').click(function(e){
  //  e.preventDefault();
  //  $(this).parent().toggleClass('open');
  //});

  $('#to-content').click(function(){
    $('html,body').animate({scrollTop: $('#main').offset().top}, 400);
  });
  
  $('#sidebar-left .block-menu-block h2 a').wrapInner('<span></span>');


  // Sticky nav
  function navScroll(navpos) {
    if($('#navigation').length) {
      $(window).bind('scroll', function() {
        if ($(window).scrollTop() > navpos.top - 1) { // -1 for fixing lagging at bottom
          $('#navigation').addClass('fixed');
          $('#header').addClass('fixed-nav');
        }
        else {
          $('#navigation').removeClass('fixed');
          $('#header').removeClass('fixed-nav');
        }
      });
    }
  }
  
  $(window).load(function(){
    navpos = $('#navigation').offset();
    navScroll(navpos);
  });
  $(window).resize(function(){
    $(window).unbind('scroll');
    navpos = $('#navigation').offset();
    navScroll(navpos);
  }); 

  if($('.bulk-jobs-list, .wotw-list').length) { 
    // A bit of a hack to hide untranslated items
    $('.bulk-jobs-list h2, .wotw-list h2').each(function(index, item) {
      $item = $(item);
      if($item.text().trim().length < 2) {
        $item.closest('.views-row').remove();
      }
    });

    $('.view-content').masonry({
      // set itemSelector so .grid-sizer is not used in layout
      itemSelector: '.views-row',
      // use element for option
      columnWidth: '.views-row',
      percentPosition: true
      // columnWidth: 300
    });

    $(window).load(function() {
      $('.view-content').masonry();
    });

  }
  
  if($('.subcamp-filter').length > 0) {
    $('.subcamp-filter input').keyup(function () {
      //split the current value of input
      var searchquery = this.value.split(' ');
      //create a jquery object of the rows
      var jo = $('.subcamp-filter + table tbody').find('tr');
      if (this.value === '') {
        jo.show();
        return;
      }
      //hide all the rows
      jo.hide();

      //Recusively filter the jquery object to get results.
      jo.filter(function() {
        for (var word = 0; word < searchquery.length; word++) {
          if ($(this).text().toLowerCase().indexOf(searchquery[word].toLowerCase()) > -1) {
            return true;
          }
        }
        return false;
      })
      //show the rows that match.
      .show();
    });    
  }
  
  if($('textarea.transportation_troops').length > 0) {
    $('textarea.transportation_troops').textext({
        plugins: 'autocomplete filter tags ajax',
        ajax: {
          url: '/sites/all/themes/fj16/js/kaikki_lippukunnat.json',
          dataType: 'json',
          cacheResults: true
        }
    });
  }

  if($('#panorama').length > 0) {
    pannellum.viewer('panorama', {   
      "default": {
        "firstScene": "panorama-l",
        //"author": "Matthew Petroff",
        "sceneFadeDuration": 500
      },

      "scenes": {
        "panorama-l": {
          "title": "Solmu",
          "type": "multires",    
          "multiRes": {
            "path": "/sites/all/themes/fj16/img/panoramas/panorama-l/%l/%s%y_%x",
            "fallbackPath": "/sites/all/themes/fj16/img/panoramas/panorama-l/fallback/%s",
            "extension": "jpg",
            "tileResolution": 512,
            "maxLevel": 5,
            "cubeResolution": 4400
          },
          "hotSpotDebug": true,
          "hotSpots": [
            {
              "pitch": 1.102067134311712,
              "yaw": 10.113231968489659,
              "type": "scene",
              "text": "Roihu-monumentti",
              "sceneId": "panorama-g"
            }
          ]
        },
        "panorama-g": {
            "title": "Roihu-monumentti",
            "type": "multires",
            "multiRes": {
              "path": "/sites/all/themes/fj16/img/panoramas/panorama-g/%l/%s%y_%x",
              "fallbackPath": "/sites/all/themes/fj16/img/panoramas/panorama-g/fallback/%s",
              "extension": "jpg",
              "tileResolution": 512,
              "maxLevel": 5,
              "cubeResolution": 4296
            },
            "hotSpotDebug": true,
            "hotSpots": [
              {
                "pitch": -1.473456190568588,
                "yaw": -152.84611063258842,
                "type": "scene",
                "text": "Solmu",
                "sceneId": "panorama-l"
              }
            ]
          }
        }
    });
  }

  // pannellum.viewer('panorama',{
  //   "type": "multires",
  //   "multiRes": {
  //     "path": "/sites/all/themes/fj16/img/panoramas/avajaiset/%l/%s%y_%x",
  //     "fallbackPath": "/sites/all/themes/img/fj16/panoramas/avajaiset/fallback/%s",
  //     "extension": "jpg",
  //     "tileResolution": 512,
  //     "maxLevel": 5,
  //     "cubeResolution": 4368
  //   },
  //   "autoLoad": true,
  //   "autoRotate": -2,
  //   "hotSpotDebug": true
  // });
  
  // Avoid `console` errors in browsers that lack a console.
  (function() {
    var method;
    var noop = function noop() {};
    var methods =  [
              'assert', 'clear', 'count', 'debug', 'dir', 'dirxml', 'error',
              'exception', 'group', 'groupCollapsed', 'groupEnd', 'info', 'log',
              'markTimeline', 'profile', 'profileEnd', 'table', 'time', 'timeEnd',
              'timeStamp', 'trace', 'warn'
            ];
    
    var length = methods.length;
    var console = (window.console = window.console || {});

    while (length--) {
      method = methods[length];

      // Only stub undefined methods.
      if (!console[method]) {
        console[method] = noop;
      }
    }
  }());

})(jQuery, Drupal);

var s = undefined;

function initSkrollr() {
  if(screen.width > 1024 && !(/Android|iPhone|iPad|iPod|BlackBerry|Windows Phone/i).test(navigator.userAgent || navigator.vendor || window.opera)){
    if(s == undefined) {
      s = skrollr.init({forceHeight:false});
    }
  } else {
    if(s != undefined) {
      s.destroy();
      s = undefined;
    }
  }
}

function shuffle(array) {
  for (var i = array.length - 1; i > 0; i--) {
    var j = Math.floor(Math.random() * (i + 1));
    var temp = array[i];
    array[i] = array[j];
    array[j] = temp;
  }
  return array;
}

jQuery.fn.isOnScreen = function(x, y){
		
		if(x == null || typeof x == 'undefined') x = 1;
		if(y == null || typeof y == 'undefined') y = 1;
		
		var win = jQuery(window);
		
		var viewport = {
				top : win.scrollTop(),
				left : win.scrollLeft()
		};
		viewport.right = viewport.left + win.width();
		viewport.bottom = viewport.top + win.height();
		
		var height = this.outerHeight();
		var width = this.outerWidth();
 
    if(!width || !height){
        return false;
    }
    
    var bounds = this.offset();
    bounds.right = bounds.left + width;
    bounds.bottom = bounds.top + height;
    
    var visible = (!(viewport.right < bounds.left || viewport.left > bounds.right || viewport.bottom < bounds.top || viewport.top > bounds.bottom));
    
    if(!visible){
        return false;   
    }
    
    var deltas = {
        top : Math.min( 1, ( bounds.bottom - viewport.top ) / height),
        bottom : Math.min(1, ( viewport.bottom - bounds.top ) / height),
        left : Math.min(1, ( bounds.right - viewport.left ) / width),
        right : Math.min(1, ( viewport.right - bounds.left ) / width)
    };
    
    return (deltas.left * deltas.right) >= x && (deltas.top * deltas.bottom) >= y;
    
};

jQuery('[data-ga-event-category][data-ga-event-action]').click(function(e){
  
  var eventCategory = $(this).data('ga-event-category'),
      eventAction   = $(this).data('ga-event-action'),
      eventLabel    = $(this).data('ga-event-label'),
      eventValue    = $(this).data('ga-event-value');
      
  ga('send', 'event', eventCategory, eventAction, eventLabel, eventValue);

});
