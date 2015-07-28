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
  $translations['fi:blocks']['0da8c48f074943792e5dc29274bc2ae4'] = array(
    'source' => 'Filter positions',
    'context' => 'views:-exp-fj16_jobs-page:title',
    'location' => 'blocks:views:-exp-fj16_jobs-page:title',
    'translation' => 'Rajaa pestejä',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['fi:field']['0bf3351056dce56ea8b42a04671ddffe'] = array(
    'source' => 'Experience',
    'context' => 'field_department:#allowed_values:elamys',
    'location' => 'field:field_department:#allowed_values:elamys',
    'translation' => 'Elämys',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['fi:field']['0ff19c1cdc8d32c618b1a2dff1403785'] = array(
    'source' => 'Education',
    'context' => 'field_department:#allowed_values:kasvatus',
    'location' => 'field:field_department:#allowed_values:kasvatus',
    'translation' => 'Kasvatus',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['fi:field']['15dd808d809c8e6318fe3c4bf53f8f7e'] = array(
    'source' => 'Resource',
    'context' => 'field_department:#allowed_values:resurssi',
    'location' => 'field:field_department:#allowed_values:resurssi',
    'translation' => 'Resurssi',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['fi:field']['3a80e24308ea7fc7fc57ccccf5fcf3cc'] = array(
    'source' => 'Co-operation',
    'context' => 'field_department:#allowed_values:yhteistyo',
    'location' => 'field:field_department:#allowed_values:yhteistyo',
    'translation' => 'Yhteistyö',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['fi:field']['3f79da0fe9ff84fac41f53a314c05eda'] = array(
    'source' => 'Manager',
    'context' => 'field_level:#allowed_values:Päällikkö',
    'location' => 'field:field_level:#allowed_values:Päällikkö',
    'translation' => 'Päällikkö',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['fi:field']['62ad1067e4590b32b274a30bbdf06b74'] = array(
    'source' => 'Position level',
    'context' => 'field_level:fj16_job:label',
    'location' => 'field:field_level:fj16_job:label',
    'translation' => 'Pestin taso',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['fi:field']['72236c87230c3170044d11af30bb17a6'] = array(
    'source' => 'Other',
    'context' => 'field_level:#allowed_values:Muu',
    'location' => 'field:field_level:#allowed_values:Muu',
    'translation' => 'Muu',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['fi:field']['a66de093e4cb0741deeb2bd431fb943a'] = array(
    'source' => 'Further information',
    'context' => 'field_info_contact:fj16_job:label',
    'location' => 'field:field_info_contact:fj16_job:label',
    'translation' => 'Lisätiedot',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['fi:field']['af4c1be026c1fc7e49fe6aeaf185f727'] = array(
    'source' => 'IST',
    'context' => 'field_level:#allowed_values:Tekijä',
    'location' => 'field:field_level:#allowed_values:Tekijä',
    'translation' => 'Tekijä',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['fi:field']['b4f0f4ee21d9b001110a669f6e88e15a'] = array(
    'source' => 'Subteam leader',
    'context' => 'field_level:#allowed_values:Kymppi',
    'location' => 'field:field_level:#allowed_values:Kymppi',
    'translation' => 'Kymppi',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['fi:field']['b8956e1935f871da0d8e22a67873b110'] = array(
    'source' => 'Service',
    'context' => 'field_department:#allowed_values:palvelu',
    'location' => 'field:field_department:#allowed_values:palvelu',
    'translation' => 'Palvelu',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['fi:field']['b89c6b6575129e877b7c9f303edf2692'] = array(
    'source' => 'Team leader',
    'context' => 'field_level:#allowed_values:Mestari',
    'location' => 'field:field_level:#allowed_values:Mestari',
    'translation' => 'Mestari',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['fi:field']['c84ab945b012d72ce17da301819aaafc'] = array(
    'source' => 'Director',
    'context' => 'field_level:#allowed_values:Johtaja',
    'location' => 'field:field_level:#allowed_values:Johtaja',
    'translation' => 'Johtaja',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['fi:field']['dff36dc1a11cd9eb1dbe5a6e5de2fc29'] = array(
    'source' => 'Description',
    'context' => 'body:fj16_job:label',
    'location' => 'field:body:fj16_job:label',
    'translation' => 'Kuvaus',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['fi:field']['e210a87ce75e52ee92581392356b0620'] = array(
    'source' => 'Section',
    'context' => 'field_department:fj16_job:label',
    'location' => 'field:field_department:fj16_job:label',
    'translation' => 'Osa-alue',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['fi:field']['f2cf0d24fb88bf0e2549ed5fc1a7c73d'] = array(
    'source' => 'Requirements',
    'context' => 'field_requirements:fj16_job:label',
    'location' => 'field:field_requirements:fj16_job:label',
    'translation' => 'Vaatimukset',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['fi:node']['60c21ce7d4e1c3a2cdb49f59da804ec9'] = array(
    'source' => 'Title of the position',
    'context' => 'type:fj16_job:title_label',
    'location' => 'node:type:fj16_job:title_label',
    'translation' => 'Pestin nimi',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['fi:node']['a0a561c7d11c07b781e4a11bbe3f8375'] = array(
    'source' => 'FJ16 Job',
    'context' => 'type:fj16_job:name',
    'location' => 'node:type:fj16_job:name',
    'translation' => 'FJ16 Job',
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
  $translations['sv:blocks']['0da8c48f074943792e5dc29274bc2ae4'] = array(
    'source' => 'Filter positions',
    'context' => 'views:-exp-fj16_jobs-page:title',
    'location' => 'blocks:views:-exp-fj16_jobs-page:title',
    'translation' => 'Filtrera uppdrag',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['sv:field']['0bf3351056dce56ea8b42a04671ddffe'] = array(
    'source' => 'Experience',
    'context' => 'field_department:#allowed_values:elamys',
    'location' => 'field:field_department:#allowed_values:elamys',
    'translation' => 'Upplevelse',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['sv:field']['0ff19c1cdc8d32c618b1a2dff1403785'] = array(
    'source' => 'Education',
    'context' => 'field_department:#allowed_values:kasvatus',
    'location' => 'field:field_department:#allowed_values:kasvatus',
    'translation' => 'Fostran',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['sv:field']['15dd808d809c8e6318fe3c4bf53f8f7e'] = array(
    'source' => 'Resource',
    'context' => 'field_department:#allowed_values:resurssi',
    'location' => 'field:field_department:#allowed_values:resurssi',
    'translation' => 'Resurs',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['sv:field']['3a80e24308ea7fc7fc57ccccf5fcf3cc'] = array(
    'source' => 'Co-operation',
    'context' => 'field_department:#allowed_values:yhteistyo',
    'location' => 'field:field_department:#allowed_values:yhteistyo',
    'translation' => 'Samarbete',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['sv:field']['3f79da0fe9ff84fac41f53a314c05eda'] = array(
    'source' => 'Manager',
    'context' => 'field_level:#allowed_values:Päällikkö',
    'location' => 'field:field_level:#allowed_values:Päällikkö',
    'translation' => 'Chef',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['sv:field']['62ad1067e4590b32b274a30bbdf06b74'] = array(
    'source' => 'Position level',
    'context' => 'field_level:fj16_job:label',
    'location' => 'field:field_level:fj16_job:label',
    'translation' => 'Typ av uppdrag',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['sv:field']['72236c87230c3170044d11af30bb17a6'] = array(
    'source' => 'Other',
    'context' => 'field_level:#allowed_values:Muu',
    'location' => 'field:field_level:#allowed_values:Muu',
    'translation' => 'Annan',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['sv:field']['a66de093e4cb0741deeb2bd431fb943a'] = array(
    'source' => 'Further information',
    'context' => 'field_info_contact:fj16_job:label',
    'location' => 'field:field_info_contact:fj16_job:label',
    'translation' => 'Kontakt',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['sv:field']['af4c1be026c1fc7e49fe6aeaf185f727'] = array(
    'source' => 'IST',
    'context' => 'field_level:#allowed_values:Tekijä',
    'location' => 'field:field_level:#allowed_values:Tekijä',
    'translation' => 'Donare',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['sv:field']['b4f0f4ee21d9b001110a669f6e88e15a'] = array(
    'source' => 'Subteam leader',
    'context' => 'field_level:#allowed_values:Kymppi',
    'location' => 'field:field_level:#allowed_values:Kymppi',
    'translation' => 'Bas',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['sv:field']['b8956e1935f871da0d8e22a67873b110'] = array(
    'source' => 'Service',
    'context' => 'field_department:#allowed_values:palvelu',
    'location' => 'field:field_department:#allowed_values:palvelu',
    'translation' => 'Service',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['sv:field']['b89c6b6575129e877b7c9f303edf2692'] = array(
    'source' => 'Team leader',
    'context' => 'field_level:#allowed_values:Mestari',
    'location' => 'field:field_level:#allowed_values:Mestari',
    'translation' => 'Mästare',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['sv:field']['c84ab945b012d72ce17da301819aaafc'] = array(
    'source' => 'Director',
    'context' => 'field_level:#allowed_values:Johtaja',
    'location' => 'field:field_level:#allowed_values:Johtaja',
    'translation' => 'Direktör',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['sv:field']['dff36dc1a11cd9eb1dbe5a6e5de2fc29'] = array(
    'source' => 'Description',
    'context' => 'body:fj16_job:label',
    'location' => 'field:body:fj16_job:label',
    'translation' => 'Beskrivning',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['sv:field']['e210a87ce75e52ee92581392356b0620'] = array(
    'source' => 'Section',
    'context' => 'field_department:fj16_job:label',
    'location' => 'field:field_department:fj16_job:label',
    'translation' => 'Avdelning',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['sv:field']['f2cf0d24fb88bf0e2549ed5fc1a7c73d'] = array(
    'source' => 'Requirements',
    'context' => 'field_requirements:fj16_job:label',
    'location' => 'field:field_requirements:fj16_job:label',
    'translation' => 'Krav',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['sv:node']['60c21ce7d4e1c3a2cdb49f59da804ec9'] = array(
    'source' => 'Title of the position',
    'context' => 'type:fj16_job:title_label',
    'location' => 'node:type:fj16_job:title_label',
    'translation' => 'Namn av uppdrag',
    'plid' => 0,
    'plural' => 0,
  );
  $translations['sv:node']['a0a561c7d11c07b781e4a11bbe3f8375'] = array(
    'source' => 'FJ16 Job',
    'context' => 'type:fj16_job:name',
    'location' => 'node:type:fj16_job:name',
    'translation' => 'FJ16 Job',
    'plid' => 0,
    'plural' => 0,
  );
  return $translations;
}
