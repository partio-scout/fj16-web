<?php

function fj16_preprocess_html(&$vars) {
  if(drupal_is_front_page()) {
  	$vars['head_title']	= check_plain(variable_get('site_name') . ' - ' . variable_get('site_slogan'));
  }
}