<?php
/**
 * @file
 * f_site_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function f_site_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management:admin/structure/menu/manage/menu-how-can-you-help
  $menu_links['management:admin/structure/menu/manage/menu-how-can-you-help'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-how-can-you-help',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'How can you help?',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/structure/menu',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('How can you help?');


  return $menu_links;
}
