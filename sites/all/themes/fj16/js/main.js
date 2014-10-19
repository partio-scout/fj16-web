(function($, Drupal, undefined){

	$('#mobile-menu-toggle').click(function(){
		$('#mobile-menu').toggleClass('visible');
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