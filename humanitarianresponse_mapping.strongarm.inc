<?php
/**
 * @file
 * humanitarianresponse_mapping.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function humanitarianresponse_mapping_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_source_internal_variant';
  $strongarm->value = 'original';
  $export['openlayers_source_internal_variant'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_source_type';
  $strongarm->value = 'internal';
  $export['openlayers_source_type'] = $strongarm;

  return $export;
}
