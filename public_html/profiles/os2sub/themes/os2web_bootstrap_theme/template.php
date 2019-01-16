<?php
/**
 * @file
 * template.php
 */


/**
 * Implements hook_preprocess_node().
 */

/**
 * Implements theme_breadcrumb().
 *
 * Output breadcrumb as an unorderd list with unique and first/last classes.
 */
function os2web_theme_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  if (!empty($breadcrumb)) {
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';
    $crumbs = '<ul class="breadcrumbs list-group clearfix">';
    $array_size = count($breadcrumb);
    $i = 0;
    while ($i < $array_size) {
      $crumbs .= '<li class="list-group-item breadcrumb-' . $i;
      if ($i == 0) {
        $crumbs .= ' first';
      }
      if ($i + 1 == $array_size) {
        $crumbs .= ' last';
      }
      $crumbs .= '">' . $breadcrumb[$i] . '</li>';
      $i++;
    }
    $crumbs .= '</ul>';
    return $crumbs;
  }
}

/**
 * Implements template_preprocess_region().
 */
function os2web_bootstrap_theme_preprocess_region(&$variables) {
  $variables['page'] = &drupal_static('os2web_bootstrap_theme_preprocess_page_variables');
  $region = $variables['region'];

  // Handle regions.
  switch ($region) {
    case 'navigation':
      $variables['content_attributes_array']['class'][] = 'container';
      break;
  }

  $attributes = &$variables['attributes_array'];
  $attributes['class'] = $variables['classes_array'];

  $regions = system_region_list($GLOBALS['theme_key']);
  // Add "column" classes to regions.
  static $region_columns;
  if (!isset($region_columns)) {
    foreach ($regions as $name => $title) {
      $region_columns[$name] = theme_get_setting('bootstrap_region_grid-' . $name) ? : 0;
    }
    $columns = theme_get_setting('bootstrap_grid_columns') ? : 12;
    foreach ($regions as $name => $title) {
      if ($dynamic_regions = theme_get_setting('bootstrap_region_grid_dynamic-' . $name) ? : array()) {
        // Enforce the region to have the maximum number of columns.
        $column = $columns;
        foreach ($dynamic_regions as $dynamic_region) {
          if (is_array($variables['page']['page'][$dynamic_region]) &&
            element_children($variables['page']['page'][$dynamic_region])) {
            $column -= $region_columns[$dynamic_region];
          }
        }
        $region_columns[$name] = $column;
      }
    }
  }
  if ($region_columns[$region]) {
    $attributes['class'][] = (theme_get_setting('bootstrap_grid_class_prefix') ? : 'col-sm') . '-' . $region_columns[$region];
  }
}

/**
 * Implements template_preprocess_page().
 */
function os2web_bootstrap_theme_process_page(&$variables, $hook) {
  $page = &drupal_static('os2web_bootstrap_theme_preprocess_page_variables');
  if (!empty($variables['title'])) {
    $page['title'] = $variables['title'];
  }

  if (!empty($variables['breadcrumb'])) {
    $page['breadcrumb'] = $variables['breadcrumb'];
  }
}

/**
 * Implements template_preprocess_page().
 */
function os2web_bootstrap_theme_preprocess_page(&$variables, $hook) {
  // Ensure each region has the correct theme wrappers.
  foreach (system_region_list($GLOBALS['theme_key']) as $name => $title) {
    if (!$variables['page'][$name]['#theme_wrappers']) {
      $variables['page'][$name]['#theme_wrappers'] = array('region');
      $variables['page'][$name]['#region'] = $name;
    }
  }

  // Store the page variables in cache so it can be used in region
  // preprocessing.
  $page = &drupal_static(__FUNCTION__ . '_variables');
  if (!isset($page)) {
    $page = $variables;
  }
}
