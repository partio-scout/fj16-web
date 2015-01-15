<?php
/**
 * @file
 * fj16_job_ads.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fj16_job_ads_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fj16_job content'.
  $permissions['create fj16_job content'] = array(
    'name' => 'create fj16_job content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any fj16_job content'.
  $permissions['delete any fj16_job content'] = array(
    'name' => 'delete any fj16_job content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own fj16_job content'.
  $permissions['delete own fj16_job content'] = array(
    'name' => 'delete own fj16_job content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any fj16_job content'.
  $permissions['edit any fj16_job content'] = array(
    'name' => 'edit any fj16_job content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own fj16_job content'.
  $permissions['edit own fj16_job content'] = array(
    'name' => 'edit own fj16_job content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
