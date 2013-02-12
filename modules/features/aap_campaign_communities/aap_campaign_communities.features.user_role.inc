<?php
/**
 * @file
 * aap_campaign_communities.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function aap_campaign_communities_user_default_roles() {
  $roles = array();

  // Exported role: AAP Editor.
  $roles['AAP Editor'] = array(
    'name' => 'AAP Editor',
    'weight' => '2',
  );

  return $roles;
}
