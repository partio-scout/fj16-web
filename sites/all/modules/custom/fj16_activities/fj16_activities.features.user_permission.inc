<?php
/**
 * @file
 * fj16_activities.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fj16_activities_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fj16_activity content'.
  $permissions['create fj16_activity content'] = array(
    'name' => 'create fj16_activity content',
    'roles' => array(
      'activity editor' => 'activity editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any fj16_activity content'.
  $permissions['delete any fj16_activity content'] = array(
    'name' => 'delete any fj16_activity content',
    'roles' => array(
      'activity editor' => 'activity editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own fj16_activity content'.
  $permissions['delete own fj16_activity content'] = array(
    'name' => 'delete own fj16_activity content',
    'roles' => array(
      'activity editor' => 'activity editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any fj16_activity content'.
  $permissions['edit any fj16_activity content'] = array(
    'name' => 'edit any fj16_activity content',
    'roles' => array(
      'activity editor' => 'activity editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own fj16_activity content'.
  $permissions['edit own fj16_activity content'] = array(
    'name' => 'edit own fj16_activity content',
    'roles' => array(
      'activity editor' => 'activity editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
