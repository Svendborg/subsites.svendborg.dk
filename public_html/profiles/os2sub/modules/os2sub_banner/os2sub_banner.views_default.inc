<?php

/**
 * @file
 * os2sub_banner.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2sub_banner_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'os2sub_banner';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OS2sub Banner';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'OS2sub Banner';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Forbindelse: Indhold: Vis på sider (field_banner_vis_paa_sider) */
  $handler->display->display_options['relationships']['field_banner_vis_paa_sider_nid']['id'] = 'field_banner_vis_paa_sider_nid';
  $handler->display->display_options['relationships']['field_banner_vis_paa_sider_nid']['table'] = 'field_data_field_banner_vis_paa_sider';
  $handler->display->display_options['relationships']['field_banner_vis_paa_sider_nid']['field'] = 'field_banner_vis_paa_sider_nid';
  $handler->display->display_options['relationships']['field_banner_vis_paa_sider_nid']['delta'] = '-1';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'banner' => 'banner',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_banner_billede']['id'] = 'field_banner_billede';
  $handler->display->display_options['fields']['field_banner_billede']['table'] = 'field_data_field_banner_billede';
  $handler->display->display_options['fields']['field_banner_billede']['field'] = 'field_banner_billede';
  $handler->display->display_options['fields']['field_banner_billede']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner_billede']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Felt: Indhold: Link to edit content */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Redigér';
  /* Felt: Indhold: Vis på sider */
  $handler->display->display_options['fields']['field_banner_vis_paa_sider']['id'] = 'field_banner_vis_paa_sider';
  $handler->display->display_options['fields']['field_banner_vis_paa_sider']['table'] = 'field_data_field_banner_vis_paa_sider';
  $handler->display->display_options['fields']['field_banner_vis_paa_sider']['field'] = 'field_banner_vis_paa_sider';
  $handler->display->display_options['path'] = 'admin/content/os2sub-banner';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Bannere';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Forsidebanner Block */
  $handler = $view->new_display('block', 'Forsidebanner Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'banner' => 'banner',
  );
  /* Filterkriterie: Indhold: Promoted to front page status */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Indholdsside Banner Block */
  $handler = $view->new_display('block', 'Indholdsside Banner Block', 'block_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_banner_vis_paa_sider_nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;

  /* Display: Blok 2 */
  $handler = $view->new_display('block', 'Blok 2', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'container';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Felt: Banner */
  $handler->display->display_options['fields']['field_os2web_base_field_banner']['id'] = 'field_os2web_base_field_banner';
  $handler->display->display_options['fields']['field_os2web_base_field_banner']['table'] = 'field_data_field_os2web_base_field_banner';
  $handler->display->display_options['fields']['field_os2web_base_field_banner']['field'] = 'field_os2web_base_field_banner';
  $handler->display->display_options['fields']['field_os2web_base_field_banner']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_banner']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_base_field_banner']['element_type'] = '0';
  $handler->display->display_options['fields']['field_os2web_base_field_banner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_base_field_banner']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_os2web_base_field_banner']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_base_field_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_os2web_base_field_banner']['type'] = 'slideshow';
  $handler->display->display_options['fields']['field_os2web_base_field_banner']['settings'] = array(
    'slideshow_image_style' => 'os2sub_banner',
    'slideshow_link' => '',
    'slideshow_caption' => '',
    'slideshow_caption_link' => '',
    'slideshow_fx' => 'fade',
    'slideshow_speed' => '1000',
    'slideshow_timeout' => '4000',
    'slideshow_order' => '',
    'slideshow_controls' => 0,
    'slideshow_controls_pause' => 0,
    'slideshow_controls_position' => 'after',
    'slideshow_pause' => 0,
    'slideshow_start_on_hover' => 0,
    'slideshow_pager' => '',
    'slideshow_pager_position' => 'after',
    'slideshow_pager_image_style' => '',
    'slideshow_carousel_image_style' => '',
    'slideshow_carousel_visible' => '3',
    'slideshow_carousel_scroll' => '1',
    'slideshow_carousel_speed' => '500',
    'slideshow_carousel_skin' => '',
    'slideshow_carousel_follow' => 0,
    'slideshow_carousel_vertical' => 0,
    'slideshow_carousel_circular' => 0,
  );
  $handler->display->display_options['fields']['field_os2web_base_field_banner']['delta_limit'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_banner']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_base_contentpage' => 'os2web_base_contentpage',
  );
  $translatables['os2sub_banner'] = array(
    t('Master'),
    t('OS2sub Banner'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('field_banner_vis_paa_sider'),
    t('Page'),
    t('Billede'),
    t('Redigér'),
    t('Vis på sider'),
    t('Forsidebanner Block'),
    t('Indholdsside Banner Block'),
    t('Alle'),
    t('Blok 2'),
  );
  $export['os2sub_banner'] = $view;

  $view = new view();
  $view->name = 'os2sub_bannervisning';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OS2sub Bannervisning';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'owlcarousel';
  $handler->display->display_options['style_options']['instance'] = 'owlcarousel_settings_os2sub-banner';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Felt: Banner */
  $handler->display->display_options['fields']['field_os2web_base_field_banner']['id'] = 'field_os2web_base_field_banner';
  $handler->display->display_options['fields']['field_os2web_base_field_banner']['table'] = 'field_data_field_os2web_base_field_banner';
  $handler->display->display_options['fields']['field_os2web_base_field_banner']['field'] = 'field_os2web_base_field_banner';
  $handler->display->display_options['fields']['field_os2web_base_field_banner']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_banner']['element_type'] = '0';
  $handler->display->display_options['fields']['field_os2web_base_field_banner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_base_field_banner']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_os2web_base_field_banner']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_base_field_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_os2web_base_field_banner']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_os2web_base_field_banner']['settings'] = array(
    'url_type' => '0',
    'image_style' => 'os2sub_banner',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_os2web_base_field_banner']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_os2web_base_field_banner']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_os2web_base_field_banner']['separator'] = '';
  /* Felt: Indhold: Projektbeskrivelse */
  $handler->display->display_options['fields']['field_os2web_base_isproject_desc']['id'] = 'field_os2web_base_isproject_desc';
  $handler->display->display_options['fields']['field_os2web_base_isproject_desc']['table'] = 'field_data_field_os2web_base_isproject_desc';
  $handler->display->display_options['fields']['field_os2web_base_isproject_desc']['field'] = 'field_os2web_base_isproject_desc';
  $handler->display->display_options['fields']['field_os2web_base_isproject_desc']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_isproject_desc']['alter']['text'] = '<div>
