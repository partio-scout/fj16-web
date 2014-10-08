<?php
/**
 * @file
 * fj16_base.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function fj16_base_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['global']['default'] = array(
  'theme_default' => 'bartik',
  'cron_key' => 'Cisf8-hlq8JLbz_1XySx9DqfqphzTIy-QOn6iijl1_E',
  'file_temporary_path' => '/tmp',
  'install_task' => 'done',
  'path_alias_whitelist' => array(),
  'filter_fallback_format' => 'plain_text',
  'user_register' => 2,
  'css_js_query_string' => 'nd1nh7',
  'menu_masks' => array(
    0 => 501,
    1 => 250,
    2 => 245,
    3 => 242,
    4 => 126,
    5 => 125,
    6 => 124,
    7 => 122,
    8 => 121,
    9 => 63,
    10 => 62,
    11 => 61,
    12 => 60,
    13 => 44,
    14 => 31,
    15 => 30,
    16 => 29,
    17 => 24,
    18 => 21,
    19 => 15,
    20 => 14,
    21 => 11,
    22 => 7,
    23 => 6,
    24 => 5,
    25 => 3,
    26 => 2,
    27 => 1,
  ),
  'menu_expanded' => array(),
  'site_name' => 'Roihu 2016',
  'site_mail' => 'admin@example.com',
  'date_default_timezone' => 'UTC',
  'site_default_country' => '',
  'update_notify_emails' => array(
    0 => 'admin@example.com',
  ),
  'clean_url' => TRUE,
  'install_time' => 1412633682,
  'install_profile' => 'minimal',
  'drupal_private_key' => 'QJUe4rHpUVJTDMyWhRFUHv_fVPDTLaU52eurpuJY2CY',
  'update_last_check' => 1412795496,
  'cron_last' => 1412795493,
  'language_negotiation_language_content' => array(
    'locale-interface' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_interface',
      ),
      'file' => 'includes/locale.inc',
    ),
  ),
  'language_negotiation_language_url' => array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-url-fallback' => array(
      'callbacks' => array(
        'language' => 'locale_language_url_fallback',
      ),
      'file' => 'includes/locale.inc',
    ),
  ),
  'language_types' => array(
    'language' => TRUE,
    'language_content' => FALSE,
    'language_url' => FALSE,
  ),
  'language_negotiation_language' => array(),
  'features_ignored_orphans' => array(),
  'pathauto_node_pattern' => 'content/[node:title]',
  'pathauto_taxonomy_term_pattern' => '[term:vocabulary]/[term:name]',
  'pathauto_forum_pattern' => '[term:vocabulary]/[term:name]',
  'pathauto_user_pattern' => 'users/[user:name]',
  'pathauto_blog_pattern' => 'blogs/[user:name]',
  'pathauto_punctuation_hyphen' => 1,
  'variable_realm_list_language' => array(
    0 => 'site_name',
    1 => 'site_slogan',
  ),
  'variable_module_list' => array(
    'i18n' => array(
      0 => 'i18n_language_list',
    ),
    'i18n_string' => array(
      0 => 'i18n_string_translate_langcode_en',
      1 => 'i18n_string_allowed_formats',
      2 => 'i18n_string_source_language',
      3 => 'i18n_string_debug',
    ),
    'i18n_node' => array(
      0 => 'i18n_hide_translation_links',
      1 => 'i18n_node_default_language_none',
      2 => 'i18n_node_options_[node_type]',
      3 => 'i18n_node_extended_[node_type]',
    ),
    'i18n_select' => array(
      0 => 'i18n_select_nodes',
      1 => 'i18n_select_taxonomy',
      2 => 'i18n_select_page_mode',
      3 => 'i18n_select_page_list',
      4 => 'i18n_select_page_block',
      5 => 'i18n_select_skip_tags',
    ),
    'variable_realm' => array(
      0 => 'variable_realm_list_global',
      1 => 'variable_realm_list_language',
      2 => 'variable_realm_weight_global',
      3 => 'variable_realm_weight_language',
    ),
    'i18n_variable' => array(
      0 => 'i18n_variable_conf',
      1 => 'i18n_variable_list',
    ),
  ),
  'javascript_parsed' => array(
    0 => 'misc/drupal.js',
    1 => 'misc/jquery.js',
    2 => 'misc/jquery.once.js',
    3 => 'misc/tableheader.js',
    4 => 'misc/form.js',
    5 => 'misc/collapse.js',
    6 => 'misc/jquery.cookie.js',
    7 => 'modules/toolbar/toolbar.js',
    8 => 'sites/all/modules/contrib/admin_menu/admin_menu.js',
    9 => 'misc/tabledrag.js',
    10 => 'modules/block/block.js',
    11 => 'misc/textarea.js',
    12 => 'sites/all/modules/contrib/i18n/i18n_block/i18n_block.js',
    13 => 'misc/vertical-tabs.js',
    14 => 'misc/states.js',
    'refresh:sv' => 'waiting',
    15 => 'sites/all/modules/contrib/features/features.js',
    16 => 'misc/machine-name.js',
    17 => 'misc/autocomplete.js',
    18 => 'misc/jquery.form.js',
    19 => 'misc/progress.js',
    20 => 'misc/ajax.js',
    21 => 'misc/ui/jquery.ui.core.min.js',
    22 => 'misc/ui/jquery.ui.widget.min.js',
    23 => 'misc/ui/jquery.ui.button.min.js',
    24 => 'misc/ui/jquery.ui.mouse.min.js',
    25 => 'misc/ui/jquery.ui.draggable.min.js',
    26 => 'misc/ui/jquery.ui.position.min.js',
    27 => 'misc/ui/jquery.ui.resizable.min.js',
    28 => 'misc/ui/jquery.ui.dialog.min.js',
    29 => 'sites/all/modules/contrib/views/js/jquery.ui.dialog.patch.js',
  ),
  'language_count' => 3,
  'language_default' => array(
    'language' => 'fi',
    'name' => 'Finnish',
    'native' => 'Suomi',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'fi',
    'weight' => -10,
    'javascript' => '',
    'provider' => 'language-default',
  ),
  'ctools_last_cron' => 1412795493,
  '404_fast_paths_exclude' => '/\\/(?:styles)\\//',
  '404_fast_paths' => '/\\.(?:txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp)$/i',
  '404_fast_html' => '<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN" "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd"><html xmlns="http://www.w3.org/1999/xhtml"><head><title>404 Not Found</title></head><body><h1>Not Found</h1><p>The requested URL "@path" was not found on this server.</p></body></html>',
);
  $realm_variables['language']['en'] = array();
  $realm_variables['language']['fi'] = array();
  $realm_variables['language']['sv'] = array();

return $realm_variables;
}
