<?php
/**
 * @file
 * svendborg_subsites_sitemap.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function svendborg_subsites_sitemap_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
