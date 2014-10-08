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
  'theme_default' => 'fj16',
  'cron_key' => 'Cisf8-hlq8JLbz_1XySx9DqfqphzTIy-QOn6iijl1_E',
  'file_temporary_path' => '/tmp',
  'install_task' => 'done',
  'path_alias_whitelist' => array(),
  'filter_fallback_format' => 'plain_text',
  'user_register' => 0,
  'css_js_query_string' => 'nd57kf',
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
  'date_default_timezone' => 'Europe/Helsinki',
  'site_default_country' => 'FI',
  'update_notify_emails' => array(
    0 => 'admin@example.com',
  ),
  'clean_url' => TRUE,
  'install_time' => 1412633682,
  'install_profile' => 'minimal',
  'drupal_private_key' => 'QJUe4rHpUVJTDMyWhRFUHv_fVPDTLaU52eurpuJY2CY',
  'update_last_check' => 1412800148,
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
  'language_negotiation_language' => array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'language-default' => array(
      'callbacks' => array(
        'language' => 'language_from_default',
      ),
    ),
  ),
  'features_ignored_orphans' => array(),
  'pathauto_node_pattern' => '[node:menu-link:parents:join-path]/[node:title]',
  'pathauto_taxonomy_term_pattern' => '[term:vocabulary]/[term:name]',
  'pathauto_forum_pattern' => '[term:vocabulary]/[term:name]',
  'pathauto_user_pattern' => 'users/[user:name]',
  'pathauto_blog_pattern' => 'blogs/[user:name]',
  'pathauto_punctuation_hyphen' => 1,
  'variable_realm_list_language' => array(
    0 => 'site_name',
    1 => 'site_slogan',
    2 => 'anonymous',
    3 => 'maintenance_mode_message',
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
  'language_count' => 3,
  'language_default' => array(
    'language' => 'fi',
    'name' => 'Finnish',
    'native' => 'Suomi',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'fi',
    'weight' => -10,
    'javascript' => '64CNqrBSQJQC6ZoVFpW0YSkgW3A5kLZRBOh66ZwvI_E',
  ),
  'ctools_last_cron' => 1412795493,
  'image_toolkit' => 'gd',
  'file_public_path' => 'sites/default/files',
  'file_private_path' => '../drupal_private',
  'file_default_scheme' => 'public',
  'image_jpeg_quality' => 90,
  'anonymous' => 'Anonymous',
  'user_admin_role' => 0,
  'user_email_verification' => 1,
  'user_cancel_method' => 'user_cancel_reassign',
  'user_signatures' => 0,
  'user_pictures' => 0,
  'user_picture_path' => 'pictures',
  'user_picture_default' => '',
  'user_picture_style' => '',
  'user_picture_dimensions' => '85x85',
  'user_picture_file_size' => 30,
  'user_picture_guidelines' => '',
  'email__active_tab' => 'edit-email-admin-created',
  'user_mail_register_admin_created_subject' => 'An administrator created an account for you at [site:name]',
  'user_mail_register_admin_created_body' => '[user:name],

A site administrator at [site:name] has created an account for you. You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team',
  'user_mail_register_pending_approval_subject' => 'Account details for [user:name] at [site:name] (pending admin approval)',
  'user_mail_register_pending_approval_body' => '[user:name],

Thank you for registering at [site:name]. Your application for an account is currently pending approval. Once it has been approved, you will receive another e-mail containing information about how to log in, set your password, and other details.


--  [site:name] team',
  'user_mail_register_no_approval_required_subject' => 'Account details for [user:name] at [site:name]',
  'user_mail_register_no_approval_required_body' => '[user:name],

Thank you for registering at [site:name]. You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team',
  'user_mail_password_reset_subject' => 'Replacement login information for [user:name] at [site:name]',
  'user_mail_password_reset_body' => '[user:name],

A request to reset the password for your account has been made at [site:name].

You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password. It expires after one day and nothing will happen if it\'s not used.

--  [site:name] team',
  'user_mail_status_activated_notify' => 1,
  'user_mail_status_activated_subject' => 'Account details for [user:name] at [site:name] (approved)',
  'user_mail_status_activated_body' => '[user:name],

Your account at [site:name] has been activated.

You may now log in by clicking this link or copying and pasting it into your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team',
  'user_mail_status_blocked_notify' => 0,
  'user_mail_status_blocked_subject' => 'Account details for [user:name] at [site:name] (blocked)',
  'user_mail_status_blocked_body' => '[user:name],

Your account on [site:name] has been blocked.

--  [site:name] team',
  'user_mail_cancel_confirm_subject' => 'Account cancellation request for [user:name] at [site:name]',
  'user_mail_cancel_confirm_body' => '[user:name],

A request to cancel your account has been made at [site:name].

You may now cancel your account on [site:url-brief] by clicking this link or copying and pasting it into your browser:

[user:cancel-url]

NOTE: The cancellation of your account is not reversible.

This link expires in one day and nothing will happen if it is not used.

--  [site:name] team',
  'user_mail_status_canceled_notify' => 0,
  'user_mail_status_canceled_subject' => 'Account details for [user:name] at [site:name] (canceled)',
  'user_mail_status_canceled_body' => '[user:name],

Your account on [site:name] has been canceled.

--  [site:name] team',
  'pathauto_verbose' => 0,
  'pathauto_separator' => '-',
  'pathauto_case' => 1,
  'pathauto_max_length' => 100,
  'pathauto_max_component_length' => 100,
  'pathauto_update_action' => 2,
  'pathauto_transliterate' => 1,
  'pathauto_reduce_ascii' => 1,
  'pathauto_ignore_words' => '',
  'pathauto_punctuation_double_quotes' => 0,
  'pathauto_punctuation_quotes' => 0,
  'pathauto_punctuation_backtick' => 0,
  'pathauto_punctuation_comma' => 0,
  'pathauto_punctuation_period' => 0,
  'pathauto_punctuation_underscore' => 0,
  'pathauto_punctuation_colon' => 0,
  'pathauto_punctuation_semicolon' => 0,
  'pathauto_punctuation_pipe' => 0,
  'pathauto_punctuation_left_curly' => 0,
  'pathauto_punctuation_left_square' => 0,
  'pathauto_punctuation_right_curly' => 0,
  'pathauto_punctuation_right_square' => 0,
  'pathauto_punctuation_plus' => 0,
  'pathauto_punctuation_equal' => 0,
  'pathauto_punctuation_asterisk' => 0,
  'pathauto_punctuation_ampersand' => 0,
  'pathauto_punctuation_percent' => 0,
  'pathauto_punctuation_caret' => 0,
  'pathauto_punctuation_dollar' => 0,
  'pathauto_punctuation_hash' => 0,
  'pathauto_punctuation_at' => 0,
  'pathauto_punctuation_exclamation' => 0,
  'pathauto_punctuation_tilde' => 0,
  'pathauto_punctuation_left_parenthesis' => 0,
  'pathauto_punctuation_right_parenthesis' => 0,
  'pathauto_punctuation_question_mark' => 0,
  'pathauto_punctuation_less_than' => 0,
  'pathauto_punctuation_greater_than' => 0,
  'pathauto_punctuation_slash' => 0,
  'pathauto_punctuation_back_slash' => 0,
  'redirect_auto_redirect' => 1,
  'redirect_passthrough_querystring' => 1,
  'redirect_warning' => FALSE,
  'redirect_default_status_code' => 301,
  'redirect_page_cache' => 0,
  'redirect_purge_inactive' => 0,
  'redirect_global_home' => 1,
  'redirect_global_clean' => 1,
  'redirect_global_canonical' => 1,
  'redirect_global_deslash' => 0,
  'redirect_global_admin_paths' => 0,
  'i18n_string_allowed_formats' => array(
    'full_html' => 'full_html',
    'plain_text' => 'plain_text',
  ),
  'i18n_string_source_language' => 'fi',
  'locale_language_providers_weight_language' => array(
    'locale-url' => -8,
    'locale-session' => -6,
    'locale-user' => -4,
    'locale-browser' => -2,
    'language-default' => 10,
  ),
  'locale_language_negotiation_url_part' => 0,
  'date_first_day' => 1,
  'configurable_timezones' => 0,
  'empty_timezone_message' => 0,
  'user_default_timezone' => 0,
  'admin_theme' => 'seven',
  'node_admin_theme' => 0,
  'menu_main_links_source' => 'main-menu',
  'menu_secondary_links_source' => 'user-menu',
  'features_semaphore' => array(),
  'features_codecache' => array(
    'fj16_base' => array(
      'filter' => '7464fa39844d973ed9c41db3fb2a0509',
      'language' => '43f7750f41aab994637a1fba5deb8c5b',
      'menu_custom' => 'cd80c9fe432c12127dca6444105a0a2e',
      'user_permission' => '3697fb15fcd74270e70359e831ca5ac0',
      'user_role' => '13fa3ef3699d7dae83b03a4b0fa51bb1',
      'dependencies' => 'ccd7096e54e8e4c28de039bfde696b86',
      'variable' => 'ee09a00c176406f457c827a84e9f4028',
      'variable_realm' => '613dd4a6955905b56618baca03b7a269',
      'translations' => '123d73a5a6d1ed20b51d205826877661',
    ),
  ),
  '404_fast_paths_exclude' => '/\\/(?:styles)\\//',
  '404_fast_paths' => '/\\.(?:txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp)$/i',
  '404_fast_html' => '<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN" "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd"><html xmlns="http://www.w3.org/1999/xhtml"><head><title>404 Not Found</title></head><body><h1>Not Found</h1><p>The requested URL "@path" was not found on this server.</p></body></html>',
  'javascript_parsed' => array(
    0 => 'misc/drupal.js',
    1 => 'misc/jquery.js',
    2 => 'misc/jquery.once.js',
    3 => 'sites/all/modules/contrib/features/features.js',
    4 => 'misc/form.js',
    5 => 'misc/collapse.js',
    6 => 'misc/machine-name.js',
    7 => 'misc/autocomplete.js',
    8 => 'misc/jquery.cookie.js',
    9 => 'misc/jquery.form.js',
    10 => 'misc/progress.js',
    11 => 'misc/ajax.js',
    12 => 'misc/ui/jquery.ui.core.min.js',
    13 => 'misc/ui/jquery.ui.widget.min.js',
    14 => 'misc/ui/jquery.ui.button.min.js',
    15 => 'misc/ui/jquery.ui.mouse.min.js',
    16 => 'misc/ui/jquery.ui.draggable.min.js',
    17 => 'misc/ui/jquery.ui.position.min.js',
    18 => 'misc/ui/jquery.ui.resizable.min.js',
    19 => 'misc/ui/jquery.ui.dialog.min.js',
    20 => 'sites/all/modules/contrib/views/js/jquery.ui.dialog.patch.js',
    21 => 'modules/toolbar/toolbar.js',
    22 => 'sites/all/modules/contrib/admin_menu/admin_menu.js',
    23 => 'misc/tableheader.js',
    24 => 'misc/tabledrag.js',
    'refresh:sv' => 'waiting',
    25 => 'sites/all/modules/contrib/l10n_update/js/l10n_update.js',
    26 => 'misc/vertical-tabs.js',
    27 => 'misc/states.js',
  ),
);
  $realm_variables['language']['en'] = array();
  $realm_variables['language']['fi'] = array();
  $realm_variables['language']['sv'] = array();

return $realm_variables;
}
