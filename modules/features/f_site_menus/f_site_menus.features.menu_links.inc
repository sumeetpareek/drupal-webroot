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

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: main-menu:blog
  $menu_links['main-menu:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blogs',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: main-menu:events
  $menu_links['main-menu:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: main-menu:groups
  $menu_links['main-menu:groups'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'groups',
    'router_path' => 'groups',
    'link_title' => 'Groups',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: main-menu:news
  $menu_links['main-menu:news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news',
    'router_path' => 'news',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: main-menu:opinion-polls
  $menu_links['main-menu:opinion-polls'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'opinion-polls',
    'router_path' => 'opinion-polls',
    'link_title' => 'Opinion Polls',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
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
  // Exported menu link: menu-how-can-you-help:http://link1.com
  $menu_links['menu-how-can-you-help:http://link1.com'] = array(
    'menu_name' => 'menu-how-can-you-help',
    'link_path' => 'http://link1.com',
    'router_path' => '',
    'link_title' => 'Join Us',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'link-join-us',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-how-can-you-help:http://link2.com
  $menu_links['menu-how-can-you-help:http://link2.com'] = array(
    'menu_name' => 'menu-how-can-you-help',
    'link_path' => 'http://link2.com',
    'router_path' => '',
    'link_title' => 'Donate',
    'options' => array(
      'attributes' => array(
        'title' => 'Donate',
        'class' => array(
          0 => 'link-donate',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-how-can-you-help:http://link3.com
  $menu_links['menu-how-can-you-help:http://link3.com'] = array(
    'menu_name' => 'menu-how-can-you-help',
    'link_path' => 'http://link3.com',
    'router_path' => '',
    'link_title' => 'Talk To Us',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'link-talk-to-us',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-how-can-you-help:http://link4.com
  $menu_links['menu-how-can-you-help:http://link4.com'] = array(
    'menu_name' => 'menu-how-can-you-help',
    'link_path' => 'http://link4.com',
    'router_path' => '',
    'link_title' => 'Spread Message',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'link-spread-message',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-how-can-you-help:http://link5.com
  $menu_links['menu-how-can-you-help:http://link5.com'] = array(
    'menu_name' => 'menu-how-can-you-help',
    'link_path' => 'http://link5.com',
    'router_path' => '',
    'link_title' => 'Invite Friends',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'link-invite-friends',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Blogs');
  t('Donate');
  t('Events');
  t('Groups');
  t('Home');
  t('How can you help?');
  t('Invite Friends');
  t('Join Us');
  t('News');
  t('Opinion Polls');
  t('Spread Message');
  t('Talk To Us');


  return $menu_links;
}
