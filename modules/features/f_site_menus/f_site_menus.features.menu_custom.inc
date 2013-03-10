<?php
/**
 * @file
 * f_site_menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function f_site_menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-how-can-you-help.
  $menus['menu-how-can-you-help'] = array(
    'menu_name' => 'menu-how-can-you-help',
    'title' => 'How can you help?',
    'description' => 'How can you help?',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('How can you help?');


  return $menus;
}
