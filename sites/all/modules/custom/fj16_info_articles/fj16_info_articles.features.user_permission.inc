<?php
/**
 * @file
 * fj16_info_articles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fj16_info_articles_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in camp_unit_info'.
  $permissions['add terms in camp_unit_info'] = array(
    'name' => 'add terms in camp_unit_info',
    'roles' => array(
      'info article editor' => 'info article editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in participant_info'.
  $permissions['add terms in participant_info'] = array(
    'name' => 'add terms in participant_info',
    'roles' => array(
      'info article editor' => 'info article editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'create fj16_info_article content'.
  $permissions['create fj16_info_article content'] = array(
    'name' => 'create fj16_info_article content',
    'roles' => array(
      'info article editor' => 'info article editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any fj16_info_article content'.
  $permissions['delete any fj16_info_article content'] = array(
    'name' => 'delete any fj16_info_article content',
    'roles' => array(
      'info article editor' => 'info article editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own fj16_info_article content'.
  $permissions['delete own fj16_info_article content'] = array(
    'name' => 'delete own fj16_info_article content',
    'roles' => array(
      'info article editor' => 'info article editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in camp_unit_info'.
  $permissions['delete terms in camp_unit_info'] = array(
    'name' => 'delete terms in camp_unit_info',
    'roles' => array(
      'info article editor' => 'info article editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in participant_info'.
  $permissions['delete terms in participant_info'] = array(
    'name' => 'delete terms in participant_info',
    'roles' => array(
      'info article editor' => 'info article editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any fj16_info_article content'.
  $permissions['edit any fj16_info_article content'] = array(
    'name' => 'edit any fj16_info_article content',
    'roles' => array(
      'info article editor' => 'info article editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own fj16_info_article content'.
  $permissions['edit own fj16_info_article content'] = array(
    'name' => 'edit own fj16_info_article content',
    'roles' => array(
      'info article editor' => 'info article editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in camp_unit_info'.
  $permissions['edit terms in camp_unit_info'] = array(
    'name' => 'edit terms in camp_unit_info',
    'roles' => array(
      'info article editor' => 'info article editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in participant_info'.
  $permissions['edit terms in participant_info'] = array(
    'name' => 'edit terms in participant_info',
    'roles' => array(
      'info article editor' => 'info article editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'use text format fj16_markdown'.
  $permissions['use text format fj16_markdown'] = array(
    'name' => 'use text format fj16_markdown',
    'roles' => array(),
    'module' => 'filter',
  );

  return $permissions;
}
