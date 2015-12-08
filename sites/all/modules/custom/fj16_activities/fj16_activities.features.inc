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
 * Implements hook_views_api().
 */
function fj16_activities_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function fj16_activities_image_default_styles() {
  $styles = array();

  // Exported image style: fj16_icon.
  $styles['fj16_icon'] = array(
    'label' => 'FJ16 icon',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 21,
          'height' => 21,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function fj16_activities_node_info() {
  $items = array(
    'fj16_activity' => array(
      'name' => t('Activity'),
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
