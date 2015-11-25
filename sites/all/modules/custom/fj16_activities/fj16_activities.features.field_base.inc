<?php
/**
 * @file
 * fj16_activities.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function fj16_activities_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_activity_category'
  $field_bases['field_activity_category'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_activity_category',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'cub_scouts' => 'Sudenpennut',
        'adventurers' => 'Seikkailijat',
        'trackers' => 'Tarpojat',
        'explorers' => 'Samoajat',
        'rovers' => 'Vaeltajat',
        'summer_camp' => 'Kesäleiri',
        'global_education' => 'Globaalikasvatus',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_gear'
  $field_bases['field_gear'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_gear',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_links_and_tips'
  $field_bases['field_links_and_tips'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_links_and_tips',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  return $field_bases;
}
