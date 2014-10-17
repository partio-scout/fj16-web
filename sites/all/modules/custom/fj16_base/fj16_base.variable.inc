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
  $realm_variables['language']['en'] = array();
  $realm_variables['language']['fi'] = array();
  $realm_variables['language']['sv'] = array();

return $realm_variables;
}
