<?php
/**
 * @file
 * fj16_info_articles.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function fj16_info_articles_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_category_in_camp_unit_info'
  $field_bases['field_category_in_camp_unit_info'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_category_in_camp_unit_info',
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
          'vocabulary' => 'camp_unit_info',
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
