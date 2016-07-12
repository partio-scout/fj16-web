<?php
/**
 * @file
 * fj16_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fj16_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in news_category'.
  $permissions['add terms in news_category'] = array(
    'name' => 'add terms in news_category',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'create fj16_news_article content'.
  $permissions['create fj16_news_article content'] = array(
    'name' => 'create fj16_news_article content',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any fj16_news_article content'.
  $permissions['delete any fj16_news_article content'] = array(
    'name' => 'delete any fj16_news_article content',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own fj16_news_article content'.
  $permissions['delete own fj16_news_article content'] = array(
    'name' => 'delete own fj16_news_article content',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in news_category'.
  $permissions['delete terms in news_category'] = array(
    'name' => 'delete terms in news_category',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any fj16_news_article content'.
  $permissions['edit any fj16_news_article content'] = array(
    'name' => 'edit any fj16_news_article content',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own fj16_news_article content'.
  $permissions['edit own fj16_news_article content'] = array(
    'name' => 'edit own fj16_news_article content',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in news_category'.
  $permissions['edit terms in news_category'] = array(
    'name' => 'edit terms in news_category',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
