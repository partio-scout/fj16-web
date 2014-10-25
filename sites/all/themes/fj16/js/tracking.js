jQuery(document).ready(function() {

	// Send event to google analytics
	function send_ga_events(data_category,data_action,data_label){
		if(typeof ga !== 'undefined'){
			ga('send', 'event', data_category, data_action, data_label);
		}
	}

	var app2 = new Object;
	
	app2.tracking = {
		init : function() {

			// GENERAL TRACKING THROUGH DATA-ATTRIBUTES ON LINKS
			jQuery('a[data-ga-track="event"]').click(function(e) {
				var data_category = jQuery(this).attr('data-ga-category');
				var data_action = jQuery(this).attr('data-ga-action');
				var data_label = jQuery(this).attr('data-ga-opt_label');
					// add page title in label, use swiftype page title
					page_title = jQuery('meta[property="st:title"]').attr("content");
					data_label = data_label + ' / ' + page_title;
				send_ga_events(data_category,data_action,data_label );
			}); 

			jQuery('#navigation #main-menu a').click(function(e) {
				var data_category = 'Main navigation';
				var data_action = 'Click';
				var data_label = jQuery(this).html();
				send_ga_events(data_category,data_action,data_label);
			}); 
		
			jQuery('#footer a').click(function(e) {
				var data_label = jQuery(this).html();

				if(jQuery(this).attr('id') == 'sp-logo') {
					data_label = 'SP logo';
				}

				send_ga_events('Footer link','Click','Footer / '+data_label);
			});

		}
	}


	jQuery.fn.app2 = function(scope, method) {
		if (app2[scope][method]) {
			return app2[scope][method].apply( this, Array.prototype.slice.call( arguments, 1 ));
		} else if ( typeof method === 'object' || ! method ) {
			return app2[scope].init.apply( this, arguments );
		} else {
			return false;
		}
	};

	jQuery('body').app2('tracking');
});