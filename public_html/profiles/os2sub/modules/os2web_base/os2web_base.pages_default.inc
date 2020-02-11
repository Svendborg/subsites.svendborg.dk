<?php

/**
 * @file
 * os2web_base.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function os2web_base_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Indholdsside',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '.panels-flexible-node_edit-inside { padding: 10px}',
    'contexts' => array(
      0 => array(
        'identifier' => 'Redigeringsformular',
        'keyword' => 'node_add',
        'name' => 'node_add_form',
        'type' => 'os2web_base_contentpage',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'os2web_base_contentpage' => 'os2web_base_contentpage',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible:node_edit';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'lead' => NULL,
      'top_left' => NULL,
      'top_center' => NULL,
      'top_right' => NULL,
      'middle_left' => NULL,
      'middle_right' => NULL,
      'bottom' => NULL,
      'center' => NULL,
      'venstre' => NULL,
      'h__jre' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0a318180-c995-44ff-93c3-08292e9e87fb';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_edit_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-325ddbaa-32bc-4b22-8e38-eac0958f3a4b';
  $pane->panel = 'center';
  $pane->type = 'form';
  $pane->subtype = 'form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '325ddbaa-32bc-4b22-8e38-eac0958f3a4b';
  $display->content['new-325ddbaa-32bc-4b22-8e38-eac0958f3a4b'] = $pane;
  $display->panels['center'][0] = 'new-325ddbaa-32bc-4b22-8e38-eac0958f3a4b';
  $pane = new stdClass();
  $pane->pid = 'new-9ca8144a-7cd4-4652-a0e5-78b667d21570';
  $pane->panel = 'center';
  $pane->type = 'node_form_buttons';
  $pane->subtype = 'node_form_buttons';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9ca8144a-7cd4-4652-a0e5-78b667d21570';
  $display->content['new-9ca8144a-7cd4-4652-a0e5-78b667d21570'] = $pane;
  $display->panels['center'][1] = 'new-9ca8144a-7cd4-4652-a0e5-78b667d21570';
  $pane = new stdClass();
  $pane->pid = 'new-8c460b47-3baa-499e-b569-7daacb6eb90f';
  $pane->panel = 'h__jre';
  $pane->type = 'node_form_buttons';
  $pane->subtype = 'node_form_buttons';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8c460b47-3baa-499e-b569-7daacb6eb90f';
  $display->content['new-8c460b47-3baa-499e-b569-7daacb6eb90f'] = $pane;
  $display->panels['h__jre'][0] = 'new-8c460b47-3baa-499e-b569-7daacb6eb90f';
  $pane = new stdClass();
  $pane->pid = 'new-7c26c41d-c6ad-48f9-87da-b198835c456d';
  $pane->panel = 'h__jre';
  $pane->type = 'node_form_publishing';
  $pane->subtype = 'node_form_publishing';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7c26c41d-c6ad-48f9-87da-b198835c456d';
  $display->content['new-7c26c41d-c6ad-48f9-87da-b198835c456d'] = $pane;
  $display->panels['h__jre'][1] = 'new-7c26c41d-c6ad-48f9-87da-b198835c456d';
  $pane = new stdClass();
  $pane->pid = 'new-85c3cd12-03ee-4a0f-b09a-713f62cde5fb';
  $pane->panel = 'venstre';
  $pane->type = 'node_form_title';
  $pane->subtype = 'node_form_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '85c3cd12-03ee-4a0f-b09a-713f62cde5fb';
  $display->content['new-85c3cd12-03ee-4a0f-b09a-713f62cde5fb'] = $pane;
  $display->panels['venstre'][0] = 'new-85c3cd12-03ee-4a0f-b09a-713f62cde5fb';
  $pane = new stdClass();
  $pane->pid = 'new-63eec564-56e6-44f3-aada-407d99909a51';
  $pane->panel = 'venstre';
  $pane->type = 'node_form_path';
  $pane->subtype = 'node_form_path';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '63eec564-56e6-44f3-aada-407d99909a51';
  $display->content['new-63eec564-56e6-44f3-aada-407d99909a51'] = $pane;
  $display->panels['venstre'][1] = 'new-63eec564-56e6-44f3-aada-407d99909a51';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context'] = $handler;

  return $export;
}
