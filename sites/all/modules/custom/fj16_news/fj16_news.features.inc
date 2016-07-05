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
