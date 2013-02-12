<?php
/**
 * @file
 * aap_campaign_communities.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function aap_campaign_communities_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:issues:add user'
  $permissions['node:issues:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:issues:administer group'
  $permissions['node:issues:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:issues:approve and deny subscription'
  $permissions['node:issues:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:issues:create news content'
  $permissions['node:issues:create news content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:issues:create voices content'
  $permissions['node:issues:create voices content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:issues:delete any news content'
  $permissions['node:issues:delete any news content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:issues:delete any voices content'
  $permissions['node:issues:delete any voices content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:issues:delete own news content'
  $permissions['node:issues:delete own news content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:issues:delete own voices content'
  $permissions['node:issues:delete own voices content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:issues:manage members'
  $permissions['node:issues:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:issues:manage permissions'
  $permissions['node:issues:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:issues:manage roles'
  $permissions['node:issues:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:issues:subscribe'
  $permissions['node:issues:subscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:issues:subscribe without approval'
  $permissions['node:issues:subscribe without approval'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:issues:unsubscribe'
  $permissions['node:issues:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:issues:update any news content'
  $permissions['node:issues:update any news content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:issues:update any voices content'
  $permissions['node:issues:update any voices content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:issues:update group'
  $permissions['node:issues:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:issues:update own news content'
  $permissions['node:issues:update own news content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:issues:update own voices content'
  $permissions['node:issues:update own voices content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  return $permissions;
}
