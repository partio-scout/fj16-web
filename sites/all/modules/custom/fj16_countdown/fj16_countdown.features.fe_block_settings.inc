<?php
/**
 * @file
 * fj16_countdown.features.fe_block_settings.inc
 */
/**
 * Implements hook_default_fe_block_settings().
 */
function fj16_countdown_default_fe_block_settings() {
  $export = array();
  $export['version'] = '2.0';
  $export['block-fj16_countdown'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(
      0 => 'en',
      1 => 'fi',
      2 => 'sv',
    ),
    'i18n_mode' => 1,
    'machine_name' => 'fj16_countdown',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'fj16' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'fj16',
        'weight' => -13,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );
  return $export;
}