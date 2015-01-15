<?php
/**
 * @file
 * fj16_job_ads.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fj16_job_ads_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function fj16_job_ads_node_info() {
  $items = array(
    'fj16_job' => array(
      'name' => t('FJ16 Job'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Pestin nimi'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
