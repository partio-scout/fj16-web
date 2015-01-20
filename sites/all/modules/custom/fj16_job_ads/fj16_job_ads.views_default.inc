<?php
/**
 * @file
 * fj16_job_ads.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fj16_job_ads_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'fj16_jobs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'FJ16 Jobs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Avoimet pestit';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'lisää';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Rajaa pestejä';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Näytä kaikki';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Lajittele';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Edistyneet valinnat',
    ),
    'field_level_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_department_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Toiminta jos tuloksia ei löydy: Yleinen: Tekstialue */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>Ei yhtään näytettävää pestiä.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Kenttä: Sisältö: Otsikko */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Lajittelukriteeri: Sisältö: Otsikko */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Suodatinkriteeri: Sisältö: Julkaistu */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Suodatinkriteeri: Sisältö: Tyyppi */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'fj16_job' => 'fj16_job',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Suodatinkriteeri: Sisältö: Pestin taso (field_level) */
  $handler->display->display_options['filters']['field_level_value']['id'] = 'field_level_value';
  $handler->display->display_options['filters']['field_level_value']['table'] = 'field_data_field_level';
  $handler->display->display_options['filters']['field_level_value']['field'] = 'field_level_value';
  $handler->display->display_options['filters']['field_level_value']['group'] = 1;
  $handler->display->display_options['filters']['field_level_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_level_value']['expose']['operator_id'] = 'field_level_value_op';
  $handler->display->display_options['filters']['field_level_value']['expose']['label'] = 'Pestin taso';
  $handler->display->display_options['filters']['field_level_value']['expose']['operator'] = 'field_level_value_op';
  $handler->display->display_options['filters']['field_level_value']['expose']['identifier'] = 'field_level_value';
  $handler->display->display_options['filters']['field_level_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_level_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Suodatinkriteeri: Sisältö: Osa-alue (field_department) */
  $handler->display->display_options['filters']['field_department_value']['id'] = 'field_department_value';
  $handler->display->display_options['filters']['field_department_value']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_value']['field'] = 'field_department_value';
  $handler->display->display_options['filters']['field_department_value']['group'] = 1;
  $handler->display->display_options['filters']['field_department_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_department_value']['expose']['operator_id'] = 'field_department_value_op';
  $handler->display->display_options['filters']['field_department_value']['expose']['label'] = 'Osa-alue';
  $handler->display->display_options['filters']['field_department_value']['expose']['operator'] = 'field_department_value_op';
  $handler->display->display_options['filters']['field_department_value']['expose']['identifier'] = 'field_department_value';
  $handler->display->display_options['filters']['field_department_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_department_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'pestit';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Avoimet pestit';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['fj16_jobs'] = array(
    t('Master'),
    t('Avoimet pestit'),
    t('lisää'),
    t('Rajaa pestejä'),
    t('Näytä kaikki'),
    t('Lajittele'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('<p>Ei yhtään näytettävää pestiä.</p>'),
    t('Pestin taso'),
    t('Osa-alue'),
    t('Page'),
  );
  $export['fj16_jobs'] = $view;

  return $export;
}
