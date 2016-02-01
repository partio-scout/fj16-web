<?php
/**
 * @file
 * fj16_programme_and_job_tool.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function fj16_programme_and_job_tool_taxonomy_default_vocabularies() {
  return array(
    'bulk_jobs_skill_areas' => array(
      'name' => 'Bulk jobs skill areas',
      'machine_name' => 'bulk_jobs_skill_areas',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
    ),
    'bulk_jobs_tags' => array(
      'name' => 'Bulk jobs tags',
      'machine_name' => 'bulk_jobs_tags',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
    ),
  );
}
