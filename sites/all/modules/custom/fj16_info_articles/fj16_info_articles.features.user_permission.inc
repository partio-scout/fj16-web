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

  // Exported permission: 'use text format fj16_markdown'.
  $permissions['use text format fj16_markdown'] = array(
    'name' => 'use text format fj16_markdown',
    'roles' => array(),
    'module' => 'filter',
  );

  return $permissions;
}
