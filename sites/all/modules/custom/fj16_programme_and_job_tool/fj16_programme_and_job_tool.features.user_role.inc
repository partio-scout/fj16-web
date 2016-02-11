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

  // Exported role: explorer.
  $roles['explorer'] = array(
    'name' => 'explorer',
    'weight' => 5,
  );

  // Exported role: jobs editor.
  $roles['jobs editor'] = array(
    'name' => 'jobs editor',
    'weight' => 3,
  );

  // Exported role: rover or adult.
  $roles['rover or adult'] = array(
    'name' => 'rover or adult',
    'weight' => 6,
  );

  return $roles;
}
