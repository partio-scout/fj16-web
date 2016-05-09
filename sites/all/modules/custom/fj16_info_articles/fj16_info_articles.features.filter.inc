<?php
/**
 * @file
 * fj16_info_articles.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function fj16_info_articles_filter_default_formats() {
  $formats = array();

  // Exported format: FJ16 Markdown.
  $formats['fj16_markdown'] = array(
    'format' => 'fj16_markdown',
    'name' => 'FJ16 Markdown',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_markdown' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
