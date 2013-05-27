<?php
/**
 * @file
 * crf_users.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function crf_users_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'users_request_recipients';
  $view->description = '';
  $view->tag = 'CRF';
  $view->base_table = 'users';
  $view->human_name = 'Users Request Recipients';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['alter']['text'] = '[field_last_name] -';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Field: Clusters */
  $handler->display->display_options['fields']['field_clusters']['id'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['table'] = 'field_data_field_clusters';
  $handler->display->display_options['fields']['field_clusters']['field'] = 'field_clusters';
  $handler->display->display_options['fields']['field_clusters']['label'] = '';
  $handler->display->display_options['fields']['field_clusters']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_clusters']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_clusters']['delta_offset'] = '0';
  /* Field: Field: Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'field_data_field_locations';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['label'] = '';
  $handler->display->display_options['fields']['field_locations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_locations']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_locations']['delta_offset'] = '0';
  /* Field: User: Job Title */
  $handler->display->display_options['fields']['field_job_title']['id'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['table'] = 'field_data_field_job_title';
  $handler->display->display_options['fields']['field_job_title']['field'] = 'field_job_title';
  $handler->display->display_options['fields']['field_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_job_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_job_title']['type'] = 'taxonomy_term_reference_plain';
  /* Field: User: Organisation */
  $handler->display->display_options['fields']['field_organisation']['id'] = 'field_organisation';
  $handler->display->display_options['fields']['field_organisation']['table'] = 'field_data_field_organisation';
  $handler->display->display_options['fields']['field_organisation']['field'] = 'field_organisation';
  $handler->display->display_options['fields']['field_organisation']['label'] = '';
  $handler->display->display_options['fields']['field_organisation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organisation']['type'] = 'taxonomy_term_reference_plain';
  /* Contextual filter: User: Organisation (field_organisation) */
  $handler->display->display_options['arguments']['field_organisation_tid']['id'] = 'field_organisation_tid';
  $handler->display->display_options['arguments']['field_organisation_tid']['table'] = 'field_data_field_organisation';
  $handler->display->display_options['arguments']['field_organisation_tid']['field'] = 'field_organisation_tid';
  $handler->display->display_options['arguments']['field_organisation_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_organisation_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_organisation_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_organisation_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_last_name' => 'field_last_name',
    'field_clusters' => 'field_clusters',
    'field_locations' => 'field_locations',
    'field_organisation' => 'field_organisation',
    'field_first_name' => 0,
    'field_job_title' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
  );
  $handler->display->display_options['row_options']['separator'] = '';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['users_request_recipients'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('[field_last_name] -'),
    t('All'),
    t('Entity Reference'),
  );
  $export['users_request_recipients'] = $view;

  return $export;
}