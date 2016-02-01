<?php
/**
 * @file
 * fj16_programme_and_job_tool.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function fj16_programme_and_job_tool_default_rules_configuration() {
  $items = array();
  $items['rules_fj16_limit_one_job_selected'] = entity_import('rules_config', '{ "rules_fj16_limit_one_job_selected" : {
      "LABEL" : "FJ16 Limit one job selected",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "flag" ],
      "ON" : { "flag_flagged_fj16_choose_bulk_job" : [] },
      "DO" : [
        { "flag_trim" : {
            "flag" : "fj16_choose_bulk_job",
            "flagging_user" : [ "flagging_user" ],
            "cutoff_size" : "1",
            "trim_newest" : "0",
            "permission_check" : "0"
          }
        }
      ]
    }
  }');
  $items['rules_fj16_redirect_to_generator_after_login'] = entity_import('rules_config', '{ "rules_fj16_redirect_to_generator_after_login" : {
      "LABEL" : "FJ16 redirect to generator after login",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "NOT user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "3" : "3", "4" : "4", "5" : "5" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "generator" } } ]
    }
  }');
  return $items;
}
