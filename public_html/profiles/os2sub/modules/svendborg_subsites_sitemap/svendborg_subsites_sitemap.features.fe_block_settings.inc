<?php
/**
 * @file
 * svendborg_subsites_sitemap.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function svendborg_subsites_sitemap_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['site_map-syndicate'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'syndicate',
    'module' => 'site_map',
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
