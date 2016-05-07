<?php
/**
 * @file
 * fj16_info_articles.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function fj16_info_articles_taxonomy_default_vocabularies() {
  return array(
    'camp_unit_info' => array(
      'name' => 'Camp unit info',
      'machine_name' => 'camp_unit_info',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
    ),
    'participant_info' => array(
      'name' => 'Participant info',
      'machine_name' => 'participant_info',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
    ),
  );
}
