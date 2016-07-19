<?php
/**
 * @file
 * fj16_lost_and_found.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function fj16_lost_and_found_user_default_roles() {
  $roles = array();

  // Exported role: lost and found.
  $roles['lost and found'] = array(
    'name' => 'lost and found',
    'weight' => 9,
  );

  return $roles;
}
