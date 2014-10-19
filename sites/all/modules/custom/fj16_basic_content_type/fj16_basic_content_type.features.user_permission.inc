<?php
/**
 * @file
 * fj16_basic_content_type.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fj16_basic_content_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fj16_basic_content_type content'.
  $permissions['create fj16_basic_content_type content'] = array(
    'name' => 'create fj16_basic_content_type content',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any fj16_basic_content_type content'.
  $permissions['delete any fj16_basic_content_type content'] = array(
    'name' => 'delete any fj16_basic_content_type content',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own fj16_basic_content_type content'.
  $permissions['delete own fj16_basic_content_type content'] = array(
    'name' => 'delete own fj16_basic_content_type content',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any fj16_basic_content_type content'.
  $permissions['edit any fj16_basic_content_type content'] = array(
    'name' => 'edit any fj16_basic_content_type content',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own fj16_basic_content_type content'.
  $permissions['edit own fj16_basic_content_type content'] = array(
    'name' => 'edit own fj16_basic_content_type content',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
