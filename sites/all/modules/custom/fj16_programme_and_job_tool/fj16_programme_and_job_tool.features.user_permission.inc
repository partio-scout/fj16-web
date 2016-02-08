<?php
/**
 * @file
 * fj16_programme_and_job_tool.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fj16_programme_and_job_tool_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fj16_bulk_job content'.
  $permissions['create fj16_bulk_job content'] = array(
    'name' => 'create fj16_bulk_job content',
    'roles' => array(
      'jobs editor' => 'jobs editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create fj16_will_o_the_wisp content'.
  $permissions['create fj16_will_o_the_wisp content'] = array(
    'name' => 'create fj16_will_o_the_wisp content',
    'roles' => array(
      'jobs editor' => 'jobs editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any fj16_bulk_job content'.
  $permissions['delete any fj16_bulk_job content'] = array(
    'name' => 'delete any fj16_bulk_job content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any fj16_will_o_the_wisp content'.
  $permissions['delete any fj16_will_o_the_wisp content'] = array(
    'name' => 'delete any fj16_will_o_the_wisp content',
    'roles' => array(
      'jobs editor' => 'jobs editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own fj16_bulk_job content'.
  $permissions['delete own fj16_bulk_job content'] = array(
    'name' => 'delete own fj16_bulk_job content',
    'roles' => array(
      'jobs editor' => 'jobs editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own fj16_will_o_the_wisp content'.
  $permissions['delete own fj16_will_o_the_wisp content'] = array(
    'name' => 'delete own fj16_will_o_the_wisp content',
    'roles' => array(
      'jobs editor' => 'jobs editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any fj16_bulk_job content'.
  $permissions['edit any fj16_bulk_job content'] = array(
    'name' => 'edit any fj16_bulk_job content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any fj16_will_o_the_wisp content'.
  $permissions['edit any fj16_will_o_the_wisp content'] = array(
    'name' => 'edit any fj16_will_o_the_wisp content',
    'roles' => array(
      'jobs editor' => 'jobs editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own fj16_bulk_job content'.
  $permissions['edit own fj16_bulk_job content'] = array(
    'name' => 'edit own fj16_bulk_job content',
    'roles' => array(
      'jobs editor' => 'jobs editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own fj16_will_o_the_wisp content'.
  $permissions['edit own fj16_will_o_the_wisp content'] = array(
    'name' => 'edit own fj16_will_o_the_wisp content',
    'roles' => array(
      'jobs editor' => 'jobs editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
