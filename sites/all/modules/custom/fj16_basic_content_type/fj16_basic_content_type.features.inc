<?php
/**
 * @file
 * fj16_basic_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fj16_basic_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function fj16_basic_content_type_node_info() {
  $items = array(
    'fj16_basic_content_type' => array(
      'name' => t('FJ16 Basic content type'),
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
