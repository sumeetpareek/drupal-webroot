<?php
/**
 * @file
 * f_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function f_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration menu.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Party Leardership' => 'Party Leardership',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Party Leardership' => 'Party Leardership',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'Party Leardership' => 'Party Leardership',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: access contextual links.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(),
    'module' => 'contextual',
  );

  // Exported permission: access devel information.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: access own authorizations.
  $permissions['access own authorizations'] = array(
    'name' => 'access own authorizations',
    'roles' => array(),
    'module' => 'oauth_common',
  );

  // Exported permission: access own consumers.
  $permissions['access own consumers'] = array(
    'name' => 'access own consumers',
    'roles' => array(),
    'module' => 'oauth_common',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: access site reports.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: access workbench.
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'Party Leardership' => 'Party Leardership',
    ),
    'module' => 'workbench',
  );

  // Exported permission: access workbench access by role.
  $permissions['access workbench access by role'] = array(
    'name' => 'access workbench access by role',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'Party Leardership' => 'Party Leardership',
    ),
    'module' => 'workbench_access',
  );

  // Exported permission: add media from remote sources.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: administer actions.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: administer advanced pane settings.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: administer blocks.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(),
    'module' => 'block',
  );

  // Exported permission: administer consumers.
  $permissions['administer consumers'] = array(
    'name' => 'administer consumers',
    'roles' => array(),
    'module' => 'oauth_common',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: administer contexts.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(),
    'module' => 'context_ui',
  );

  // Exported permission: administer custom content.
  $permissions['administer custom content'] = array(
    'name' => 'administer custom content',
    'roles' => array(),
    'module' => 'ctools_custom_content',
  );

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: administer group.
  $permissions['administer group'] = array(
    'name' => 'administer group',
    'roles' => array(),
    'module' => 'og',
  );

  // Exported permission: administer image styles.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(),
    'module' => 'image',
  );

  // Exported permission: administer masquerade.
  $permissions['administer masquerade'] = array(
    'name' => 'administer masquerade',
    'roles' => array(),
    'module' => 'masquerade',
  );

  // Exported permission: administer media.
  $permissions['administer media'] = array(
    'name' => 'administer media',
    'roles' => array(),
    'module' => 'media',
  );

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(),
    'module' => 'menu',
  );

  // Exported permission: administer mini panels.
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(),
    'module' => 'panels_mini',
  );

  // Exported permission: administer modules.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: administer oauth.
  $permissions['administer oauth'] = array(
    'name' => 'administer oauth',
    'roles' => array(),
    'module' => 'oauth_common',
  );

  // Exported permission: administer page manager.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(),
    'module' => 'page_manager',
  );

  // Exported permission: administer pane access.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: administer panels layouts.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: administer panels styles.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: administer pathauto.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(),
    'module' => 'pathauto',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: administer profile types.
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: administer profiles.
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: administer site configuration.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: administer snippet.
  $permissions['administer snippet'] = array(
    'name' => 'administer snippet',
    'roles' => array(),
    'module' => 'snippet',
  );

  // Exported permission: administer software updates.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: administer themes.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(),
    'module' => 'path',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: administer views.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(),
    'module' => 'views',
  );

  // Exported permission: administer workbench.
  $permissions['administer workbench'] = array(
    'name' => 'administer workbench',
    'roles' => array(),
    'module' => 'workbench',
  );

  // Exported permission: administer workbench access.
  $permissions['administer workbench access'] = array(
    'name' => 'administer workbench access',
    'roles' => array(),
    'module' => 'workbench_access',
  );

  // Exported permission: administer workbench moderation.
  $permissions['administer workbench moderation'] = array(
    'name' => 'administer workbench moderation',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: assign workbench access.
  $permissions['assign workbench access'] = array(
    'name' => 'assign workbench access',
    'roles' => array(),
    'module' => 'workbench_access',
  );

  // Exported permission: batch update workbench access.
  $permissions['batch update workbench access'] = array(
    'name' => 'batch update workbench access',
    'roles' => array(),
    'module' => 'workbench_access',
  );

  // Exported permission: block IP addresses.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(),
    'module' => 'system',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: bypass workbench moderation.
  $permissions['bypass workbench moderation'] = array(
    'name' => 'bypass workbench moderation',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: change layouts in place editing.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Party Leardership' => 'Party Leardership',
    ),
    'module' => 'user',
  );

  // Exported permission: create blog content.
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Party Leardership' => 'Party Leardership',
    ),
    'module' => 'node',
  );

  // Exported permission: create issues content.
  $permissions['create issues content'] = array(
    'name' => 'create issues content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create mini panels.
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(),
    'module' => 'panels_mini',
  );

  // Exported permission: create news content.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(),
    'module' => 'path',
  );

  // Exported permission: create voices content.
  $permissions['create voices content'] = array(
    'name' => 'create voices content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any blog content.
  $permissions['delete any blog content'] = array(
    'name' => 'delete any blog content',
    'roles' => array(
      'Content Approver' => 'Content Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any issues content.
  $permissions['delete any issues content'] = array(
    'name' => 'delete any issues content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any news content.
  $permissions['delete any news content'] = array(
    'name' => 'delete any news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any voices content.
  $permissions['delete any voices content'] = array(
    'name' => 'delete any voices content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own blog content.
  $permissions['delete own blog content'] = array(
    'name' => 'delete own blog content',
    'roles' => array(
      'Party Leardership' => 'Party Leardership',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own issues content.
  $permissions['delete own issues content'] = array(
    'name' => 'delete own issues content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own news content.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own voices content.
  $permissions['delete own voices content'] = array(
    'name' => 'delete own voices content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Content Approver' => 'Content Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 1.
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: display drupal links.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(),
    'module' => 'admin_menu',
  );

  // Exported permission: edit any blog content.
  $permissions['edit any blog content'] = array(
    'name' => 'edit any blog content',
    'roles' => array(
      'Content Approver' => 'Content Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any issues content.
  $permissions['edit any issues content'] = array(
    'name' => 'edit any issues content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any news content.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any profile_personal_details profile.
  $permissions['edit any profile_personal_details profile'] = array(
    'name' => 'edit any profile_personal_details profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: edit any voices content.
  $permissions['edit any voices content'] = array(
    'name' => 'edit any voices content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit media.
  $permissions['edit media'] = array(
    'name' => 'edit media',
    'roles' => array(),
    'module' => 'media',
  );

  // Exported permission: edit own blog content.
  $permissions['edit own blog content'] = array(
    'name' => 'edit own blog content',
    'roles' => array(
      'Party Leardership' => 'Party Leardership',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own issues content.
  $permissions['edit own issues content'] = array(
    'name' => 'edit own issues content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own news content.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own voices content.
  $permissions['edit own voices content'] = array(
    'name' => 'edit own voices content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit terms in 1.
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: execute php code.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: flush caches.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(),
    'module' => 'admin_menu',
  );

  // Exported permission: import media.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(),
    'module' => 'media',
  );

  // Exported permission: manage features.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: manage snippet.
  $permissions['manage snippet'] = array(
    'name' => 'manage snippet',
    'roles' => array(),
    'module' => 'snippet',
  );

  // Exported permission: masquerade as admin.
  $permissions['masquerade as admin'] = array(
    'name' => 'masquerade as admin',
    'roles' => array(),
    'module' => 'masquerade',
  );

  // Exported permission: masquerade as user.
  $permissions['masquerade as user'] = array(
    'name' => 'masquerade as user',
    'roles' => array(),
    'module' => 'masquerade',
  );

  // Exported permission: moderate content from draft to needs_review.
  $permissions['moderate content from draft to needs_review'] = array(
    'name' => 'moderate content from draft to needs_review',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'Party Leardership' => 'Party Leardership',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from needs_review to draft.
  $permissions['moderate content from needs_review to draft'] = array(
    'name' => 'moderate content from needs_review to draft',
    'roles' => array(
      'Content Approver' => 'Content Approver',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: moderate content from needs_review to published.
  $permissions['moderate content from needs_review to published'] = array(
    'name' => 'moderate content from needs_review to published',
    'roles' => array(
      'Content Approver' => 'Content Approver',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: notify of path changes.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(),
    'module' => 'pathauto',
  );

  // Exported permission: oauth authorize any consumers.
  $permissions['oauth authorize any consumers'] = array(
    'name' => 'oauth authorize any consumers',
    'roles' => array(),
    'module' => 'oauth_common',
  );

  // Exported permission: oauth register any consumers.
  $permissions['oauth register any consumers'] = array(
    'name' => 'oauth register any consumers',
    'roles' => array(),
    'module' => 'oauth_common',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Content Approver' => 'Content Approver',
    ),
    'module' => 'node',
  );

  // Exported permission: select account cancellation method.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: switch users.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'devel',
  );

  // Exported permission: use page manager.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(),
    'module' => 'page_manager',
  );

  // Exported permission: use panels caching features.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: use panels dashboard.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: use panels in place editing.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: use panels locks.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: use workbench_moderation my drafts tab.
  $permissions['use workbench_moderation my drafts tab'] = array(
    'name' => 'use workbench_moderation my drafts tab',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'Party Leardership' => 'Party Leardership',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: use workbench_moderation needs review tab.
  $permissions['use workbench_moderation needs review tab'] = array(
    'name' => 'use workbench_moderation needs review tab',
    'roles' => array(
      'Content Approver' => 'Content Approver',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view all unpublished content.
  $permissions['view all unpublished content'] = array(
    'name' => 'view all unpublished content',
    'roles' => array(
      'Content Approver' => 'Content Approver',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view media.
  $permissions['view media'] = array(
    'name' => 'view media',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'media',
  );

  // Exported permission: view moderation history.
  $permissions['view moderation history'] = array(
    'name' => 'view moderation history',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'Party Leardership' => 'Party Leardership',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view moderation messages.
  $permissions['view moderation messages'] = array(
    'name' => 'view moderation messages',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'Party Leardership' => 'Party Leardership',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: view own profile_personal_details profile.
  $permissions['view own profile_personal_details profile'] = array(
    'name' => 'view own profile_personal_details profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'Party Leardership' => 'Party Leardership',
    ),
    'module' => 'node',
  );

  // Exported permission: view pane admin links.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
      'Party Leardership' => 'Party Leardership',
    ),
    'module' => 'node',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Content Approver' => 'Content Approver',
      'Content Author' => 'Content Author',
    ),
    'module' => 'system',
  );

  // Exported permission: view workbench access information.
  $permissions['view workbench access information'] = array(
    'name' => 'view workbench access information',
    'roles' => array(),
    'module' => 'workbench_access',
  );

  // Exported permission: view workbench taxonomy pages.
  $permissions['view workbench taxonomy pages'] = array(
    'name' => 'view workbench taxonomy pages',
    'roles' => array(),
    'module' => 'workbench_access',
  );

  return $permissions;
}
