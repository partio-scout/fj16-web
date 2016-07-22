<?php
/**
 * @file
 * fj16_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fj16_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function fj16_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function fj16_news_image_default_styles() {
  $styles = array();

  // Exported image style: fj16_news_full.
  $styles['fj16_news_full'] = array(
    'label' => 'FJ16 News full',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1000,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: fj16_news_lightbox.
  $styles['fj16_news_lightbox'] = array(
    'label' => 'FJ16 News lightbox',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1000,
          'height' => 800,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: fj16_news_teaser.
  $styles['fj16_news_teaser'] = array(
    'label' => 'FJ16 News teaser',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 225,
          'height' => '',
          'upscale' => 0,
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
function fj16_news_node_info() {
  $items = array(
    'fj16_news_article' => array(
      'name' => t('FJ16 News article'),
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
