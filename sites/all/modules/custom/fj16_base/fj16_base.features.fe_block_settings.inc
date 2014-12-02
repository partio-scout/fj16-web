<?php
/**
 * @file
 * fj16_base.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function fj16_base_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-fj16_footer_content'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(
      0 => 'en',
      1 => 'fi',
      2 => 'sv',
    ),
    'i18n_mode' => 1,
    'machine_name' => 'fj16_footer_content',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'fj16' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'fj16',
        'weight' => 0,
      ),
    ),
    'title' => 'Footer',
    'visibility' => 0,
  );

  $export['menu-menu-social-media-links'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-social-media-links',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'fj16' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'fj16',
        'weight' => 2,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
