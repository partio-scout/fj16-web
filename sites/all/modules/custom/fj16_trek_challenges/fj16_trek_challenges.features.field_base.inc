<?php
/**
 * @file
 * fj16_trek_challenges.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function fj16_trek_challenges_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_region'
  $field_bases['field_region'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_region',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Ahvenanmaa' => 'Ahvenanmaa',
        'Etelä-Karjala' => 'Etelä-Karjala',
        'Etelä-Pohjanmaa' => 'Etelä-Pohjanmaa',
        'Etelä-Savo' => 'Etelä-Savo',
        'Kajaani' => 'Kajaani',
        'Kanta-Häme' => 'Kanta-Häme',
        'Keski-Pohjanmaa' => 'Keski-Pohjanmaa',
        'Keski-Suomi' => 'Keski-Suomi',
        'Kymenlaakso' => 'Kymenlaakso',
        'Lappi' => 'Lappi',
        'Pirkanmaa' => 'Pirkanmaa',
        'Pohjanmaa' => 'Pohjanmaa',
        'Pohjois-Karjala' => 'Pohjois-Karjala',
        'Pohjois-Pohjanmaa' => 'Pohjois-Pohjanmaa',
        'Pohjois-Savo' => 'Pohjois-Savo',
        'Päijät-Häme' => 'Päijät-Häme',
        'Satakunta' => 'Satakunta',
        'Uusimaa' => 'Uusimaa',
        'Varsinais-Suomi' => 'Varsinais-Suomi',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_tarkempi_sijainti'
  $field_bases['field_tarkempi_sijainti'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tarkempi_sijainti',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_trek_contact_email'
  $field_bases['field_trek_contact_email'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_trek_contact_email',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_trek_contact_name'
  $field_bases['field_trek_contact_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_trek_contact_name',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_trek_contact_phone'
  $field_bases['field_trek_contact_phone'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_trek_contact_phone',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_trek_tags'
  $field_bases['field_trek_tags'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_trek_tags',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'fj16_trek_tags',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
