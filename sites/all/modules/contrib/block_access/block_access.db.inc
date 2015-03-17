<?php
// $Id$
/*
 * @file block_access.db.inc
 * DB interface for block_access module
 */

/**
 * delete a block_access permission for a module or specific block for all roles
 * @param $module - the name of the module
 * @param $module - the permission being removed
 * @param $delta  - optional block delta
 */
function block_access_delete_roles($module, $perm, $delta=NULL) {
  $delete = db_delete('block_access_roles')
    ->condition('module', $module, '=')
    ->condition('permission', $perm, '=');
  if ($delta) {
    $delete->condition('delta', $delta, '=');
  }
  else {
    $delete->condition('delta', '', '=');
  }
  return $delete->execute();
}

/**
 * insert a block_access_roles record
 * @param $rid - role ID
 * @param $module - the name of the module
 * @param $perm - the permission being added
 * @param $delta - optional block delta
 */
function block_access_add_role($rid, $module, $perm, $delta=NULL) {
  $record = array(
    'rid' => $rid,
    'module' => $module,
    'delta' => $delta,
    'permission' => $perm);
  $result = drupal_write_record('block_access_roles', $record);
  return $result;
}

/**
 * fetch roles defined for a given module/perm/block
 * @param $module - the name of the module
 * @param $perm - the permission
 * @param $delta - optional block delta
 * @returns array of role IDs
 */
function block_access_get_roles($module, $perm, $delta=NULL) {
  $ret = array();
  if ($delta) {
    $query = db_select('block_access_roles', 'b')
      ->fields('b', array('rid'))
      ->condition('module', $module, '=')
      ->condition('permission', $perm, '=')
      ->condition('delta', $delta, '=');
    $result = $query->execute();
    foreach ($result as $record) {
      $ret[] = $record->rid;
    }
  }

  // If we didn't find any for the delta, or there is no delta
  // then use the module defaults
  if (empty($ret)) {
    $query = db_select('block_access_roles', 'b')
      ->fields('b', array('rid'))
      ->condition('module', $module, '=')
      ->condition('permission', $perm, '=')
      ->condition('delta', '', '=');
    $result = $query->execute();
    foreach ($result as $record) {
      $ret[] = $record->rid;
    }
  }

  return $ret;
}

/**
 * get permissions for a given module
 * @param $module - the name of the module
 * @returns an array of Role IDs and their permissions
 */
function block_access_get_module($module) {
  $query = db_select('block_access_roles', 'b')
    ->fields('b', array('rid', 'permission'))
    ->condition('module', $module, '=')
    ->condition('delta', '', '=');

  $result = $query->execute();
  $ret = array();
  while ($ob = $result->fetchObject()) {
    if (isset($ret[$ob->rid])) {
      $ret[$ob->rid][] = $ob->permission;
    }
    else {
      $ret[$ob->rid] = array($ob->permission);
    }
  }
  return $ret;
}
