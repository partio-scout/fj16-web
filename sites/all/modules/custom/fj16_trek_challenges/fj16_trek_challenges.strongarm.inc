<?php
/**
 * @file
 * fj16_trek_challenges.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fj16_trek_challenges_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__fj16_trek_challenge';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__fj16_trek_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_fj16_trek_challenge_node_form';
  $strongarm->value = 1;
  $export['honeypot_form_fj16_trek_challenge_node_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_fj16_trek_challenge';
  $strongarm->value = '0';
  $export['language_content_type_fj16_trek_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_fj16_trek_challenge';
  $strongarm->value = array();
  $export['menu_options_fj16_trek_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_fj16_trek_challenge';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_fj16_trek_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_fj16_trek_challenge';
  $strongarm->value = array();
  $export['node_options_fj16_trek_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_fj16_trek_challenge';
  $strongarm->value = '1';
  $export['node_preview_fj16_trek_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_fj16_trek_challenge';
  $strongarm->value = 0;
  $export['node_submitted_fj16_trek_challenge'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_fj16_trek_challenge_pattern';
  $strongarm->value = 'retkihaaste/[node:title]';
  $export['pathauto_node_fj16_trek_challenge_pattern'] = $strongarm;

  return $export;
}
