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
  $strongarm->name = 'openlayers_default_map';
  $strongarm->value = 'humanitarianresponse_default';
  $export['openlayers_default_map'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'openlayers_source';
  $strongarm->value = 'profiles/humanitarianresponse/libraries/OpenLayers/OpenLayers.js';
  $export['openlayers_source'] = $strongarm;

  return $export;
}
