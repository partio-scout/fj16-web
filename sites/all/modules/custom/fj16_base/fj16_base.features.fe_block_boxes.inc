<?php
/**
 * @file
 * fj16_base.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function fj16_base_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'FJ16 Footer content';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'fj16_footer_content';
  $fe_block_boxes->body = '<div class="footer_section">
<h5>Roihu 2016</h5>
<p>Roihu on Suomen Partiolaisten yhteinen elämys, joka huipentuu kesällä 2016 suurleiriin Evolla.</p>
<p><a href="/">roihu2016.fi</a></p>
<p><a href="/palaute">Palaute</a></p>
</div>

<div class="footer_section">
<h5>Suomen Partiolaiset – Finlands Scouter ry</h5>
<address>Töölönkatu 55<br>00250 Helsinki</address>
<p><a href="tel:0988651100">(09) 8865 1100</a><br><a href="mailto:info@partio.fi">info@partio.fi</a></p>
</div>';

  $export['fj16_footer_content'] = $fe_block_boxes;

  return $export;
}
