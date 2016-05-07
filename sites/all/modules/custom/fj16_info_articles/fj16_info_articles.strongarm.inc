<?php
/**
 * @file
 * fj16_info_articles.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fj16_info_articles_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_fj16_info_article';
  $strongarm->value = '1';
  $export['i18n_node_extended_fj16_info_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_fj16_info_article';
  $strongarm->value = array(
    0 => 'required',
  );
  $export['i18n_node_options_fj16_info_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_fj16_info_article';
  $strongarm->value = '2';
  $export['language_content_type_fj16_info_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_fj16_info_article';
  $strongarm->value = array();
  $export['menu_options_fj16_info_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_fj16_info_article';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_fj16_info_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_fj16_info_article';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_fj16_info_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_fj16_info_article';
  $strongarm->value = '1';
  $export['node_preview_fj16_info_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_fj16_info_article';
  $strongarm->value = 1;
  $export['node_submitted_fj16_info_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_node_fj16_info_article';
  $strongarm->value = 0;
  $export['webform_node_fj16_info_article'] = $strongarm;

  return $export;
}
