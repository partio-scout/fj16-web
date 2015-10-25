<?php
/**
 * @file
 * fj16_special_pages.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fj16_special_pages_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fj16_special_page content'.
  $permissions['create fj16_special_page content'] = array(
    'name' => 'create fj16_special_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any fj16_special_page content'.
  $permissions['delete any fj16_special_page content'] = array(
    'name' => 'delete any fj16_special_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own fj16_special_page content'.
  $permissions['delete own fj16_special_page content'] = array(
    'name' => 'delete own fj16_special_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any fj16_special_page content'.
  $permissions['edit any fj16_special_page content'] = array(
    'name' => 'edit any fj16_special_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own fj16_special_page content'.
  $permissions['edit own fj16_special_page content'] = array(
    'name' => 'edit own fj16_special_page content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
