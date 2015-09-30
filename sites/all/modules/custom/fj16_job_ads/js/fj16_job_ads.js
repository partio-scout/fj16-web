jQuery('#fj16-job-application-form').submit(function(e) {
  jQuery(this).find('.form-submit').attr('value', Drupal.t('Sending...')).attr('disabled', 'disabled');
});
