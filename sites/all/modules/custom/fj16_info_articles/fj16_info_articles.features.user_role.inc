<?php
/**
 * @file
 * fj16_info_articles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function fj16_info_articles_user_default_roles() {
  $roles = array();

  // Exported role: info article editor.
  $roles['info article editor'] = array(
    'name' => 'info article editor',
    'weight' => 7,
  );

  return $roles;
}
