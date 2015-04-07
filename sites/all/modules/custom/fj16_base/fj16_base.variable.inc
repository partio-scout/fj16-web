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
  $realm_variables['language']['en'] = array(
  'site_name' => 'Roihu 2016',
  'site_slogan' => 'An experience - together',
);
  $realm_variables['language']['fi'] = array(
  'site_name' => 'Roihu 2016',
  'site_slogan' => '',
);
  $realm_variables['language']['sv'] = array(
  'site_name' => 'Roihu 2016',
  'site_slogan' => 'En gemensam scoutupplevelse',
);

return $realm_variables;
}
