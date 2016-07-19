<?php
/**
 * @file
 * fj16_lost_and_found.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function fj16_lost_and_found_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_found_date'.
  $field_bases['field_found_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_found_date',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'entity_translation_sync' => FALSE,
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'date',
  );

  // Exported field_base: 'field_found_where'.
  $field_bases['field_found_where'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_found_where',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Minälaakso' => 'Minälaakso',
        'Luovuuslaakso' => 'Luovuuslaakso',
        'Vesilaakso' => 'Vesilaakso',
        'Globaalilaakso' => 'Globaalilaakso',
        'Metsälaakso' => 'Metsälaakso',
        'Elämyslaakso' => 'Elämyslaakso',
        'Samoajaohjelma' => 'Samoajaohjelma',
        'Vaeltajaohjelma' => 'Vaeltajaohjelma',
        'EVT-ohjelma' => 'EVT-ohjelma',
        'Keidas' => 'Keidas',
        'Ravintola Tilhi' => 'Ravintola Tilhi',
        'Kahvila Tauko' => 'Kahvila Tauko',
        'Kahvila Tempo' => 'Kahvila Tempo',
        'Kahvila Soolo' => 'Kahvila Soolo',
        'Kahvila Intro' => 'Kahvila Intro',
        'Pääkahvila' => 'Pääkahvila',
        'Iltakahvila' => 'Iltakahvila',
        'Päälava' => 'Päälava',
        'Sauna Pohjoinen' => 'Sauna Pohjoinen',
        'Sauna Eteläinen' => 'Sauna Eteläinen',
        'Keittiö Riehu' => 'Keittiö Riehu',
        'Keittiö Humina' => 'Keittiö Humina',
        'Keittiö Hurma' => 'Keittiö Hurma',
        'Keittiö Syke' => 'Keittiö Syke',
        'Keittiö Raiku' => 'Keittiö Raiku',
        'Keittiö Unity' => 'Keittiö Unity',
        'Keittiö Polte' => 'Keittiö Polte',
        'Riehu' => 'Riehu',
        'Humina' => 'Humina',
        'Hurma' => 'Hurma',
        'Syke' => 'Syke',
        'Raiku' => 'Raiku',
        'Unity' => 'Unity',
        'Polte' => 'Polte',
        'Muu' => 'Muu',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_internal_notes'.
  $field_bases['field_internal_notes'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_internal_notes',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_owner'.
  $field_bases['field_owner'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_owner',
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

  // Exported field_base: 'field_owner_found'.
  $field_bases['field_owner_found'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_owner_found',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Omistaja ei tiedossa',
        1 => 'Omistaja löytynyt',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_tavaran_luovuttaja'.
  $field_bases['field_tavaran_luovuttaja'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tavaran_luovuttaja',
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

  return $field_bases;
}
