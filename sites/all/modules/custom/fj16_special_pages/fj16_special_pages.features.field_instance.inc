<?php
/**
 * @file
 * fj16_special_pages.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fj16_special_pages_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-fj16_special_page-body'
  $field_instances['node-fj16_special_page-body'] = array(
    'bundle' => 'fj16_special_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-fj16_special_page-field_classes'
  $field_instances['node-fj16_special_page-field_classes'] = array(
    'bundle' => 'fj16_special_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is used for setting the correct layout, do not change',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_formatter_css_class',
        'settings' => array(
          'depth' => 0,
          'hidden' => 1,
          'target' => 'body',
        ),
        'type' => 'cssclass_formatter',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_classes',
    'label' => 'Classes',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Classes');
  t('This is used for setting the correct layout, do not change');

  return $field_instances;
}
