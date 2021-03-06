<?php
/**
 * @file
 * cod_base.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cod_base_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organizer_contact|user|user|form';
  $field_group->group_name = 'group_organizer_contact';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Profile',
    'weight' => '5',
    'children' => array(
      0 => 'group_profile_organizer',
      1 => 'group_volunteer_info',
      2 => 'group_profile_info',
      3 => 'group_drupal_info',
      4 => 'group_socai_media',
      5 => 'group_info_tabs',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => ' group-organizer-contact field-group-div',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_organizer_contact|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_info|user|user|form';
  $field_group->group_name = 'group_profile_info';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_organizer_contact';
  $field_group->data = array(
    'label' => 'My Profile Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_profile_first',
      1 => 'field_profile_interests',
      2 => 'field_profile_job_title',
      3 => 'field_profile_last',
      4 => 'field_profile_org',
      5 => 'field_bio',
      6 => 'field_profile_org_skype',
      7 => 'field_org_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-profile-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_profile_info|user|user|form'] = $field_group;

  return $export;
}
