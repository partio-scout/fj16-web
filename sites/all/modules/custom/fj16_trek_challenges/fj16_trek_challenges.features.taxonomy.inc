<?php
/**
 * @file
 * fj16_trek_challenges.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function fj16_trek_challenges_taxonomy_default_vocabularies() {
  return array(
    'fj16_trek_tags' => array(
      'name' => 'FJ16 Trek tags',
      'machine_name' => 'fj16_trek_tags',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
  );
}
