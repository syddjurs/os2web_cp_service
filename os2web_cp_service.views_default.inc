<?php
/**
 * @file
 * os2web_cp_service.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2web_cp_service_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'os2web_cp_service_cp_case_search';
  $view->description = 'These views searches and shows CP Cases';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CP Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Søg i sager';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: OprettelsesDato */
  $handler->display->display_options['fields']['field_os2web_cp_service_created']['id'] = 'field_os2web_cp_service_created';
  $handler->display->display_options['fields']['field_os2web_cp_service_created']['table'] = 'field_data_field_os2web_cp_service_created';
  $handler->display->display_options['fields']['field_os2web_cp_service_created']['field'] = 'field_os2web_cp_service_created';
  $handler->display->display_options['fields']['field_os2web_cp_service_created']['label'] = 'Dato';
  $handler->display->display_options['fields']['field_os2web_cp_service_created']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: DokumentID */
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_id']['id'] = 'field_os2web_cp_service_doc_id';
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_id']['table'] = 'field_data_field_os2web_cp_service_doc_id';
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_id']['field'] = 'field_os2web_cp_service_doc_id';
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_id']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_id']['element_label_colon'] = FALSE;
  /* Field: Content: FilID */
  $handler->display->display_options['fields']['field_os2web_cp_service_file_id']['id'] = 'field_os2web_cp_service_file_id';
  $handler->display->display_options['fields']['field_os2web_cp_service_file_id']['table'] = 'field_data_field_os2web_cp_service_file_id';
  $handler->display->display_options['fields']['field_os2web_cp_service_file_id']['field'] = 'field_os2web_cp_service_file_id';
  $handler->display->display_options['fields']['field_os2web_cp_service_file_id']['exclude'] = TRUE;
  /* Field: Content: FullXML */
  $handler->display->display_options['fields']['field_os2web_cp_service_full_xml']['id'] = 'field_os2web_cp_service_full_xml';
  $handler->display->display_options['fields']['field_os2web_cp_service_full_xml']['table'] = 'field_data_field_os2web_cp_service_full_xml';
  $handler->display->display_options['fields']['field_os2web_cp_service_full_xml']['field'] = 'field_os2web_cp_service_full_xml';
  $handler->display->display_options['fields']['field_os2web_cp_service_full_xml']['exclude'] = TRUE;
  /* Field: Content: SagsID */
  $handler->display->display_options['fields']['field_os2web_cp_service_case_id']['id'] = 'field_os2web_cp_service_case_id';
  $handler->display->display_options['fields']['field_os2web_cp_service_case_id']['table'] = 'field_data_field_os2web_cp_service_case_id';
  $handler->display->display_options['fields']['field_os2web_cp_service_case_id']['field'] = 'field_os2web_cp_service_case_id';
  /* Field: Content: Sagstype */
  $handler->display->display_options['fields']['field_os2web_cp_service_casetype']['id'] = 'field_os2web_cp_service_casetype';
  $handler->display->display_options['fields']['field_os2web_cp_service_casetype']['table'] = 'field_data_field_os2web_cp_service_casetype';
  $handler->display->display_options['fields']['field_os2web_cp_service_casetype']['field'] = 'field_os2web_cp_service_casetype';
  /* Field: Content: SystemId */
  $handler->display->display_options['fields']['field_os2web_cp_service_sysid']['id'] = 'field_os2web_cp_service_sysid';
  $handler->display->display_options['fields']['field_os2web_cp_service_sysid']['table'] = 'field_data_field_os2web_cp_service_sysid';
  $handler->display->display_options['fields']['field_os2web_cp_service_sysid']['field'] = 'field_os2web_cp_service_sysid';
  $handler->display->display_options['fields']['field_os2web_cp_service_sysid']['exclude'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_cp_service_cp_case' => 'os2web_cp_service_cp_case',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: OprettelsesDato (field_os2web_cp_service_created) */
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value']['id'] = 'field_os2web_cp_service_created_value';
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value']['table'] = 'field_data_field_os2web_cp_service_created';
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value']['field'] = 'field_os2web_cp_service_created_value';
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value']['group'] = 1;
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value']['expose']['operator_id'] = 'field_os2web_cp_service_created_value_op';
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value']['expose']['label'] = 'Fra';
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value']['expose']['operator'] = 'field_os2web_cp_service_created_value_op';
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value']['expose']['identifier'] = 'field_os2web_cp_service_created_value';
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: OprettelsesDato (field_os2web_cp_service_created) */
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value_1']['id'] = 'field_os2web_cp_service_created_value_1';
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value_1']['table'] = 'field_data_field_os2web_cp_service_created';
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value_1']['field'] = 'field_os2web_cp_service_created_value';
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value_1']['expose']['operator_id'] = 'field_os2web_cp_service_created_value_1_op';
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value_1']['expose']['label'] = 'Til';
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value_1']['expose']['operator'] = 'field_os2web_cp_service_created_value_1_op';
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value_1']['expose']['identifier'] = 'field_os2web_cp_service_created_value_1';
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value_1']['form_type'] = 'date_popup';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_os2web_cp_service_case_num_value']['id'] = 'field_os2web_cp_service_case_num_value';
  $handler->display->display_options['filters']['field_os2web_cp_service_case_num_value']['table'] = 'field_data_field_os2web_cp_service_case_num';
  $handler->display->display_options['filters']['field_os2web_cp_service_case_num_value']['field'] = 'field_os2web_cp_service_case_num_value';
  $handler->display->display_options['filters']['field_os2web_cp_service_case_num_value']['group'] = 2;
  $handler->display->display_options['filters']['field_os2web_cp_service_case_num_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2web_cp_service_case_num_value']['expose']['operator_id'] = 'field_os2web_cp_service_case_num_value_op';
  $handler->display->display_options['filters']['field_os2web_cp_service_case_num_value']['expose']['label'] = 'Sagsnummer';
  $handler->display->display_options['filters']['field_os2web_cp_service_case_num_value']['expose']['operator'] = 'field_os2web_cp_service_case_num_value_op';
  $handler->display->display_options['filters']['field_os2web_cp_service_case_num_value']['expose']['identifier'] = 'field_os2web_cp_service_case_num_value';
  $handler->display->display_options['filters']['field_os2web_cp_service_case_num_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Sagstype (field_os2web_cp_service_casetype) */
  $handler->display->display_options['filters']['field_os2web_cp_service_casetype_value']['id'] = 'field_os2web_cp_service_casetype_value';
  $handler->display->display_options['filters']['field_os2web_cp_service_casetype_value']['table'] = 'field_data_field_os2web_cp_service_casetype';
  $handler->display->display_options['filters']['field_os2web_cp_service_casetype_value']['field'] = 'field_os2web_cp_service_casetype_value';
  $handler->display->display_options['filters']['field_os2web_cp_service_casetype_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2web_cp_service_casetype_value']['expose']['operator_id'] = 'field_os2web_cp_service_casetype_value_op';
  $handler->display->display_options['filters']['field_os2web_cp_service_casetype_value']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_os2web_cp_service_casetype_value']['expose']['operator'] = 'field_os2web_cp_service_casetype_value_op';
  $handler->display->display_options['filters']['field_os2web_cp_service_casetype_value']['expose']['identifier'] = 'field_os2web_cp_service_casetype_value';
  $handler->display->display_options['filters']['field_os2web_cp_service_casetype_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'cp-search';
  $export['os2web_cp_service_cp_case_search'] = $view;

  $view = new view();
  $view->name = 'os2web_cp_service_cp_case_view';
  $view->description = 'Views to display the content of a CP Case';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CP View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_cp_service_cp_case' => 'os2web_cp_service_cp_case',
  );

  /* Display: Description */
  $handler = $view->new_display('attachment', 'Description', 'os2web_cp_service_cp_case_view_description_attachment');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Sagsindhold */
  $handler->display->display_options['fields']['field_os2web_cp_service_content']['id'] = 'field_os2web_cp_service_content';
  $handler->display->display_options['fields']['field_os2web_cp_service_content']['table'] = 'field_data_field_os2web_cp_service_content';
  $handler->display->display_options['fields']['field_os2web_cp_service_content']['field'] = 'field_os2web_cp_service_content';
  $handler->display->display_options['fields']['field_os2web_cp_service_content']['label'] = 'Beskrivelse';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: SagsID (field_os2web_cp_service_case_id) */
  $handler->display->display_options['arguments']['field_os2web_cp_service_case_id_value']['id'] = 'field_os2web_cp_service_case_id_value';
  $handler->display->display_options['arguments']['field_os2web_cp_service_case_id_value']['table'] = 'field_data_field_os2web_cp_service_case_id';
  $handler->display->display_options['arguments']['field_os2web_cp_service_case_id_value']['field'] = 'field_os2web_cp_service_case_id_value';
  $handler->display->display_options['arguments']['field_os2web_cp_service_case_id_value']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_os2web_cp_service_case_id_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_os2web_cp_service_case_id_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_os2web_cp_service_case_id_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_os2web_cp_service_case_id_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_os2web_cp_service_case_id_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_os2web_cp_service_case_id_value']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_os2web_cp_service_case_id_value']['validate_options']['types'] = array(
    'os2web_cp_service_cp_case' => 'os2web_cp_service_cp_case',
  );
  $handler->display->display_options['arguments']['field_os2web_cp_service_case_id_value']['validate_options']['access'] = TRUE;
  $handler->display->display_options['arguments']['field_os2web_cp_service_case_id_value']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_cp_service_cp_case' => 'os2web_cp_service_cp_case',
  );
  /* Filter criterion: Content: Sagsindhold (field_os2web_cp_service_content) */
  $handler->display->display_options['filters']['field_os2web_cp_service_content_value']['id'] = 'field_os2web_cp_service_content_value';
  $handler->display->display_options['filters']['field_os2web_cp_service_content_value']['table'] = 'field_data_field_os2web_cp_service_content';
  $handler->display->display_options['filters']['field_os2web_cp_service_content_value']['field'] = 'field_os2web_cp_service_content_value';
  $handler->display->display_options['filters']['field_os2web_cp_service_content_value']['operator'] = 'longerthan';
  $handler->display->display_options['filters']['field_os2web_cp_service_content_value']['value'] = '1';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Dokumenter (field_os2web_cp_service_doc_ref) */
  $handler->display->display_options['relationships']['field_os2web_cp_service_doc_ref_nid']['id'] = 'field_os2web_cp_service_doc_ref_nid';
  $handler->display->display_options['relationships']['field_os2web_cp_service_doc_ref_nid']['table'] = 'field_data_field_os2web_cp_service_doc_ref';
  $handler->display->display_options['relationships']['field_os2web_cp_service_doc_ref_nid']['field'] = 'field_os2web_cp_service_doc_ref_nid';
  $handler->display->display_options['relationships']['field_os2web_cp_service_doc_ref_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Dokumenter */
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_ref']['id'] = 'field_os2web_cp_service_doc_ref';
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_ref']['table'] = 'field_data_field_os2web_cp_service_doc_ref';
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_ref']['field'] = 'field_os2web_cp_service_doc_ref';
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_ref']['settings'] = array(
    'alias' => 1,
    'absolute' => 0,
  );
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_ref']['delta_offset'] = '0';
  /* Field: Content: OprettelsesDato */
  $handler->display->display_options['fields']['field_os2web_cp_service_created']['id'] = 'field_os2web_cp_service_created';
  $handler->display->display_options['fields']['field_os2web_cp_service_created']['table'] = 'field_data_field_os2web_cp_service_created';
  $handler->display->display_options['fields']['field_os2web_cp_service_created']['field'] = 'field_os2web_cp_service_created';
  $handler->display->display_options['fields']['field_os2web_cp_service_created']['relationship'] = 'field_os2web_cp_service_doc_ref_nid';
  $handler->display->display_options['fields']['field_os2web_cp_service_created']['label'] = 'Dato';
  $handler->display->display_options['fields']['field_os2web_cp_service_created']['element_wrapper_class'] = 'documentdate';
  $handler->display->display_options['fields']['field_os2web_cp_service_created']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h1>[title]</h1>
