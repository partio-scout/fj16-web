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
  $items['rules_fj16_go_to_confirmation_after_job_selection'] = entity_import('rules_config', '{ "rules_fj16_go_to_confirmation_after_job_selection" : {
      "LABEL" : "FJ16 Go to confirmation after job selection",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "flag" ],
      "ON" : { "flag_flagged_fj16_choose_bulk_job" : [] },
      "DO" : [ { "redirect" : { "url" : "generator\\/confirm" } } ]
    }
  }');
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
  $items['rules_fj16_redirect_to_generator_after_editing_account'] = entity_import('rules_config', '{ "rules_fj16_redirect_to_generator_after_editing_account" : {
      "LABEL" : "FJ16 Redirect to generator after editing account",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_update" : [] },
      "IF" : [
        { "NOT user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "3" : "3", "4" : "4", "5" : "5" } },
            "operation" : "OR"
          }
        },
        { "NOT data_is" : { "data" : [ "site:current-page:path" ], "value" : "generator\\/confirm" } }
      ],
      "DO" : [ { "redirect" : { "url" : "generator" } } ]
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
        },
        { "NOT text_matches" : {
            "text" : [ "site:current-page:path" ],
            "match" : "user\\/reset",
            "operation" : "starts"
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "generator" } } ]
    }
  }');
  $items['rules_fj16_redirect_to_login_after_registration'] = entity_import('rules_config', '{ "rules_fj16_redirect_to_login_after_registration" : {
      "LABEL" : "FJ16 Redirect to login after registration",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [ { "redirect" : { "url" : "user" } } ]
    }
  }');
  return $items;
}
