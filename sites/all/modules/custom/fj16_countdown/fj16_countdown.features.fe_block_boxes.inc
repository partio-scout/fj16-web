<?php
/**
 * @file
 * fj16_countdown.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function fj16_countdown_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Roihu countdown';
  $fe_block_boxes->format = 'fj16_block_content';
  $fe_block_boxes->machine_name = 'fj16_countdown';
  $fe_block_boxes->body = '<div id="clock-wrapper">
<h2>Ilmoittautuminen alkaa:</h2>
<div class="countdown-clock" data-date="2015-11-01"></div>
<a href="/lippukunnille/ilmoittautuminen-roihulle">Lue lisää ilmoittautumisesta</a>
</div>';

  $export['fj16_countdown'] = $fe_block_boxes;

  return $export;
}
