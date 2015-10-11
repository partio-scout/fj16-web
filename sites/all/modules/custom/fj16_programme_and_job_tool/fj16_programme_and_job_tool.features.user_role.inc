<?php
/**
 * @file
 * fj16_programme_and_job_tool.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function fj16_programme_and_job_tool_user_default_roles() {
  $roles = array();

  // Exported role: jobs editor.
  $roles['jobs editor'] = array(
    'name' => 'jobs editor',
    'weight' => 3,
  );

  return $roles;
}
