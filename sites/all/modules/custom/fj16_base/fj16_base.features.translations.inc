<?php
/**
 * @file
 * fj16_base.features.translations.inc
 */

/**
 * Implements hook_translations_defaults().
 */
function fj16_base_translations_defaults() {
  $translations = array();
  $translations['fi:blocks']['00f09b017e8d460c14fd9785abb831c8'] = array(
    'source' => 'Footer',
    'context' => 'block:1:title',
    'location' => 'blocks:block:1:title',
    'translation' => 'Footer',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['fi:blocks']['accf35f1126d86c1dbfceaaa570a5e38'] = array(
    'source' => '<div class="footer_section">
<h5>Roihu 2016</h5>
<p>Roihu is the largest youth project of the year 2016 in Finland. It is the culmination of 15 000 scouts summer camp in July, Evo, southern Finland.</p>
<p><a href="/en">roihu2016.fi</a></p>
<p><a href="/en/feedback">Feedback</a></p>
</div>

<div class="footer_section">
<h5>Suomen Partiolaiset – Finlands Scouter ry</h5>
<address>Töölönkatu 55<br>00250 Helsinki<br>Finland</address>
<p><a href="tel:+358988651100">+358 98865 1100</a><br><a href="mailto:info@partio.fi">info@partio.fi</a></p>
</div>',
    'context' => 'block:1:body',
    'location' => 'blocks:block:1:body',
    'translation' => '<div class="footer_section">
<h5>Roihu 2016</h5>
<p>Roihu on Suomen Partiolaisten yhteinen elämys, joka huipentuu kesällä 2016 suurleiriin Evolla.</p>
<p><a href="/">roihu2016.fi</a></p>
<p><a href="/palaute">Palaute</a></p>
</div>

<div class="footer_section">
<h5>Suomen Partiolaiset – Finlands Scouter ry</h5>
<address>Töölönkatu 55<br>00250 Helsinki</address>
<p><a href="tel:0988651100">(09) 8865 1100</a><br><a href="mailto:info@partio.fi">info@partio.fi</a></p>
</div>',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['sv:blocks']['00f09b017e8d460c14fd9785abb831c8'] = array(
    'source' => 'Footer',
    'context' => 'block:1:title',
    'location' => 'blocks:block:1:title',
    'translation' => 'Footer',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['sv:blocks']['accf35f1126d86c1dbfceaaa570a5e38'] = array(
    'source' => '<div class="footer_section">
<h5>Roihu 2016</h5>
<p>Roihu is the largest youth project of the year 2016 in Finland. It is the culmination of 15 000 scouts summer camp in July, Evo, southern Finland.</p>
<p><a href="/en">roihu2016.fi</a></p>
<p><a href="/en/feedback">Feedback</a></p>
</div>

<div class="footer_section">
<h5>Suomen Partiolaiset – Finlands Scouter ry</h5>
<address>Töölönkatu 55<br>00250 Helsinki<br>Finland</address>
<p><a href="tel:+358988651100">+358 98865 1100</a><br><a href="mailto:info@partio.fi">info@partio.fi</a></p>
</div>',
    'context' => 'block:1:body',
    'location' => 'blocks:block:1:body',
    'translation' => '<div class="footer_section">
<h5>Roihu 2016</h5>
<p>Roihu är det största scoutprojekt i Finland år 2016. Höjdpunkten kommer att vara i juli när 15 000 scouter deltar i lägret i Evois.</p>
<p><a href="/sv">roihu2016.fi</a></p>
<p><a href="/sv/respons">Respons</a></p>
</div>

<div class="footer_section">
<h5>Suomen Partiolaiset – Finlands Scouter ry</h5>
<address>Tölögatan 55<br>00250 Helsingfors</address>
<p><a href="tel:0988651100">(09) 8865 1100</a><br><a href="mailto:info@partio.fi">info@partio.fi</a></p>
</div>',
    'plid' => 0,
    'plural' => 0,
  );
  return $translations;
}
