<?php
/**
 * @file
 * fj16_programme_and_job_tool.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fj16_programme_and_job_tool_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'fj16_bulk_jobs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'FJ16 Bulk jobs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'What\'s your assignment?';
  $handler->display->display_options['css_class'] = 'bulk-jobs-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Localized title (field_localized_title) */
  $handler->display->display_options['sorts']['field_localized_title_value']['id'] = 'field_localized_title_value';
  $handler->display->display_options['sorts']['field_localized_title_value']['table'] = 'field_data_field_localized_title';
  $handler->display->display_options['sorts']['field_localized_title_value']['field'] = 'field_localized_title_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fj16_bulk_job' => 'fj16_bulk_job',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Job type (field_job_type) */
  $handler->display->display_options['filters']['field_job_type_value']['id'] = 'field_job_type_value';
  $handler->display->display_options['filters']['field_job_type_value']['table'] = 'field_data_field_job_type';
  $handler->display->display_options['filters']['field_job_type_value']['field'] = 'field_job_type_value';
  $handler->display->display_options['filters']['field_job_type_value']['value'] = array(
    'rovers_and_adults' => 'rovers_and_adults',
  );
  $handler->display->display_options['filters']['field_job_type_value']['group'] = 1;
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'bulk_jobs_tags';
  /* Filter criterion: Content: Skill areas (field_skill_areas) */
  $handler->display->display_options['filters']['field_skill_areas_tid']['id'] = 'field_skill_areas_tid';
  $handler->display->display_options['filters']['field_skill_areas_tid']['table'] = 'field_data_field_skill_areas';
  $handler->display->display_options['filters']['field_skill_areas_tid']['field'] = 'field_skill_areas_tid';
  $handler->display->display_options['filters']['field_skill_areas_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_skill_areas_tid']['expose']['operator_id'] = 'field_skill_areas_tid_op';
  $handler->display->display_options['filters']['field_skill_areas_tid']['expose']['label'] = 'Skill areas';
  $handler->display->display_options['filters']['field_skill_areas_tid']['expose']['operator'] = 'field_skill_areas_tid_op';
  $handler->display->display_options['filters']['field_skill_areas_tid']['expose']['identifier'] = 'field_skill_areas_tid';
  $handler->display->display_options['filters']['field_skill_areas_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_skill_areas_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_skill_areas_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_skill_areas_tid']['vocabulary'] = 'bulk_jobs_skill_areas';
  /* Filter criterion: Content: Localized title (field_localized_title:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_field_localized_title';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***DEFAULT_LANGUAGE***' => '***DEFAULT_LANGUAGE***',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'generator/assignment';
  $translatables['fj16_bulk_jobs'] = array(
    t('Master'),
    t('What\'s your assignment?'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Tags'),
    t('Skill areas'),
    t('Page'),
  );
  $export['fj16_bulk_jobs'] = $view;

  $view = new view();
  $view->name = 'fj16_bulk_jobs_explorers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'FJ16 Bulk jobs explorers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'What\'s your assignment?';
  $handler->display->display_options['css_class'] = 'bulk-jobs-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Lajittele';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Localized title (field_localized_title) */
  $handler->display->display_options['sorts']['field_localized_title_value']['id'] = 'field_localized_title_value';
  $handler->display->display_options['sorts']['field_localized_title_value']['table'] = 'field_data_field_localized_title';
  $handler->display->display_options['sorts']['field_localized_title_value']['field'] = 'field_localized_title_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fj16_bulk_job' => 'fj16_bulk_job',
  );
  /* Filter criterion: Content: Job type (field_job_type) */
  $handler->display->display_options['filters']['field_job_type_value']['id'] = 'field_job_type_value';
  $handler->display->display_options['filters']['field_job_type_value']['table'] = 'field_data_field_job_type';
  $handler->display->display_options['filters']['field_job_type_value']['field'] = 'field_job_type_value';
  $handler->display->display_options['filters']['field_job_type_value']['value'] = array(
    'explorers' => 'explorers',
  );
  /* Filter criterion: Content: Tags (field_tags) */
  $handler->display->display_options['filters']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['filters']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator_id'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['label'] = 'Tags';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['operator'] = 'field_tags_tid_op';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['identifier'] = 'field_tags_tid';
  $handler->display->display_options['filters']['field_tags_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_tags_tid']['vocabulary'] = 'bulk_jobs_tags';
  /* Filter criterion: Content: Skill areas (field_skill_areas) */
  $handler->display->display_options['filters']['field_skill_areas_tid']['id'] = 'field_skill_areas_tid';
  $handler->display->display_options['filters']['field_skill_areas_tid']['table'] = 'field_data_field_skill_areas';
  $handler->display->display_options['filters']['field_skill_areas_tid']['field'] = 'field_skill_areas_tid';
  $handler->display->display_options['filters']['field_skill_areas_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_skill_areas_tid']['expose']['operator_id'] = 'field_skill_areas_tid_op';
  $handler->display->display_options['filters']['field_skill_areas_tid']['expose']['label'] = 'Skill areas';
  $handler->display->display_options['filters']['field_skill_areas_tid']['expose']['operator'] = 'field_skill_areas_tid_op';
  $handler->display->display_options['filters']['field_skill_areas_tid']['expose']['identifier'] = 'field_skill_areas_tid';
  $handler->display->display_options['filters']['field_skill_areas_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_skill_areas_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_skill_areas_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_skill_areas_tid']['vocabulary'] = 'bulk_jobs_skill_areas';
  /* Filter criterion: Content: Localized title (field_localized_title:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_field_localized_title';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***DEFAULT_LANGUAGE***' => '***DEFAULT_LANGUAGE***',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'generator/assignment/explorer';
  $translatables['fj16_bulk_jobs_explorers'] = array(
    t('Master'),
    t('What\'s your assignment?'),
    t('more'),
    t('Filter'),
    t('Reset'),
    t('Lajittele'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Tags'),
    t('Skill areas'),
    t('Page'),
  );
  $export['fj16_bulk_jobs_explorers'] = $view;

  $view = new view();
  $view->name = 'fj16_will_o_the_wisps';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'FJ16 Will-o\'-the-wisps';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Which will-o-the-wisp will you choose?';
  $handler->display->display_options['css_class'] = 'wotw-list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fj16_will_o_the_wisp' => 'fj16_will_o_the_wisp',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'generator/will-o-the-wisp';
  $translatables['fj16_will_o_the_wisps'] = array(
    t('Master'),
    t('Which will-o-the-wisp will you choose?'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page'),
  );
  $export['fj16_will_o_the_wisps'] = $view;

  return $export;
}
