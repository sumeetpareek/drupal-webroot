<?php
/**
 * @file
 * f_user_login_and_profile.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function f_user_login_and_profile_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_profile2__profile_personal_details';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_profile2__profile_personal_details'] = $strongarm;

  return $export;
}
