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
