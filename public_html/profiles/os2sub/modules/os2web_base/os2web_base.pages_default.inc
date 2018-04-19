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
  $display->uuid = '534aa1fa-8964-4ed6-905a-c70db7ae960a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_edit_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-06802e4b-b47c-434a-a6c4-6bd0293aab37';
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
  $pane->uuid = '06802e4b-b47c-434a-a6c4-6bd0293aab37';
  $display->content['new-06802e4b-b47c-434a-a6c4-6bd0293aab37'] = $pane;
  $display->panels['center'][0] = 'new-06802e4b-b47c-434a-a6c4-6bd0293aab37';
  $pane = new stdClass();
  $pane->pid = 'new-09fa963e-e125-4c95-a001-1969e080acd6';
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
  $pane->uuid = '09fa963e-e125-4c95-a001-1969e080acd6';
  $display->content['new-09fa963e-e125-4c95-a001-1969e080acd6'] = $pane;
  $display->panels['center'][1] = 'new-09fa963e-e125-4c95-a001-1969e080acd6';
  $pane = new stdClass();
  $pane->pid = 'new-2ae6217d-3a38-4c22-a55c-35406ccc3235';
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
  $pane->uuid = '2ae6217d-3a38-4c22-a55c-35406ccc3235';
  $display->content['new-2ae6217d-3a38-4c22-a55c-35406ccc3235'] = $pane;
  $display->panels['h__jre'][0] = 'new-2ae6217d-3a38-4c22-a55c-35406ccc3235';
  $pane = new stdClass();
  $pane->pid = 'new-2bcd12b6-9262-4f5f-aebb-f4807972c2b6';
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
  $pane->uuid = '2bcd12b6-9262-4f5f-aebb-f4807972c2b6';
  $display->content['new-2bcd12b6-9262-4f5f-aebb-f4807972c2b6'] = $pane;
  $display->panels['h__jre'][1] = 'new-2bcd12b6-9262-4f5f-aebb-f4807972c2b6';
  $pane = new stdClass();
  $pane->pid = 'new-6bf86c75-2a66-491a-8a92-4c735bedfa08';
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
  $pane->uuid = '6bf86c75-2a66-491a-8a92-4c735bedfa08';
  $display->content['new-6bf86c75-2a66-491a-8a92-4c735bedfa08'] = $pane;
  $display->panels['venstre'][0] = 'new-6bf86c75-2a66-491a-8a92-4c735bedfa08';
  $pane = new stdClass();
  $pane->pid = 'new-b4e217de-e5d7-4c49-9366-fd5aa523cad0';
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
  $pane->uuid = 'b4e217de-e5d7-4c49-9366-fd5aa523cad0';
  $display->content['new-b4e217de-e5d7-4c49-9366-fd5aa523cad0'] = $pane;
  $display->panels['venstre'][1] = 'new-b4e217de-e5d7-4c49-9366-fd5aa523cad0';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context'] = $handler;

  return $export;
}
