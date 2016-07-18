<?php
/**
 * @file
 * fj16_special_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fj16_special_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function fj16_special_pages_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function fj16_special_pages_node_info() {
  $items = array(
    'fj16_special_page' => array(
      'name' => t('FJ16 Special page'),
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