[field_os2web_base_field_banner]
[field_os2web_base_isproject_desc] </div>
<div class="page-calendar-slider ">
<div class="slider-cover single\'" style="background-image: 
-moz-linear-gradient(left, rgba(0,0,0,0.75) 0%, rgba(0,0,0,0.75) 100%),  url(\'[field_os2web_base_field_banner]\');
background-image: -webkit-gradient(left top, right top, color-stop(0%, rgba(0,0,0,0.75)), color-stop(100%, rgba(0,0,0,0.75))), url(\'[field_os2web_base_field_banner]\');
background-image: -webkit-linear-gradient(left, rgba(0,0,0,0.75) 0%, rgba(0,0,0,0.75) 100%), url(\'[field_os2web_base_field_banner]\');
background-image: -o-linear-gradient(left, rgba(0,0,0,0.75) 0%, rgba(0,0,0,0.75) 100%), url(\'[field_os2web_base_field_banner]\');
background-image: -ms-linear-gradient(left, rgba(0,0,0,0.75) 0%, rgba(0,0,0,0.75) 100%), url(\'[field_os2web_base_field_banner]\');
background-image: linear-gradient(to right, rgba(0,0,0,0.75) 0%, rgba(0,0,0,0.75) 100%), url(\'[field_os2web_base_field_banner]\');
filter: progid:DXImageTransform.Microsoft.gradient( startColorstr=\'#000000\', endColorstr=\'#000000\', GradientType=1 );\'">

[field_os2web_base_isproject_desc]
</div></div>';
  $handler->display->display_options['fields']['field_os2web_base_isproject_desc']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_os2web_base_isproject_desc']['element_class'] = 'bannertekst';
  $handler->display->display_options['fields']['field_os2web_base_isproject_desc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_base_isproject_desc']['element_default_classes'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Indhold: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Blok */
  $handler = $view->new_display('block', 'Blok', 'bannerloader');
  $translatables['os2sub_bannervisning'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('<div>
[field_os2web_base_field_banner]
[field_os2web_base_isproject_desc] </div>
<div class="page-calendar-slider ">
<div class="slider-cover single\'" style="background-image: 
-moz-linear-gradient(left, rgba(0,0,0,0.75) 0%, rgba(0,0,0,0.75) 100%),  url(\'[field_os2web_base_field_banner]\');
background-image: -webkit-gradient(left top, right top, color-stop(0%, rgba(0,0,0,0.75)), color-stop(100%, rgba(0,0,0,0.75))), url(\'[field_os2web_base_field_banner]\');
background-image: -webkit-linear-gradient(left, rgba(0,0,0,0.75) 0%, rgba(0,0,0,0.75) 100%), url(\'[field_os2web_base_field_banner]\');
background-image: -o-linear-gradient(left, rgba(0,0,0,0.75) 0%, rgba(0,0,0,0.75) 100%), url(\'[field_os2web_base_field_banner]\');
background-image: -ms-linear-gradient(left, rgba(0,0,0,0.75) 0%, rgba(0,0,0,0.75) 100%), url(\'[field_os2web_base_field_banner]\');
background-image: linear-gradient(to right, rgba(0,0,0,0.75) 0%, rgba(0,0,0,0.75) 100%), url(\'[field_os2web_base_field_banner]\');
filter: progid:DXImageTransform.Microsoft.gradient( startColorstr=\'#000000\', endColorstr=\'#000000\', GradientType=1 );\'">

[field_os2web_base_isproject_desc]
</div></div>'),
    t('Alle'),
    t('Blok'),
  );
  $export['os2sub_bannervisning'] = $view;

  return $export;
}
