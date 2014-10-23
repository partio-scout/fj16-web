jQuery(function($) {
  var ua = navigator.userAgent;
  var w = Math.max(document.documentElement.clientWidth, window.innerWidth || 0);
  var h = Math.max(document.documentElement.clientHeight, window.innerHeight || 0);
  var dpr = window.devicePixelRatio || 'unknown';
  var browserInfo = ua + ' at ' + w + 'x' + h + 'px, devicePixelRatio=' + dpr + '';
  $('.webform-component--user-agent input').val(browserInfo);
});
