<?php
/**
 * @file
 * fj16_base.backup_migrate_exportables.inc
 */

/**
 * Implements hook_exportables_backup_migrate_schedules().
 */
function fj16_base_exportables_backup_migrate_schedules() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = 'daily_backups';
  $item->name = 'Daily Backups';
  $item->source_id = 'archive';
  $item->destination_id = 'amazons3_daily';
  $item->copy_destination_id = '';
  $item->profile_id = 'default';
  $item->keep = 0;
  $item->period = 86400;
  $item->enabled = TRUE;
  $item->cron = 'builtin';
  $item->cron_schedule = '0 4 * * *';
  $export['daily_backups'] = $item;

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = 'monthly_backups';
  $item->name = 'Monthly Backups';
  $item->source_id = 'archive';
  $item->destination_id = 'amazons3_monthly';
  $item->copy_destination_id = '';
  $item->profile_id = 'default';
  $item->keep = 0;
  $item->period = 2592000;
  $item->enabled = TRUE;
  $item->cron = 'builtin';
  $item->cron_schedule = '0 4 * * *';
  $export['monthly_backups'] = $item;

  return $export;
}
