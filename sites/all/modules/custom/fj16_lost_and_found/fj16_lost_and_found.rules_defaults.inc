<?php
/**
 * @file
 * fj16_lost_and_found.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function fj16_lost_and_found_default_rules_configuration() {
  $items = array();
  $items['rules_fj16_lost_and_found_id'] = entity_import('rules_config', '{ "rules_fj16_lost_and_found_id" : {
      "LABEL" : "FJ16 Lost and found id",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--fj16_lost_and_found" : { "bundle" : "fj16_lost_and_found" } },
      "DO" : [
        { "drupal_message" : {
            "message" : "Kirjaa t\\u00e4m\\u00e4 koodi tavaraan: [node:nid]",
            "type" : "warning"
          }
        }
      ]
    }
  }');
  return $items;
}
