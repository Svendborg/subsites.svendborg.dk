<?php

/**
 * @file
 * os2sub_uses_and_tools.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function os2sub_uses_and_tools_filter_default_formats() {
  $formats = array();

  // Exported format: HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 1,
    'filters' => array(
      'media_filter' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => -43,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
