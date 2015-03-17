<?php
// $Id$

/**
 * @file
 * Themes for block_access module.
 */

/**
 * Theme function for the admin list form.
 */
function theme_block_access_admin_list($variables) {

  $header = array(
    t('Module'),
    //t('Current Settings'),
    t('Operations'),
  );

  $rows = array();
  require_once(drupal_get_path('module', 'block_access') . '/block_access.db.inc');
  foreach ($variables['modules'] as $key => $module) {
    if (is_numeric($key)) {
      $row = array();
      $row[] = $module;
      /*
      $roles = block_access_get_module($module);
      if (empty($roles)) {
        $row[] = 'None';
      }
      else {
        $names = user_roles();
        $output = '<ul>';
        foreach ($roles as $rid => $perms) {
          $role = $names[$rid];
          $output .= '<li>' . $role . '<ul>';
          foreach ($perms as $perm) {
            $output .= '<li>' . $perm . '</li>';
          }
          $output .= '</ul></li>';
        }
        $output .= '</ul>';
        //$row[] = $output;
      }*/
      $row[] = l(t('edit'), BLOCK_ACCESS_SETTINGS . '/edit/' . $module);
      $rows[] = array('data' => $row);
    }
  }

  if (empty($rows)) {
    $rows[] = array(array('data' => t('No modules found.'), 'colspan' => 2));
    array_pop($header);
  }

  $output = theme('table', array(
    'header' => $header,
    'rows' => $rows,
    'attributes' => array('id' => 'block_access-list-table')));
  return 'This is a list of modules which expose blocks. Here you can define default permissions on a per module basis.' . $output;
}

