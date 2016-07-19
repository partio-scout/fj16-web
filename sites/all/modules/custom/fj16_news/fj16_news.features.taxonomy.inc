<?php
/**
 * @file
 * fj16_news.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function fj16_news_taxonomy_default_vocabularies() {
  return array(
    'news_category' => array(
      'name' => 'News category',
      'machine_name' => 'news_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
    ),
  );
}
