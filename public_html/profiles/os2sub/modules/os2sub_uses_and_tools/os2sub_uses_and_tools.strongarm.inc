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
    'save_preferences_button_label' => 'Gem indstillinger',
    'accept_all_categories_button_label' => 'Accepter alle',
    'only_required_button_label' => 'Kun nødvendige',
    'popup_disagree_button_message' => 'Jeg ønsker at vide mere om cookiepolitikken',
    'withdraw_tab_button_label' => 'Indstillinger for privatliv',
    'method' => 'categories',
    'automatic_cookies_removal' => 1,
    'withdraw_enabled' => 1,
    'withdraw_button_on_info_popup' => 1,
    'popup_text_hex' => '000000',
    'popup_bg_hex' => 'FFFFFF',
    'popup_link' => 'https://www.svendborg.dk/kommunen/presse-og-information/om-svendborgdk',
    'popup_position' => 'popup',
    'popup_width' => '700',
    'popup_info' => array(
      'value' => '<h2>Du bestemmer over dine data</h2>
<p>Vi og vores samarbejdspartnere bruger cookies, til at indsamle oplysninger om
 dig til at understøtte forskellige funktioner på hjemmesiden, herunder:</p>
<ol dir="ltr">
  <li>Funktionalitet</li>
  <li>Markedsføring</li>
  <li>Statistik</li>
</ol>
<p>Ved at trykke på "Accepter alle" giver du samtykke til alle de formål i
 ovenstående liste. Du kan også vælge at specificere hvilke typer cookies du vil
  give samtykke til, ved at benytte markeringsfelterne ud for formålet og
   efterfølgende trykke på "Gem indstillinger".</p>
<p>Du kan altid trække dit samtykke tilbage ved at trykke på "Indstillinger for
privatliv".<br />
Du kan desuden læse mere om vores brug af cookies og andre teknologier, samt 
læse vores erklæring om indsamling og behandling af personoplysninger ved at 
klikke på linket herunder.</p>',
      'format' => 'full_html',
    ),
    'popup_enabled' => 1,
    'info_template' => 'new',
    'enable_save_preferences_button' => 1,
    'disabled_javascripts' => '',
    'allowed_cookies' => '',
    'allowed_cookies_enriched' => '',
    'consent_storage_method' => 'do_not_store',
    'popup_clicking_confirmation' => FALSE,
    'use_mobile_message' => 0,
    'mobile_popup_info' => array(
      'value' => '',
      'format' => 'plain_text',
    ),
    'mobile_breakpoint' => '768',
    'popup_agree_button_message' => 'Ja, jeg accepterer',
    'show_disagree_button' => TRUE,
    'disagree_button_label' => 'Jeg accepterer ikke',
    'withdraw_message' => array(
      'value' => '',
      'format' => 'plain_text',
    ),
    'withdraw_action_button_label' => '',
    'popup_agreed_enabled' => 0,
    'popup_hide_agreed' => 0,
    'popup_agreed' => array(
      'value' => 'Tak for din accept.',
      'format' => 'plain_text',
    ),
    'popup_find_more_button_message' => 'More info',
    'popup_hide_button_message' => 'Skjul',
    'popup_link_new_window' => 1,
    'cookie_policy_version' => '1.0.0',
    'containing_element' => 'body',
    'use_bare_css' => 0,
    'popup_height' => '',
    'branding_header' => '',
    'branding_logo_path' => '',
    'branding_logo_upload' => '',
    'popup_theme' => 'design1',
    'fixed_top_position' => 0,
    'popup_delay' => '1000',
    'disagree_do_not_show_popup' => 0,
    'reload_page' => 0,
    'popup_scrolling_confirmation' => FALSE,
    'cookie_name' => '',
    'domains_option' => '1',
    'domains_list' => '',
    'exclude_paths' => '',
    'exclude_admin_pages' => 0,
    'exclude_uid_1' => 0,
    'script_scope' => 'footer',
    'better_support_for_screen_readers' => 0,
    'cookie_session' => 0,
    'notification_email' => '',
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
