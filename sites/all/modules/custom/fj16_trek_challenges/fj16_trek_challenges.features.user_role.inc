<?php
/**
 * @file
 * fj16_trek_challenges.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function fj16_trek_challenges_user_default_roles() {
  $roles = array();

  // Exported role: trek challenge editor.
  $roles['trek challenge editor'] = array(
    'name' => 'trek challenge editor',
    'weight' => 8,
  );

  return $roles;
}
