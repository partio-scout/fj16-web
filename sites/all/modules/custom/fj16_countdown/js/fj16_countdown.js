jQuery(function($) {
	var countdownClock = $('div.countdown-clock');	
	var countdownDate = countdownClock.data('date').split('-');
	var countdownTime = countdownClock.data('time').split(':');
	var countdownDays = Drupal.t('days');
	var countdownHours = Drupal.t('hours');
	var countdownMinutes = Drupal.t('minutes');
	var countdownSeconds = Drupal.t('seconds');
	
	countdownDateTime = new Date(countdownDate[0],countdownDate[1]-1,countdownDate[2],countdownTime[0],countdownTime[1],countdownTime[2]);

	$('div.countdown-clock').append('<div id="clock"><p><span id="daysLeft"></span> '+countdownDays+'</p><div class="space">:</div><p><span id="hours"></span> '+countdownHours+'</p><div class="space">:</div><p><span id="minutes"></span> '+countdownMinutes+'</p><div class="space">:</div><p><span id="seconds"></span> '+countdownSeconds+'</p></div>');

	$('div#clock').countdown(countdownDate, function(event) {
		$this = $(this);
		switch(event.type) {
			case "seconds":
			case "minutes":
			case "hours":
			case "days":
			case "weeks":
			case "daysLeft":
				$this.find('span#'+event.type).html(event.value);
				break;
			case "finished":
				$this.parent().parent().find('h2').text(countdownClock.data('finished'));
				break;
		}
	});
		
	if($(window).width() > 1024) {
		$(window).scroll(function() {
			$('#clock-wrapper').each(function(){
				if($(this).isOnScreen(1,0.5)){
					$(this).find('h2').addClass('animated fadeInDown');
					$(this).find('a').addClass('animated fadeInUp');
				}
			});
		});
	} else {
		$('#clock-wrapper').find('h2, a').addClass('animated');
		$('.node-fj16-frontpage-box').find('h2, .body, .link').addClass('animated');
	}
});