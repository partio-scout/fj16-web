<?php
/**
 * @file
 * fj16_lost_and_found.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fj16_lost_and_found_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function fj16_lost_and_found_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function fj16_lost_and_found_node_info() {
  $items = array(
    'fj16_lost_and_found' => array(
      'name' => t('Löytötavara'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Mikä'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
