<?php

/**
 * Return a description of the profile for the initial installation screen.
 *
 * @return
 *   An array with keys 'name' and 'description' describing this profile,
 *   and optional 'language' to override the language selection for
 *   language-specific profiles.
 */
function aap_campaign_profile_details() {
  return array(
    'name' => 'AAP Campaign Profile',
    'description' => 'This will install AAP campaign site',
  );
}

/**
 * Return a list of tasks that this profile supports.
 *
 * @return
 *   A keyed array of tasks the profile will perform during
 *   the final stage. The keys of the array will be used internally,
 *   while the values will be displayed to the user in the installer
 *   task list.
 */
function aap_campaign_profile_install_tasks(&$install_state) {
  $tasks = array();
  $tasks['aap_campaign_profile_task_flush_caches'] = array(
    'display' => FALSE,
    'type' => 'normal',
  );

  return $tasks;
}

function aap_campaign_profile_task_flush_caches() {
  register_shutdown_function('exec','drush cc all');
}
