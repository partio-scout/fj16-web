<?php
/**
 * @file
 * fj16_base.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function fj16_base_user_default_roles() {
  $roles = array();

  // Exported role: content editor.
  $roles['content editor'] = array(
    'name' => 'content editor',
    'weight' => 2,
  );

  return $roles;
}
