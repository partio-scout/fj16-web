<?php
/**
 * @file
 * fj16_activities.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function fj16_activities_taxonomy_default_vocabularies() {
  return array(
    'activity_category' => array(
      'name' => 'Activity category',
      'machine_name' => 'activity_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
  );
}
