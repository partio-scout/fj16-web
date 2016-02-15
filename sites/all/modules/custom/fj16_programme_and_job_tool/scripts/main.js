jQuery('a.flag').click(function(e) {
  jQuery(this).text(Drupal.t('Sending...')).addClass('sending');
});

jQuery('#fj16-generator-role-form').submit(function(e) {
  var form = jQuery(this);
  setTimeout(function() {
    form.find('.form-submit').attr('disabled', 'disabled');
  }, 0);
});

jQuery('#fj16-generator-role-form .form-submit').click(function(e) {
  var elem = jQuery(this);
  setTimeout(function() {
  	elem.attr('value', Drupal.t('Sending...'));
  }, 0);
});

