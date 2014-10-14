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
 * Implements hook_image_default_styles().
 */
function fj16_frontpage_boxes_image_default_styles() {
  $styles = array();

  // Exported image style: fj6_frontpage_box_image.
  $styles['fj6_frontpage_box_image'] = array(
    'name' => 'fj6_frontpage_box_image',
    'label' => 'FJ6 Frontpage box image',
    'effects' => array(
      1 => array(
        'label' => 'Skaalaa ja leikkaa',
        'help' => 'Skaala ja leikkaa toiminto säilyttää kuvan alkuperäisen kuvasuhteen leikkaamalla pois alkuperäisen kuvasuhteen ylittävän osuuden kuvasta. Tämä on käytännöllistä kun halutaan luoda täsmälleen neliön muotoisia pikakuvakkeita venyttämättä itse kuvaa.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 988,
          'height' => 614,
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
