<?php
/**
 * @file
 * fj16_trek_challenges.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fj16_trek_challenges_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function fj16_trek_challenges_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function fj16_trek_challenges_node_info() {
  $items = array(
    'fj16_trek_challenge' => array(
      'name' => t('Retkihaaste'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Retken nimi'),
      'help' => t('Lähettämäsi retkihaaste tarkastetaan ennen julkaisua.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
