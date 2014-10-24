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
			});
		} else {
			$('.node-fj16-frontpage-box').find('h2, .body, .link').addClass('animated');
		}
	}

	$('#mobile-menu-toggle').click(function(){
		$('#mobile-menu').toggleClass('visible');
	});

	$('#to-content').click(function(){
		$('html,body').animate({scrollTop: $('#main').offset().top}, 400);
	});


	// Sticky nav
	if($('#navigation').length) {
		navpos = $('#navigation').offset();
		$(window).bind('scroll', function() {
			if ($(window).scrollTop() > navpos.top) {
				$('#navigation').addClass('fixed');
				$('#header').addClass('fixed-nav');
			}
			else {
				$('#navigation').removeClass('fixed');
				$('#header').removeClass('fixed-nav');
			}
		});
	}

	// Avoid `console` errors in browsers that lack a console.
	(function() {
		var method;
		var noop = function noop() {};
		var methods =	[
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