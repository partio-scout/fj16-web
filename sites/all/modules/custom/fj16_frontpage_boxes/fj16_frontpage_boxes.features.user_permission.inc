<?php
/**
 * @file
 * fj16_frontpage_boxes.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fj16_frontpage_boxes_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer nodequeue'.
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(),
    'module' => 'nodequeue',
  );

  // Exported permission: 'create fj16_frontpage_box content'.
  $permissions['create fj16_frontpage_box content'] = array(
    'name' => 'create fj16_frontpage_box content',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any fj16_frontpage_box content'.
  $permissions['delete any fj16_frontpage_box content'] = array(
    'name' => 'delete any fj16_frontpage_box content',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own fj16_frontpage_box content'.
  $permissions['delete own fj16_frontpage_box content'] = array(
    'name' => 'delete own fj16_frontpage_box content',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any fj16_frontpage_box content'.
  $permissions['edit any fj16_frontpage_box content'] = array(
    'name' => 'edit any fj16_frontpage_box content',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own fj16_frontpage_box content'.
  $permissions['edit own fj16_frontpage_box content'] = array(
    'name' => 'edit own fj16_frontpage_box content',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'manipulate all queues'.
  $permissions['manipulate all queues'] = array(
    'name' => 'manipulate all queues',
    'roles' => array(),
    'module' => 'nodequeue',
  );

  // Exported permission: 'manipulate queues'.
  $permissions['manipulate queues'] = array(
    'name' => 'manipulate queues',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'nodequeue',
  );

  return $permissions;
}
