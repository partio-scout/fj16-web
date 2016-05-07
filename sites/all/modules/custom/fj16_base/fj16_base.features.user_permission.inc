<?php
/**
 * @file
 * fj16_base.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fj16_base_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'activity editor' => 'activity editor',
      'content editor' => 'content editor',
      'info article editor' => 'info article editor',
      'jobs editor' => 'jobs editor',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'activity editor' => 'activity editor',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'info article editor' => 'info article editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'activity editor' => 'activity editor',
      'content editor' => 'content editor',
      'info article editor' => 'info article editor',
      'jobs editor' => 'jobs editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'access the block administration page'.
  $permissions['access the block administration page'] = array(
    'name' => 'access the block administration page',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'access toolbar'.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      'activity editor' => 'activity editor',
      'content editor' => 'content editor',
      'info article editor' => 'info article editor',
      'jobs editor' => 'jobs editor',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'jobs editor' => 'jobs editor',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer block access settings'.
  $permissions['administer block access settings'] = array(
    'name' => 'administer block access settings',
    'roles' => array(),
    'module' => 'block_access',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(),
    'module' => 'block',
  );

  // Exported permission: 'administer content translations'.
  $permissions['administer content translations'] = array(
    'name' => 'administer content translations',
    'roles' => array(),
    'module' => 'i18n_node',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(),
    'module' => 'image',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(),
    'module' => 'locale',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'redirect',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'configure all block body fields'.
  $permissions['configure all block body fields'] = array(
    'name' => 'configure all block body fields',
    'roles' => array(),
    'module' => 'block_access',
  );

  // Exported permission: 'configure all block descriptions'.
  $permissions['configure all block descriptions'] = array(
    'name' => 'configure all block descriptions',
    'roles' => array(),
    'module' => 'block_access',
  );

  // Exported permission: 'configure all block titles'.
  $permissions['configure all block titles'] = array(
    'name' => 'configure all block titles',
    'roles' => array(),
    'module' => 'block_access',
  );

  // Exported permission: 'configure all blocks'.
  $permissions['configure all blocks'] = array(
    'name' => 'configure all blocks',
    'roles' => array(),
    'module' => 'block_access',
  );

  // Exported permission: 'configure all content type visibility settings'.
  $permissions['configure all content type visibility settings'] = array(
    'name' => 'configure all content type visibility settings',
    'roles' => array(),
    'module' => 'block_access',
  );

  // Exported permission: 'configure all language settings'.
  $permissions['configure all language settings'] = array(
    'name' => 'configure all language settings',
    'roles' => array(),
    'module' => 'block_access',
  );

  // Exported permission: 'configure all page visibility settings'.
  $permissions['configure all page visibility settings'] = array(
    'name' => 'configure all page visibility settings',
    'roles' => array(),
    'module' => 'block_access',
  );

  // Exported permission: 'configure all region settings'.
  $permissions['configure all region settings'] = array(
    'name' => 'configure all region settings',
    'roles' => array(),
    'module' => 'block_access',
  );

  // Exported permission: 'configure all role visibility settings'.
  $permissions['configure all role visibility settings'] = array(
    'name' => 'configure all role visibility settings',
    'roles' => array(),
    'module' => 'block_access',
  );

  // Exported permission: 'configure all user visibility settings'.
  $permissions['configure all user visibility settings'] = array(
    'name' => 'configure all user visibility settings',
    'roles' => array(),
    'module' => 'block_access',
  );

  // Exported permission: 'configure all visibility settings'.
  $permissions['configure all visibility settings'] = array(
    'name' => 'configure all visibility settings',
    'roles' => array(),
    'module' => 'block_access',
  );

  // Exported permission: 'create blocks'.
  $permissions['create blocks'] = array(
    'name' => 'create blocks',
    'roles' => array(),
    'module' => 'block_access',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete all blocks'.
  $permissions['delete all blocks'] = array(
    'name' => 'delete all blocks',
    'roles' => array(),
    'module' => 'block_access',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'content editor' => 'content editor',
      'info article editor' => 'info article editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'disable all blocks'.
  $permissions['disable all blocks'] = array(
    'name' => 'disable all blocks',
    'roles' => array(),
    'module' => 'block_access',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit media'.
  $permissions['edit media'] = array(
    'name' => 'edit media',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'media',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(),
    'module' => 'webform',
  );

  // Exported permission: 'enable all blocks'.
  $permissions['enable all blocks'] = array(
    'name' => 'enable all blocks',
    'roles' => array(),
    'module' => 'block_access',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'media',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'move all blocks'.
  $permissions['move all blocks'] = array(
    'name' => 'move all blocks',
    'roles' => array(),
    'module' => 'block_access',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(),
    'module' => 'pathauto',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'content editor' => 'content editor',
      'info article editor' => 'info article editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'translate admin strings'.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'content editor' => 'content editor',
      'info article editor' => 'info article editor',
    ),
    'module' => 'translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'translate user-defined strings'.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'use text format fj16_block_content'.
  $permissions['use text format fj16_block_content'] = array(
    'name' => 'use text format fj16_block_content',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'activity editor' => 'activity editor',
      'content editor' => 'content editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view all blocks'.
  $permissions['view all blocks'] = array(
    'name' => 'view all blocks',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'block_access',
  );

  // Exported permission: 'view media'.
  $permissions['view media'] = array(
    'name' => 'view media',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'content editor' => 'content editor',
    ),
    'module' => 'media',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'activity editor' => 'activity editor',
      'content editor' => 'content editor',
      'info article editor' => 'info article editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'content editor' => 'content editor',
      'info article editor' => 'info article editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'activity editor' => 'activity editor',
      'content editor' => 'content editor',
      'jobs editor' => 'jobs editor',
    ),
    'module' => 'system',
  );

  return $permissions;
}
