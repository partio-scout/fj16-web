<?php
/**
 * @file
 * fj16_trek_challenges.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function fj16_trek_challenges_default_rules_configuration() {
  $items = array();
  $items['rules_fj16_new_trek_hallenge_created'] = entity_import('rules_config', '{ "rules_fj16_new_trek_hallenge_created" : {
      "LABEL" : "FJ16 New trek hallenge created",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--fj16_trek_challenge" : { "bundle" : "fj16_trek_challenge" } },
      "DO" : [
        { "redirect" : { "url" : "retkihaaste" } },
        { "drupal_message" : {
            "message" : "Tarkastamme retkihaasteesi viel\\u00e4 ennen julkaisua. Odota rauhassa ja nauti kes\\u00e4st\\u00e4!",
            "type" : "warning"
          }
        },
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "9" : "9" } },
            "subject" : "Uusi retkihaaste [node:title] henkil\\u00f6lt\\u00e4 [node:field_trek_contact_name]",
            "message" : "Kirjaudu sis\\u00e4\\u00e4n ([site:login-url]) ja siirry julkaisemaan tai poistamaan haaste: [site:url]admin\\/fj16-trek-challenges-moderation\\r\\n\\r\\nJulkaiseminen tapahtuu muokkaamalla retkihaastetta. Avaa kohta \\u0022Julkaisuasetukset\\u0022, laita t\\u00e4pp\\u00e4 ruutuun \\u0022Julkaistu\\u0022 ja tallenna.",
            "from" : "emil.virkki@roihu2016.fi"
          }
        }
      ]
    }
  }');
  return $items;
}
