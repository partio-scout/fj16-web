<?php
/**
 * @file
 * fj16_programme_and_job_tool.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function fj16_programme_and_job_tool_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_job_image'
  $field_bases['field_job_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_job_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  return $field_bases;
}
