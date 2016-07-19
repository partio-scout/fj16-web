<?php

function fj16_preprocess_html(&$vars) {
  $vars['base_url'] = url('', array('absolute' => TRUE));
  $vars['is_front'] = FALSE;
  if(drupal_is_front_page()) {
  	$vars['head_title']	= check_plain(variable_get('site_name') . ' - ' . variable_get('site_slogan'));
  	$vars['is_front'] = TRUE;
  }
}

function fj16_preprocess_node(&$vars) {
  if($vars['node']->type !== 'fj16_news_article') {
    return;
  }

  $user = user_load($vars['node']->uid);
  if($user && $user->uid !== 0) {
    $name = field_get_items('user', $user, 'field_name')[0]['value'];
    $vars['user_realname'] = check_plain($name);
  }
}

function fj16_js_alter(&$javascript) {
    $javascript['misc/jquery.js']['data'] = drupal_get_path('theme', 'fj16') .
    '/js/jquery-1.12.2.min.js';
    $javascript['misc/jquery.js']['version'] = '1.12.2';
}
