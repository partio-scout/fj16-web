<?php
/**
 * @file
 * fj16_base.features.block_access.inc
 */

/**
 * Implements hook_block_access_defaults().
 */
function fj16_base_block_access_defaults() {
  $block_access = array();

  // Exported Block Access settings for module block
  $block_access['block'] = array();

  return $block_access;
}
