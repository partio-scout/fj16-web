(function($, Drupal, undefined){

	if($('.node-fj16-frontpage-box').length) {
		
		// We're parallaxin, baby
		$('.node-fj16-frontpage-box').each(function(){
			$(this).find('img').attr('data-bottom-top', 'transform: translate3d(0,0%,0)');
			$(this).find('img').attr('data-top-bottom', 'transform: translate3d(0,-20%,0)');
		});
		initSkrollr();
		$(window).resize(function() {
			initSkrollr();
		});

		// Fade in animations
		if($(window).width() > 1024) {
			$(window).scroll(function() {
				$('.node-fj16-frontpage-box').each(function(){
					if($(this).isOnScreen(1,0.75)){
						var $this = $(this);
						setTimeout(function(){
							$this.find('h2').addClass('animated fadeInDown');
							$this.find('.field-name-body, .field-name-field-link').addClass('animated fadeInUp');
						}, 300);
					}
				});
			});
		}
	}

	$('#mobile-menu-toggle').click(function(){
		$('#mobile-menu').toggleClass('visible');
	});

	$('#to-content').click(function(){
		$('html,body').animate({scrollTop: $('#main').offset().top}, 400);
	});


	// Sticky nav
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