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

  // Exported permission: 'administer entity translation'.
  $permissions['administer entity translation'] = array(
    'name' => 'administer entity translation',
    'roles' => array(),
    'module' => 'entity_translation',
  );

  // Exported permission: 'choose explorer programme'.
  $permissions['choose explorer programme'] = array(
    'name' => 'choose explorer programme',
    'roles' => array(
      'explorer' => 'explorer',
    ),
    'module' => 'fj16_programme_and_job_tool',
  );

  // Exported permission: 'choose rover or adult programme'.
  $permissions['choose rover or adult programme'] = array(
    'name' => 'choose rover or adult programme',
    'roles' => array(
      'rover or adult' => 'rover or adult',
    ),
    'module' => 'fj16_programme_and_job_tool',
  );

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

  // Exported permission: 'toggle field translatability'.
  $permissions['toggle field translatability'] = array(
    'name' => 'toggle field translatability',
    'roles' => array(),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate any entity'.
  $permissions['translate any entity'] = array(
    'name' => 'translate any entity',
    'roles' => array(
      'jobs editor' => 'jobs editor',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate node entities'.
  $permissions['translate node entities'] = array(
    'name' => 'translate node entities',
    'roles' => array(
      'jobs editor' => 'jobs editor',
    ),
    'module' => 'entity_translation',
  );

  return $permissions;
}
