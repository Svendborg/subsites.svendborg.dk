<?php
/**
 * @file
 * os2sub_uses_and_tools.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function os2sub_uses_and_tools_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_css_fix_type';
  $strongarm->value = 1;
  $export['advagg_css_fix_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_enabled';
  $strongarm->value = 1;
  $export['advagg_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_gzip';
  $strongarm->value = 1;
  $export['advagg_gzip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_ie_css_selector_limiter';
  $strongarm->value = 1;
  $export['advagg_ie_css_selector_limiter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_ie_css_selector_limiter_value';
  $strongarm->value = '4095';
  $export['advagg_ie_css_selector_limiter_value'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_include_base_url';
  $strongarm->value = 0;
  $export['advagg_include_base_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'advagg_js_fix_type';
  $strongarm->value = 1;
  $export['advagg_js_fix_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'method' => 'default',
    'disabled_javascripts' => '',
    'whitelisted_cookies' => '',
    'consent_storage_method' => NULL,
    'popup_clicking_confirmation' => 0,
    'popup_info' => array(
      'value' => '<p><strong>Vi bruger cookies.</strong><br />
Nogle sikrer at hjemmesiden&nbsp;virker, andre samler statistik ind til forbedring af din brugeroplevelse.<br />
Ved at klikke Ja accpterer du brugen af cookies på denne hjemmeside.</p>
',
      'format' => 'full_html',
    ),
    'use_mobile_message' => 0,
    'mobile_popup_info' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'mobile_breakpoint' => '768',
    'popup_agree_button_message' => 'Ja, jeg accepterer',
    'show_disagree_button' => 1,
    'popup_disagree_button_message' => 'Læs mere om cookies',
    'disagree_button_label' => 'Jeg accepterer ikke',
    'withdraw_enabled' => 0,
    'withdraw_message' => array(
      'value' => '',
      'format' => 'full_html',
    ),
    'withdraw_tab_button_label' => '',
    'withdraw_action_button_label' => '',
    'popup_agreed_enabled' => 0,
    'popup_hide_agreed' => 0,
    'popup_agreed' => array(
      'value' => 'Tak for din accept.',
      'format' => 'plain_text',
    ),
    'popup_find_more_button_message' => 'More info',
    'popup_hide_button_message' => 'Skjul',
    'popup_link' => 'node/13',
    'popup_link_new_window' => 1,
    'popup_position' => FALSE,
    'use_bare_css' => 0,
    'popup_text_hex' => 'ffffff',
    'popup_bg_hex' => '0779BF',
    'popup_height' => '',
    'popup_width' => '100%',
    'fixed_top_position' => 0,
    'popup_delay' => '1000',
    'disagree_do_not_show_popup' => 0,
    'reload_page' => 0,
    'popup_scrolling_confirmation' => 0,
    'cookie_name' => '',
    'domains_option' => '1',
    'domains_list' => '',
    'exclude_paths' => '',
    'exclude_admin_pages' => 0,
    'exclude_uid_1' => 0,
    'script_scope' => 'footer',
    'better_support_for_screen_readers' => 0,
    'cookie_session' => 0,
  );
  $export['eu_cookie_compliance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_cookie_lifetime';
  $strongarm->value = '100';
  $export['eu_cookie_compliance_cookie_lifetime'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_domain';
  $strongarm->value = '';
  $export['eu_cookie_compliance_domain'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_alert';
  $strongarm->value = 0;
  $export['extlink_alert'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_alert_text';
  $strongarm->value = 'This link will take you to an external web site.';
  $export['extlink_alert_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_class';
  $strongarm->value = 0;
  $export['extlink_class'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_css_exclude';
  $strongarm->value = '';
  $export['extlink_css_exclude'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_css_explicit';
  $strongarm->value = '';
  $export['extlink_css_explicit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_exclude';
  $strongarm->value = '';
  $export['extlink_exclude'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_img_class';
  $strongarm->value = 0;
  $export['extlink_img_class'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_include';
  $strongarm->value = '';
  $export['extlink_include'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_mailto_class';
  $strongarm->value = 0;
  $export['extlink_mailto_class'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_subdomains';
  $strongarm->value = 1;
  $export['extlink_subdomains'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'extlink_target';
  $strongarm->value = '_blank';
  $export['extlink_target'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'footer_sitemap_menu';
  $strongarm->value = array(
    'main-menu' => 'main-menu',
  );
  $export['footer_sitemap_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_date_format';
  $strongarm->value = 'd/m/Y H:i:s';
  $export['scheduler_date_format'] = $strongarm;

  return $export;
}
