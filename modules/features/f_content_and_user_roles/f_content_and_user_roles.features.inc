<?php
/**
 * @file
 * f_content_and_user_roles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function f_content_and_user_roles_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
