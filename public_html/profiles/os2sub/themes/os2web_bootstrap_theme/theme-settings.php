<?php

/**
 * @file
 * theme-settings.php
 *
 * Provides theme settings for Bootstrap based themes when admin theme is not.
 *
 * @see ./includes/settings.inc
 */

/**
 * Include common Bootstrap functions.
 */
include_once drupal_get_path('theme', 'bootstrap') . '/includes/common.inc';
bootstrap_include('bootstrap', 'includes/cdn.inc');

/**
 * Implements hook_form_FORM_ID_alter().
 */
function os2web_bootstrap_theme_form_system_theme_settings_alter(&$form, $form_state, $form_id = NULL) {
  // Do not add Bootstrap specific settings to non-bootstrap based themes,
  // including a work-around for a core bug affecting admin themes.
  // @see https://www.drupal.org/node/943212
  $theme = !empty($form_state['build_info']['args'][0]) ? $form_state['build_info']['args'][0] : FALSE;
  if (isset($form_id) || $theme === FALSE || !in_array('bootstrap', _bootstrap_get_base_themes($theme, TRUE))) {
    return;
  }

  // Container.
  $form['os2web_bootstrap']['container'] = array(
    '#type' => 'fieldset',
    '#title' => t('OS2web bootstrap columns'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $form['os2web_bootstrap']['container']['os2web_bootstrap_sidebar_first_class'] = array(
    '#type' => 'textfield',
    '#title' => t('First sidebar column classes'),
    '#default_value' => bootstrap_setting('sidebar_first_class', $theme, 'os2web_bootstrap'),
    '#description' => t('If empty "col-sm-3" class will be used')
  );
  $form['os2web_bootstrap']['container']['os2web_bootstrap_content_class'] = array(
    '#type' => 'textfield',
    '#title' => t('Content column classes for page with one sidebar'),
    '#default_value' => bootstrap_setting('content_class', $theme, 'os2web_bootstrap'),
    '#description' => t('If empty "col-sm-9" class will be used')
  );
  $form['os2web_bootstrap']['container']['os2web_bootstrap_content_class_two'] = array(
    '#type' => 'textfield',
    '#title' => t('Content column classes for page with two sidebars'),
    '#default_value' => bootstrap_setting('content_class_two', $theme, 'os2web_bootstrap'),
    '#description' => t('If empty "col-sm-6" class will be used')
  );
  $form['os2web_bootstrap']['container']['os2web_bootstrap_sidebar_second_class'] = array(
    '#type' => 'textfield',
    '#title' => t('First sidebar column classes'),
    '#default_value' => bootstrap_setting('sidebar_second_class', $theme, 'os2web_bootstrap'),
    '#description' => t('If empty "col-sm-3" class will be used')
  );
}
