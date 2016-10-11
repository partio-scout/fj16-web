<?php
/**
 * @file
 * fj16_lost_and_found.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fj16_lost_and_found_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'fj16_lost_and_found_internal';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'FJ16 Lost and found internal';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Löytötavarat';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any fj16_lost_and_found content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Suodata';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Palauta oletusarvoihin';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Lajittele';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_found_date' => 'field_found_date',
    'title' => 'title',
    'nid' => 'nid',
    'field_found_where' => 'field_found_where',
    'field_owner_found' => 'field_owner_found',
    'edit_node' => 'edit_node',
    'field_owner_1' => 'field_owner_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_found_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_found_where' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_owner_found' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_owner_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p><a href="/node/add/fj16-lost-and-found">Lisää uusi löytötavara</a></p>';
  $handler->display->display_options['header']['area']['format'] = 'fj16_block_content';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'Löytyi @total löytötavaraa.';
  /* Field: Content: Löytöaika */
  $handler->display->display_options['fields']['field_found_date']['id'] = 'field_found_date';
  $handler->display->display_options['fields']['field_found_date']['table'] = 'field_data_field_found_date';
  $handler->display->display_options['fields']['field_found_date']['field'] = 'field_found_date';
  $handler->display->display_options['fields']['field_found_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Mikä';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Koodi';
  /* Field: Content: Mistä löytynyt */
  $handler->display->display_options['fields']['field_found_where']['id'] = 'field_found_where';
  $handler->display->display_options['fields']['field_found_where']['table'] = 'field_data_field_found_where';
  $handler->display->display_options['fields']['field_found_where']['field'] = 'field_found_where';
  /* Field: Content: Omistaja löytynyt */
  $handler->display->display_options['fields']['field_owner_found']['id'] = 'field_owner_found';
  $handler->display->display_options['fields']['field_owner_found']['table'] = 'field_data_field_owner_found';
  $handler->display->display_options['fields']['field_owner_found']['field'] = 'field_owner_found';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Tavaran omistaja */
  $handler->display->display_options['fields']['field_owner_1']['id'] = 'field_owner_1';
  $handler->display->display_options['fields']['field_owner_1']['table'] = 'field_data_field_owner';
  $handler->display->display_options['fields']['field_owner_1']['field'] = 'field_owner';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
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
    'fj16_lost_and_found' => 'fj16_lost_and_found',
  );
  /* Filter criterion: Content: Mistä löytynyt (field_found_where) */
  $handler->display->display_options['filters']['field_found_where_value']['id'] = 'field_found_where_value';
  $handler->display->display_options['filters']['field_found_where_value']['table'] = 'field_data_field_found_where';
  $handler->display->display_options['filters']['field_found_where_value']['field'] = 'field_found_where_value';
  $handler->display->display_options['filters']['field_found_where_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_found_where_value']['expose']['operator_id'] = 'field_found_where_value_op';
  $handler->display->display_options['filters']['field_found_where_value']['expose']['label'] = 'Mistä löytynyt';
  $handler->display->display_options['filters']['field_found_where_value']['expose']['operator'] = 'field_found_where_value_op';
  $handler->display->display_options['filters']['field_found_where_value']['expose']['identifier'] = 'field_found_where_value';
  $handler->display->display_options['filters']['field_found_where_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
  );
  /* Filter criterion: Content: Omistaja löytynyt (field_owner_found) */
  $handler->display->display_options['filters']['field_owner_found_value']['id'] = 'field_owner_found_value';
  $handler->display->display_options['filters']['field_owner_found_value']['table'] = 'field_data_field_owner_found';
  $handler->display->display_options['filters']['field_owner_found_value']['field'] = 'field_owner_found_value';
  $handler->display->display_options['filters']['field_owner_found_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_owner_found_value']['expose']['operator_id'] = 'field_owner_found_value_op';
  $handler->display->display_options['filters']['field_owner_found_value']['expose']['label'] = 'Omistaja löytynyt';
  $handler->display->display_options['filters']['field_owner_found_value']['expose']['operator'] = 'field_owner_found_value_op';
  $handler->display->display_options['filters']['field_owner_found_value']['expose']['identifier'] = 'field_owner_found_value';
  $handler->display->display_options['filters']['field_owner_found_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    4 => 0,
    7 => 0,
    9 => 0,
    5 => 0,
    10 => 0,
    6 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/lostandfound-internal';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Löytötavarat';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['fj16_lost_and_found_internal'] = $view;

  $view = new view();
  $view->name = 'fj16_lost_and_found_public';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'FJ16 Lost & Found public';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Löytötavarat';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_found_date' => 'field_found_date',
    'field_found_where' => 'field_found_where',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_found_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_found_where' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p>
Leirin jäljiltä omistajaa vaille jääneet, pieniarvoiset retkeilyvarusteet, ruokailuvälineet sekä aurinkolasit on lahjoitettu Karjalan partiolaisille.
</p>
<p>
Kaikki (toimiston arvion mukaisesti) yli 20 euron arvoiset tavarat on toimitettu jatkosäilytykseen <a href="http://www.eslt.fi">Etelä-Suomen Löytötavaratoimistolle</a>. Voit tiedustella kadonneita tavaroitasi puhelimitse numerosta 0600 55 00 93 (1,83 €/min. +pmp +pvm).
</p>
<p>
Etelä-Suomen Löytötavaratoimisto säilyttää tavaroita <strong>kolmen kuukauden ajan löytöpäivästä</strong>. Löytötavarat voi noutaa tuntomerkkejä vastaan Etelä-Suomen Löytötavaratoimiston tiloista sen aukioloaikoina (ma klo 10–18, ti–pe klo 10–16) osoitteessa Saimaankatu 54, 15140 Lahti. Samassa tilassa toimii Kirpputori Cetori. Tarvittaessa tavaroita toimitetaan myös Matkahuollon kautta erillistä maksua vastaan.
</p>';
  $handler->display->display_options['header']['area']['format'] = 'fj16_block_content';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Otsikko';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Löytöaika */
  $handler->display->display_options['fields']['field_found_date']['id'] = 'field_found_date';
  $handler->display->display_options['fields']['field_found_date']['table'] = 'field_data_field_found_date';
  $handler->display->display_options['fields']['field_found_date']['field'] = 'field_found_date';
  $handler->display->display_options['fields']['field_found_date']['settings'] = array(
    'format_type' => 'lost_and_found',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Mistä löytynyt */
  $handler->display->display_options['fields']['field_found_where']['id'] = 'field_found_where';
  $handler->display->display_options['fields']['field_found_where']['table'] = 'field_data_field_found_where';
  $handler->display->display_options['fields']['field_found_where']['field'] = 'field_found_where';
  /* Sort criterion: Content revision: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node_revision';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
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
    'fj16_lost_and_found' => 'fj16_lost_and_found',
  );
  /* Filter criterion: Content: Omistaja löytynyt (field_owner_found) */
  $handler->display->display_options['filters']['field_owner_found_value']['id'] = 'field_owner_found_value';
  $handler->display->display_options['filters']['field_owner_found_value']['table'] = 'field_data_field_owner_found';
  $handler->display->display_options['filters']['field_owner_found_value']['field'] = 'field_owner_found_value';
  $handler->display->display_options['filters']['field_owner_found_value']['value'] = array(
    0 => '0',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['operator'] = 'not in';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'fj16_lost_and_found' => 'fj16_lost_and_found',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'loytotavarat';

  /* Display: Sivu */
  $handler = $view->new_display('page', 'Sivu', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Lost & found';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p>
All camping equipment of minor value, utensils, dishes and sun glasses have now been donated to scouts in Russian Carelia.
</p>
<p>
Items that the lost & found office staff regarded as worth of more than 20 € have been delivered to <a href="http://www.eslt.fi">Etelä-Suomen Löytötavaratoimisto</a> (commercial lost & found office of Southern Finland), where they will be stored <strong>for a maximum of 3 months</strong>. You can ask for your lost items by calling +358 600 55 00 93 and describing your items in detail. If your item is found, they can send it all over the world, but they will charge for both storage of the item and all the postal fees.
</p>';
  $handler->display->display_options['header']['area']['format'] = 'fj16_block_content';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Item';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Löytöaika */
  $handler->display->display_options['fields']['field_found_date']['id'] = 'field_found_date';
  $handler->display->display_options['fields']['field_found_date']['table'] = 'field_data_field_found_date';
  $handler->display->display_options['fields']['field_found_date']['field'] = 'field_found_date';
  $handler->display->display_options['fields']['field_found_date']['label'] = 'Found';
  $handler->display->display_options['fields']['field_found_date']['settings'] = array(
    'format_type' => 'lost_and_found',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Mistä löytynyt */
  $handler->display->display_options['fields']['field_found_where']['id'] = 'field_found_where';
  $handler->display->display_options['fields']['field_found_where']['table'] = 'field_data_field_found_where';
  $handler->display->display_options['fields']['field_found_where']['field'] = 'field_found_where';
  $handler->display->display_options['fields']['field_found_where']['label'] = 'Location';
  $handler->display->display_options['path'] = 'lostandfound';

  /* Display: Sivu 2 */
  $handler = $view->new_display('page', 'Sivu 2', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Hittegods';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p>
Utfärdutrustning av mindre värde, matkärl och solglasögon som inte har hittat sina ägare har donerats till Karelska Scouter I Ryssland. Hittegods som är värda över 20 euro finns på <a href="http://www.eslt.fi">Etelä-Suomen Löytötavaratoimisto</a>. Du kan fråga efter dina saker per telefon 0600 55 00 93 (1,83 €/min +mta +lna).
</p>
<p>
Etelä-Suomen Löytötavaratoimisto förvarar saker <strong>i högst tre månader</strong>. Hittegods kan avhämtas mot beskrivning på Etelä-Suomen Löytötavaratoimisto (Saimaankatu 54, 15140 Lahtis, mån 10–18, tis–fre 10–16). Det finns också en transportservice (via Matkahuolto) som kostar extra.
</p>';
  $handler->display->display_options['header']['area']['format'] = 'fj16_block_content';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Överskrift';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Löytöaika */
  $handler->display->display_options['fields']['field_found_date']['id'] = 'field_found_date';
  $handler->display->display_options['fields']['field_found_date']['table'] = 'field_data_field_found_date';
  $handler->display->display_options['fields']['field_found_date']['field'] = 'field_found_date';
  $handler->display->display_options['fields']['field_found_date']['label'] = 'Tidpunkt';
  $handler->display->display_options['fields']['field_found_date']['settings'] = array(
    'format_type' => 'lost_and_found',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Mistä löytynyt */
  $handler->display->display_options['fields']['field_found_where']['id'] = 'field_found_where';
  $handler->display->display_options['fields']['field_found_where']['table'] = 'field_data_field_found_where';
  $handler->display->display_options['fields']['field_found_where']['field'] = 'field_found_where';
  $handler->display->display_options['fields']['field_found_where']['label'] = 'Plats';
  $handler->display->display_options['path'] = 'hittegods';
  $export['fj16_lost_and_found_public'] = $view;

  return $export;
}
