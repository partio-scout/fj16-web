<?php
/**
 * @file
 * fj16_frontpage_boxes.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function fj16_frontpage_boxes_user_default_roles() {
  $roles = array();

  // Exported role: content editor.
  $roles['content editor'] = array(
    'name' => 'content editor',
    'weight' => 2,
  );

  return $roles;
}