<h2>Sags Nr.: [field_os2web_cp_service_case_id]</h2>';
  $handler->display->display_options['header']['area_text_custom']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: OprettelsesDato */
  $handler->display->display_options['fields']['field_os2web_cp_service_created']['id'] = 'field_os2web_cp_service_created';
  $handler->display->display_options['fields']['field_os2web_cp_service_created']['table'] = 'field_data_field_os2web_cp_service_created';
  $handler->display->display_options['fields']['field_os2web_cp_service_created']['field'] = 'field_os2web_cp_service_created';
  $handler->display->display_options['fields']['field_os2web_cp_service_created']['label'] = 'Dato';
  $handler->display->display_options['fields']['field_os2web_cp_service_created']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: SagsID */
  $handler->display->display_options['fields']['field_os2web_cp_service_case_id']['id'] = 'field_os2web_cp_service_case_id';
  $handler->display->display_options['fields']['field_os2web_cp_service_case_id']['table'] = 'field_data_field_os2web_cp_service_case_id';
  $handler->display->display_options['fields']['field_os2web_cp_service_case_id']['field'] = 'field_os2web_cp_service_case_id';
  $handler->display->display_options['fields']['field_os2web_cp_service_case_id']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_cp_service_case_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_cp_service_case_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_cp_service_cp_case' => 'os2web_cp_service_cp_case',
  );
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '$url = pathinfo($_GET[\'q\']);
$id = $url[\'basename\'];
$year = substr($url[\'dirname\'], -2);
$node = node_load($data->nid);
$field_case_id = field_get_items(\'node\', $node, \'field_os2web_cp_service_case_id\');
$field_case_id = $field_case_id[0][\'value\'];
$arp_case_id = $year . "/" . $id;
if ($arp_case_id !== $field_case_id)
{
return TRUE;
}';
  $handler->display->display_options['path'] = 'sag/%';
  $export['os2web_cp_service_cp_case_view'] = $view;

  return $export;
}
