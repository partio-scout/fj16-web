<?php
/**
 * @file
 * fj16_frontpage_boxes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fj16_frontpage_boxes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function fj16_frontpage_boxes_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function fj16_frontpage_boxes_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: fj16_front_page_boxes
  $nodequeues['fj16_front_page_boxes'] = array(
    'name' => 'fj16_front_page_boxes',
    'title' => 'FJ16 Front page boxes',
    'subqueue_title' => '',
    'size' => 0,
    'link' => 'Add to front page',
    'link_remove' => 'Remove from front page',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'fj16_frontpage_box',
    ),
    'roles' => array(
      0 => 'content editor',
    ),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_image_default_styles().
 */
function fj16_frontpage_boxes_image_default_styles() {
  $styles = array();

  // Exported image style: fj6_frontpage_box_image.
  $styles['fj6_frontpage_box_image'] = array(
    'label' => 'FJ6 Frontpage box image',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 600,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function fj16_frontpage_boxes_node_info() {
  $items = array(
    'fj16_frontpage_box' => array(
      'name' => t('FJ16 Frontpage box'),
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
