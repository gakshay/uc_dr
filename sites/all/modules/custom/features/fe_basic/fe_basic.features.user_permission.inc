<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function fe_basic_user_default_permissions() {
  $permissions = array();

  // Exported permission: view own orders
  $permissions['view own orders'] = array(
    'name' => 'view own orders',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
