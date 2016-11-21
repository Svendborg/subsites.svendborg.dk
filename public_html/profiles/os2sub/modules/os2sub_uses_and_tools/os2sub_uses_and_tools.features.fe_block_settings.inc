<?php
/**
 * @file
 * os2sub_uses_and_tools.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function os2sub_uses_and_tools_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['footer_sitemap-footer_sitemap'] = array(
    'cache' => 4,
    'custom' => 0,
    'delta' => 'footer_sitemap',
    'module' => 'footer_sitemap',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'os2web_bootstrap_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'os2web_bootstrap_theme',
        'weight' => 0,
      ),
      'svendborg_subsitetheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'svendborg_subsitetheme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
