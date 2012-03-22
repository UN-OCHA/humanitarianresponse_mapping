<?php
/**
 * @file
 * humanitarianresponse_mapping.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function humanitarianresponse_mapping_user_default_permissions() {
  $permissions = array();

  // Exported permission: geocoder_service_all_handlers
  $permissions['geocoder_service_all_handlers'] = array(
    'name' => 'geocoder_service_all_handlers',
    'roles' => array(
      0 => 'administrator',
      1 => 'editor',
      2 => 'manager',
    ),
    'module' => 'geocoder',
  );

  return $permissions;
}
