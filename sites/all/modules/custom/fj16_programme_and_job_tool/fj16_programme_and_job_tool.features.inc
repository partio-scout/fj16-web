<?php
/**
 * @file
 * fj16_programme_and_job_tool.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fj16_programme_and_job_tool_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function fj16_programme_and_job_tool_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function fj16_programme_and_job_tool_flag_default_flags() {
  $flags = array();
  // Exported flag: "FJ16 Choose bulk job".
  $flags['fj16_choose_bulk_job'] = array(
    'entity_type' => 'node',
    'title' => 'FJ16 Choose bulk job',
    'global' => 0,
    'types' => array(
      0 => 'fj16_bulk_job',
    ),
    'flag_short' => 'Choose this assignment',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Assignment selected',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
      'teaser' => 0,
      'rss' => 0,
      'token' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'fj16_programme_and_job_tool',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function fj16_programme_and_job_tool_node_info() {
  $items = array(
    'fj16_bulk_job' => array(
      'name' => t('FJ16 Bulk job'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
