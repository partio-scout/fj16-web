<?php
/**
 * @file
 * fj16_activities.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function fj16_activities_user_default_roles() {
  $roles = array();

  // Exported role: activity editor.
  $roles['activity editor'] = array(
    'name' => 'activity editor',
    'weight' => 4,
  );

  return $roles;
}
