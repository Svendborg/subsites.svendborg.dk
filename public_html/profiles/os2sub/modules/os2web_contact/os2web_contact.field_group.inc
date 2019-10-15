<?php

/**
 * @file
 * os2web_contact.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function os2web_contact_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_afsnit_tab|node|os2web_contact_contact|form';
  $field_group->group_name = 'group_afsnit_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_contact_contact';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_kontaktblok_tab_group';
  $field_group->data = array(
    'label' => 'Afsnit',
    'weight' => '4',
    'children' => array(
      0 => 'field_afsnit',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_afsnit_tab|node|os2web_contact_contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general_tab|node|os2web_contact_contact|form';
  $field_group->group_name = 'group_general_tab';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_contact_contact';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_kontaktblok_tab_group';
  $field_group->data = array(
    'label' => 'Kontaktblok',
    'weight' => '3',
    'children' => array(
      0 => 'field_os2web_contact_field_addr',
      1 => 'field_os2web_contact_field_callc',
      2 => 'field_os2web_contact_field_dept',
      3 => 'field_os2web_contact_field_email',
      4 => 'field_os2web_contact_field_info',
      5 => 'field_os2web_contact_field_phone',
      6 => 'field_os2web_contact_field_zip',
      7 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-general-tab field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_general_tab|node|os2web_contact_contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_kontaktblok_tab_group|node|os2web_contact_contact|form';
  $field_group->group_name = 'group_kontaktblok_tab_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_contact_contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kontaktblok',
    'weight' => '0',
    'children' => array(
      0 => 'group_afsnit_tab',
      1 => 'group_general_tab',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_kontaktblok_tab_group|node|os2web_contact_contact|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Afsnit');
  t('Kontaktblok');

  return $field_groups;
}
