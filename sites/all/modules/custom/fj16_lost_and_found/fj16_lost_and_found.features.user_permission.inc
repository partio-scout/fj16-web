<?php
/**
 * @file
 * fj16_lost_and_found.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fj16_lost_and_found_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fj16_lost_and_found content'.
  $permissions['create fj16_lost_and_found content'] = array(
    'name' => 'create fj16_lost_and_found content',
    'roles' => array(
      'lost and found' => 'lost and found',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any fj16_lost_and_found content'.
  $permissions['delete any fj16_lost_and_found content'] = array(
    'name' => 'delete any fj16_lost_and_found content',
    'roles' => array(
      'lost and found' => 'lost and found',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own fj16_lost_and_found content'.
  $permissions['delete own fj16_lost_and_found content'] = array(
    'name' => 'delete own fj16_lost_and_found content',
    'roles' => array(
      'lost and found' => 'lost and found',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any fj16_lost_and_found content'.
  $permissions['edit any fj16_lost_and_found content'] = array(
    'name' => 'edit any fj16_lost_and_found content',
    'roles' => array(
      'lost and found' => 'lost and found',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own fj16_lost_and_found content'.
  $permissions['edit own fj16_lost_and_found content'] = array(
    'name' => 'edit own fj16_lost_and_found content',
    'roles' => array(
      'lost and found' => 'lost and found',
    ),
    'module' => 'node',
  );

  return $permissions;
}
