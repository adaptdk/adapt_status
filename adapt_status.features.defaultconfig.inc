<?php
/**
 * @file
 * adapt_status.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function adapt_status_defaultconfig_features() {
  return array(
    'adapt_status' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function adapt_status_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'adapt_status_last_build_numner';
  $strongarm->value = '0';
  $export['adapt_status_last_build_numner'] = $strongarm;

  return $export;
}
