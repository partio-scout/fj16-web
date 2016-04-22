<?php

function fj16_preprocess_html(&$vars) {
  $vars['base_url'] = url('', array('absolute' => TRUE));
  $vars['is_front'] = FALSE;
  if(drupal_is_front_page()) {
  	$vars['head_title']	= check_plain(variable_get('site_name') . ' - ' . variable_get('site_slogan'));
  	$vars['is_front'] = TRUE;
  }
}

function fj16_js_alter(&$javascript) {
    $javascript['misc/jquery.js']['data'] = drupal_get_path('theme', 'fj16') .
    '/js/jquery-1.12.2.min.js';
    $javascript['misc/jquery.js']['version'] = '1.12.2';
}