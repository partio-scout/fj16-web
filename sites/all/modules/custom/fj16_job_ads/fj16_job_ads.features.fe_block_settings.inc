<?php
/**
 * @file
 * fj16_job_ads.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function fj16_job_ads_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-fj16_job_ads_intro'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'machine_name' => 'fj16_job_ads_intro',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'pestit',
    'roles' => array(),
    'themes' => array(
      'fj16' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'fj16',
        'weight' => -11,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views--exp-fj16_jobs-page'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '-exp-fj16_jobs-page',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'pestit',
    'roles' => array(),
    'themes' => array(
      'fj16' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'fj16',
        'weight' => -10,
      ),
    ),
    'title' => 'Filter positions',
    'visibility' => 1,
  );

  return $export;
}
