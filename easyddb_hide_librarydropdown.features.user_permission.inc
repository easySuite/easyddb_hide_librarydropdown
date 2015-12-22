<?php
/**
 * @file
 * easyddb_hide_librarydropdown.features.user_permission.inc
 */

/**
   * Implements hook_user_default_permissions().
 */
function easyddb_hide_librarydropdown_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer ding library forms'.
  $permissions['administer ding library forms'] = array(
    'name' => 'administer ding library forms',
    'roles' => array(
      'administrators' => 'administrators',
      'local administrator' => 'local administrator',
    ),
    'module' => 'easyddb_hide_librarydropdown',
  );

  return $permissions;
}
