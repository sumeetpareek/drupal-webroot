<?php
/**
 * @file
 * f_user_login_and_profile.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_user_login_and_profile_user_default_permissions() {
  $permissions = array();

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: edit own profile_personal_details profile.
  $permissions['edit own profile_personal_details profile'] = array(
    'name' => 'edit own profile_personal_details profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: view any profile_personal_details profile.
  $permissions['view any profile_personal_details profile'] = array(
    'name' => 'view any profile_personal_details profile',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  return $permissions;
}
