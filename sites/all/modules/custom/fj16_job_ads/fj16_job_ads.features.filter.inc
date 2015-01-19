<?php
/**
 * @file
 * fj16_job_ads.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function fj16_job_ads_filter_default_formats() {
  $formats = array();

  // Exported format: FJ16 Job content.
  $formats['fj16_job_content'] = array(
    'format' => 'fj16_job_content',
    'name' => 'FJ16 Job content',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <h1> <h2> <h3> <p>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
    ),
  );

  return $formats;
}
