<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function fe_basic_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'basic';
  $context->description = '';
  $context->tag = 'basic';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'uc_catalog-0' => array(
          'module' => 'uc_catalog',
          'delta' => 0,
          'region' => 'sidebar_first',
          'weight' => 0,
        ),
        'user-1' => array(
          'module' => 'user',
          'delta' => 1,
          'region' => 'sidebar_first',
          'weight' => 1,
        ),
        'uc_cart-0' => array(
          'module' => 'uc_cart',
          'delta' => 0,
          'region' => 'header',
          'weight' => 0,
        ),
        'user-0' => array(
          'module' => 'user',
          'delta' => 0,
          'region' => 'header',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('basic');

  $export['basic'] = $context;
  return $export;
}
