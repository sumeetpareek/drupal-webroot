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

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-how-can-you-help.
  $menus['menu-how-can-you-help'] = array(
    'menu_name' => 'menu-how-can-you-help',
    'title' => 'How can you help?',
    'description' => 'How can you help?',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('How can you help?');
  t('Main menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
