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

  $export['language_switcher_fallback-language-switcher-fallback'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'language-switcher-fallback',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'language_switcher_fallback',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'fj16' => array(
        'region' => 'language_chooser',
        'status' => 1,
        'theme' => 'fj16',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
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
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
