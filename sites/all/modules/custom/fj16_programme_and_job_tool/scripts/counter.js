jQuery(function($) {
  var form = $('#fj16-generator-role-form');
  var origText = $('h1').text();

  if(form.length > 0) {
    var opensTime = 1000*form.attr('data-opens');

    if(opensTime < (new Date().getTime())) {
      return; // We're open
    }

    var timerElem = $('<p></p>');
    form.before(timerElem);
    $('h1').text(Drupal.t('Hold tight!'));

    function getTimerText(time) {
      var days = Math.floor(time / (24*60*60*1000));
      var hours = Math.floor(time / (60*60*1000)) % 24;
      var mins = Math.floor(time / (60*1000)) % 60;
      var seconds = Math.floor(time / 1000) % 60;
      return Drupal.t('The generator opens in @days days @hours hours @mins minutes @seconds seconds.', {
        '@days': days,
        '@hours': hours,
        '@mins': mins,
        '@seconds': seconds
      });
    }

    function updateClock() {
      if(opensTime < (new Date().getTime())) {
        clearInterval(interval);
        $('h1').text(origText);
        timerElem.hide();
        form.show();
        return;
      }

      var timeToOpen = opensTime - (new Date().getTime());
      timerElem.text(getTimerText(timeToOpen));
    }

    var interval = setInterval(updateClock, 100);
  }
});
