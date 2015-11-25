<?php
/**
 * @file
 * fj16_activities.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fj16_activities_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function fj16_activities_node_info() {
  $items = array(
    'fj16_activity' => array(
      'name' => t('Aktiviteetti'),
      'base' => 'node_content',
      'description' => t('Kipinäaktiviteetti'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
