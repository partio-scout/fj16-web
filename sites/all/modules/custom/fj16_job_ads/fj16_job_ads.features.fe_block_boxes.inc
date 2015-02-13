<?php
/**
 * @file
 * fj16_job_ads.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function fj16_job_ads_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'FJ16 Jobs intro';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'fj16_job_ads_intro';
  $fe_block_boxes->body = '<div class="fj16_job_ads_intro">
<p>
Tervetuloa tekemään Roihua! Tältä sivulta löydät juuri nyt haussa olevat tehtävät. Viimeisin pestikierros päättyi 12.2., mutta oheisiin tehtäviin otetaan vielä hakemuksia. Toimi pian - hakijoiden haastattelut ovat jo käynnissä.
</p>
<p>
Hakeminen on huisin helppoa. Täyttämällä ilmoituksen alareunasta löytyvän lomakkeen tietosi löytävät suoraan hausta vastaavalle osa-alueelle. Jos haluat kysyä tehtävästä lisää, paikallisen gurun yhteystiedot löytyvät kustakin ilmoituksesta.
</p>
<p>
Vinkkaa kavereille ja tule mukaan!
</p>
</div>';

  $export['fj16_job_ads_intro'] = $fe_block_boxes;

  return $export;
}
