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
  $view->human_name = 'CP Case Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Åben Indsigt - Søgning';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filtrer';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« Første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ Forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'Næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'Sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_os2web_cp_service_case_id' => 'field_os2web_cp_service_case_id',
    'field_os2web_cp_service_content' => 'field_os2web_cp_service_content',
    'title' => 'title',
    'field_os2web_cp_service_created' => 'field_os2web_cp_service_created',
    'field_os2web_cp_service_casetype' => 'field_os2web_cp_service_casetype',
    'field_os2web_cp_service_doc_id_1' => 'field_os2web_cp_service_doc_id_1',
    'field_os2web_cp_service_content_1' => 'field_os2web_cp_service_content_1',
    'title_1' => 'title_1',
  );
  $handler->display->display_options['style_options']['default'] = 'field_os2web_cp_service_created';
  $handler->display->display_options['style_options']['info'] = array(
    'field_os2web_cp_service_case_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2web_cp_service_content' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2web_cp_service_created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2web_cp_service_casetype' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2web_cp_service_doc_id_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2web_cp_service_content_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = '<h2>Resultater</h2> <p>Hold musen over sagen for at se en beskrivelse</p>';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_os2web_cp_service_doc_ref_target_id']['id'] = 'field_os2web_cp_service_doc_ref_target_id';
  $handler->display->display_options['relationships']['field_os2web_cp_service_doc_ref_target_id']['table'] = 'field_data_field_os2web_cp_service_doc_ref';
  $handler->display->display_options['relationships']['field_os2web_cp_service_doc_ref_target_id']['field'] = 'field_os2web_cp_service_doc_ref_target_id';
  /* Field: Content: SagsID */
  $handler->display->display_options['fields']['field_os2web_cp_service_case_id']['id'] = 'field_os2web_cp_service_case_id';
  $handler->display->display_options['fields']['field_os2web_cp_service_case_id']['table'] = 'field_data_field_os2web_cp_service_case_id';
  $handler->display->display_options['fields']['field_os2web_cp_service_case_id']['field'] = 'field_os2web_cp_service_case_id';
  $handler->display->display_options['fields']['field_os2web_cp_service_case_id']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_cp_service_case_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_cp_service_case_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_cp_service_case_id']['group_column'] = 'entity_id';
  /* Field: Content: Sagsindhold */
  $handler->display->display_options['fields']['field_os2web_cp_service_content']['id'] = 'field_os2web_cp_service_content';
  $handler->display->display_options['fields']['field_os2web_cp_service_content']['table'] = 'field_data_field_os2web_cp_service_content';
  $handler->display->display_options['fields']['field_os2web_cp_service_content']['field'] = 'field_os2web_cp_service_content';
  $handler->display->display_options['fields']['field_os2web_cp_service_content']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_cp_service_content']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_cp_service_content']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_cp_service_content']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_cp_service_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_cp_service_content']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_os2web_cp_service_content']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'sag/[field_os2web_cp_service_case_id]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[field_os2web_cp_service_content]';
  $handler->display->display_options['fields']['title']['alter']['link_class'] = 'qtip-this';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: OprettelsesDato */
  $handler->display->display_options['fields']['field_os2web_cp_service_created']['id'] = 'field_os2web_cp_service_created';
  $handler->display->display_options['fields']['field_os2web_cp_service_created']['table'] = 'field_data_field_os2web_cp_service_created';
  $handler->display->display_options['fields']['field_os2web_cp_service_created']['field'] = 'field_os2web_cp_service_created';
  $handler->display->display_options['fields']['field_os2web_cp_service_created']['label'] = 'Oprettelsesdato';
  $handler->display->display_options['fields']['field_os2web_cp_service_created']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Sagstype */
  $handler->display->display_options['fields']['field_os2web_cp_service_casetype']['id'] = 'field_os2web_cp_service_casetype';
  $handler->display->display_options['fields']['field_os2web_cp_service_casetype']['table'] = 'field_data_field_os2web_cp_service_casetype';
  $handler->display->display_options['fields']['field_os2web_cp_service_casetype']['field'] = 'field_os2web_cp_service_casetype';
  $handler->display->display_options['fields']['field_os2web_cp_service_casetype']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_cp_service_casetype']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_cp_service_casetype']['element_label_colon'] = FALSE;
  /* Field: Content: DokumentID */
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_id_1']['id'] = 'field_os2web_cp_service_doc_id_1';
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_id_1']['table'] = 'field_data_field_os2web_cp_service_doc_id';
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_id_1']['field'] = 'field_os2web_cp_service_doc_id';
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_id_1']['relationship'] = 'field_os2web_cp_service_doc_ref_target_id';
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_id_1']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_id_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_id_1']['element_label_colon'] = FALSE;
  /* Field: Content: Sagsindhold */
  $handler->display->display_options['fields']['field_os2web_cp_service_content_1']['id'] = 'field_os2web_cp_service_content_1';
  $handler->display->display_options['fields']['field_os2web_cp_service_content_1']['table'] = 'field_data_field_os2web_cp_service_content';
  $handler->display->display_options['fields']['field_os2web_cp_service_content_1']['field'] = 'field_os2web_cp_service_content';
  $handler->display->display_options['fields']['field_os2web_cp_service_content_1']['relationship'] = 'field_os2web_cp_service_doc_ref_target_id';
  $handler->display->display_options['fields']['field_os2web_cp_service_content_1']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_cp_service_content_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_cp_service_content_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_os2web_cp_service_doc_ref_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
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
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['group'] = 1;
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = 'if (count($view->exposed_input)) {
return FALSE; 
} else { 
return TRUE; // If no exposed inputs, remove all results
}';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'word';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Søgetekst';
  $handler->display->display_options['filters']['combine']['expose']['description'] = 'fx. Birkevej affald';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'search-text';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_os2web_cp_service_content' => 'field_os2web_cp_service_content',
    'title' => 'title',
    'field_os2web_cp_service_content_1' => 'field_os2web_cp_service_content_1',
    'title_1' => 'title_1',
  );
  /* Filter criterion: Content: OprettelsesDato (field_os2web_cp_service_created) */
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value']['id'] = 'field_os2web_cp_service_created_value';
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value']['table'] = 'field_data_field_os2web_cp_service_created';
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value']['field'] = 'field_os2web_cp_service_created_value';
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value']['group'] = 1;
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value']['expose']['operator_id'] = 'field_os2web_cp_service_created_value_op';
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value']['expose']['label'] = 'Fra';
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value']['expose']['description'] = 'evt. Dato';
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value']['expose']['operator'] = 'field_os2web_cp_service_created_value_op';
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value']['expose']['identifier'] = 'from_date';
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value']['year_range'] = '-10:+0';
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
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value_1']['expose']['identifier'] = 'to_date';
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value_1']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_os2web_cp_service_created_value_1']['year_range'] = '-10:+0';
  /* Filter criterion: Content: SagsID (field_os2web_cp_service_case_id) */
  $handler->display->display_options['filters']['field_os2web_cp_service_case_id_value']['id'] = 'field_os2web_cp_service_case_id_value';
  $handler->display->display_options['filters']['field_os2web_cp_service_case_id_value']['table'] = 'field_data_field_os2web_cp_service_case_id';
  $handler->display->display_options['filters']['field_os2web_cp_service_case_id_value']['field'] = 'field_os2web_cp_service_case_id_value';
  $handler->display->display_options['filters']['field_os2web_cp_service_case_id_value']['group'] = 1;
  $handler->display->display_options['filters']['field_os2web_cp_service_case_id_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2web_cp_service_case_id_value']['expose']['operator_id'] = 'field_os2web_cp_service_case_id_value_op';
  $handler->display->display_options['filters']['field_os2web_cp_service_case_id_value']['expose']['label'] = 'Sagsnummer';
  $handler->display->display_options['filters']['field_os2web_cp_service_case_id_value']['expose']['description'] = 'fx. 12/99999999';
  $handler->display->display_options['filters']['field_os2web_cp_service_case_id_value']['expose']['operator'] = 'field_os2web_cp_service_case_id_value_op';
  $handler->display->display_options['filters']['field_os2web_cp_service_case_id_value']['expose']['identifier'] = 'case_id';
  $handler->display->display_options['filters']['field_os2web_cp_service_case_id_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: DokumentID (field_os2web_cp_service_doc_id) */
  $handler->display->display_options['filters']['field_os2web_cp_service_doc_id_value']['id'] = 'field_os2web_cp_service_doc_id_value';
  $handler->display->display_options['filters']['field_os2web_cp_service_doc_id_value']['table'] = 'field_data_field_os2web_cp_service_doc_id';
  $handler->display->display_options['filters']['field_os2web_cp_service_doc_id_value']['field'] = 'field_os2web_cp_service_doc_id_value';
  $handler->display->display_options['filters']['field_os2web_cp_service_doc_id_value']['relationship'] = 'field_os2web_cp_service_doc_ref_target_id';
  $handler->display->display_options['filters']['field_os2web_cp_service_doc_id_value']['group'] = 1;
  $handler->display->display_options['filters']['field_os2web_cp_service_doc_id_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2web_cp_service_doc_id_value']['expose']['operator_id'] = 'field_os2web_cp_service_doc_id_value_op';
  $handler->display->display_options['filters']['field_os2web_cp_service_doc_id_value']['expose']['label'] = 'Dokumentnummer';
  $handler->display->display_options['filters']['field_os2web_cp_service_doc_id_value']['expose']['description'] = 'fx. 9999999/12';
  $handler->display->display_options['filters']['field_os2web_cp_service_doc_id_value']['expose']['operator'] = 'field_os2web_cp_service_doc_id_value_op';
  $handler->display->display_options['filters']['field_os2web_cp_service_doc_id_value']['expose']['identifier'] = 'doc_id';
  $handler->display->display_options['filters']['field_os2web_cp_service_doc_id_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Sagstype (field_os2web_cp_service_casetype) */
  $handler->display->display_options['filters']['field_os2web_cp_service_casetype_value']['id'] = 'field_os2web_cp_service_casetype_value';
  $handler->display->display_options['filters']['field_os2web_cp_service_casetype_value']['table'] = 'field_data_field_os2web_cp_service_casetype';
  $handler->display->display_options['filters']['field_os2web_cp_service_casetype_value']['field'] = 'field_os2web_cp_service_casetype_value';
  $handler->display->display_options['filters']['field_os2web_cp_service_casetype_value']['group'] = 1;
  $handler->display->display_options['filters']['field_os2web_cp_service_casetype_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2web_cp_service_casetype_value']['expose']['operator_id'] = 'field_os2web_cp_service_casetype_value_op';
  $handler->display->display_options['filters']['field_os2web_cp_service_casetype_value']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_os2web_cp_service_casetype_value']['expose']['operator'] = 'field_os2web_cp_service_casetype_value_op';
  $handler->display->display_options['filters']['field_os2web_cp_service_casetype_value']['expose']['identifier'] = 'casetype';
  $handler->display->display_options['filters']['field_os2web_cp_service_casetype_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Sagsansvar. enhed (field_os2web_cp_service_org_unit) */
  $handler->display->display_options['filters']['field_os2web_cp_service_org_unit_value']['id'] = 'field_os2web_cp_service_org_unit_value';
  $handler->display->display_options['filters']['field_os2web_cp_service_org_unit_value']['table'] = 'field_data_field_os2web_cp_service_org_unit';
  $handler->display->display_options['filters']['field_os2web_cp_service_org_unit_value']['field'] = 'field_os2web_cp_service_org_unit_value';
  $handler->display->display_options['filters']['field_os2web_cp_service_org_unit_value']['group'] = 1;
  $handler->display->display_options['filters']['field_os2web_cp_service_org_unit_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2web_cp_service_org_unit_value']['expose']['operator_id'] = 'field_os2web_cp_service_org_unit_value_op';
  $handler->display->display_options['filters']['field_os2web_cp_service_org_unit_value']['expose']['label'] = 'Vælg afdeling';
  $handler->display->display_options['filters']['field_os2web_cp_service_org_unit_value']['expose']['operator'] = 'field_os2web_cp_service_org_unit_value_op';
  $handler->display->display_options['filters']['field_os2web_cp_service_org_unit_value']['expose']['identifier'] = 'field_os2web_cp_service_org_unit_value';
  $handler->display->display_options['filters']['field_os2web_cp_service_org_unit_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_os2web_cp_service_org_unit_value']['reduce_duplicates'] = TRUE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Der kunne ikke findes nogle sager ud fra dine søgekriterier. ';
  $handler->display->display_options['empty']['area_text_custom']['tokenize'] = TRUE;
  $handler->display->display_options['path'] = 'aaben-indsigt';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['os2web_cp_service_cp_case_search'] = $view;

  $view = new view();
  $view->name = 'os2web_cp_service_cp_case_view';
  $view->description = 'Views to display the content of a CP Case';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CP Case View';
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
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_os2web_cp_service_doc_id' => 'field_os2web_cp_service_doc_id',
    'title' => 'title',
    'field_os2web_cp_service_doc_id_1' => 'field_os2web_cp_service_doc_id_1',
    'field_os2web_cp_service_created' => 'field_os2web_cp_service_created',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2web_cp_service_doc_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2web_cp_service_doc_id_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2web_cp_service_created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
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
  $handler->display->display_options['fields']['field_os2web_cp_service_content']['label'] = 'Beskrivelse af sagen';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'os2web_cp_service_cp_case' => 'os2web_cp_service_cp_case',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Sagsindhold (field_os2web_cp_service_content) */
  $handler->display->display_options['filters']['field_os2web_cp_service_content_value']['id'] = 'field_os2web_cp_service_content_value';
  $handler->display->display_options['filters']['field_os2web_cp_service_content_value']['table'] = 'field_data_field_os2web_cp_service_content';
  $handler->display->display_options['filters']['field_os2web_cp_service_content_value']['field'] = 'field_os2web_cp_service_content_value';
  $handler->display->display_options['filters']['field_os2web_cp_service_content_value']['operator'] = 'not empty';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Documents */
  $handler = $view->new_display('attachment', 'Documents', 'attachment_1');
  $handler->display->display_options['display_description'] = 'Attachent to display all documents for a case';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_os2web_cp_service_doc_ref_target_id']['id'] = 'field_os2web_cp_service_doc_ref_target_id';
  $handler->display->display_options['relationships']['field_os2web_cp_service_doc_ref_target_id']['table'] = 'field_data_field_os2web_cp_service_doc_ref';
  $handler->display->display_options['relationships']['field_os2web_cp_service_doc_ref_target_id']['field'] = 'field_os2web_cp_service_doc_ref_target_id';
  $handler->display->display_options['relationships']['field_os2web_cp_service_doc_ref_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: DokumentID */
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_id']['id'] = 'field_os2web_cp_service_doc_id';
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_id']['table'] = 'field_data_field_os2web_cp_service_doc_id';
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_id']['field'] = 'field_os2web_cp_service_doc_id';
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_id']['relationship'] = 'field_os2web_cp_service_doc_ref_target_id';
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_id']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_os2web_cp_service_doc_ref_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'dok/[field_os2web_cp_service_doc_id]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: DokumentID */
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_id_1']['id'] = 'field_os2web_cp_service_doc_id_1';
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_id_1']['table'] = 'field_data_field_os2web_cp_service_doc_id';
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_id_1']['field'] = 'field_os2web_cp_service_doc_id';
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_id_1']['relationship'] = 'field_os2web_cp_service_doc_ref_target_id';
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_id_1']['label'] = 'Dokumentnummer';
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_id_1']['element_label_colon'] = FALSE;
  /* Field: Content: OprettelsesDato */
  $handler->display->display_options['fields']['field_os2web_cp_service_created']['id'] = 'field_os2web_cp_service_created';
  $handler->display->display_options['fields']['field_os2web_cp_service_created']['table'] = 'field_data_field_os2web_cp_service_created';
  $handler->display->display_options['fields']['field_os2web_cp_service_created']['field'] = 'field_os2web_cp_service_created';
  $handler->display->display_options['fields']['field_os2web_cp_service_created']['relationship'] = 'field_os2web_cp_service_doc_ref_target_id';
  $handler->display->display_options['fields']['field_os2web_cp_service_created']['label'] = 'Dato';
  $handler->display->display_options['fields']['field_os2web_cp_service_created']['element_wrapper_class'] = 'documentdate';
  $handler->display->display_options['fields']['field_os2web_cp_service_created']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'os2web_cp_service_cp_case' => 'os2web_cp_service_cp_case',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
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
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h1 class="title">%1</h1>
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
  $handler->display->display_options['fields']['title']['label'] = 'Titel';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] <br><span>Se alle sager på denne addresse</span>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'aaben-indsigt?search=[title]';
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
  /* Field: Title Clean */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Title Clean';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'os2web_cp_service_cp_case' => 'os2web_cp_service_cp_case',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
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
  $handler->display->display_options['path'] = 'cp-case/%';
  $export['os2web_cp_service_cp_case_view'] = $view;

  $view = new view();
  $view->name = 'os2web_cp_service_cp_document_view';
  $view->description = 'Views to display the content of a CP Document';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CP Document View';
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
  $handler = $view->new_display('attachment', 'Description', 'os2web_cp_service_cp_document_view_description_attachment');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Sagsindhold */
  $handler->display->display_options['fields']['field_os2web_cp_service_content']['id'] = 'field_os2web_cp_service_content';
  $handler->display->display_options['fields']['field_os2web_cp_service_content']['table'] = 'field_data_field_os2web_cp_service_content';
  $handler->display->display_options['fields']['field_os2web_cp_service_content']['field'] = 'field_os2web_cp_service_content';
  $handler->display->display_options['fields']['field_os2web_cp_service_content']['label'] = 'Beskrivelse af dokumentet';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'os2web_cp_service_cp_document' => 'os2web_cp_service_cp_document',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
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
    'os2web_cp_service_cp_document' => 'os2web_cp_service_cp_document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Sagsindhold (field_os2web_cp_service_content) */
  $handler->display->display_options['filters']['field_os2web_cp_service_content_value']['id'] = 'field_os2web_cp_service_content_value';
  $handler->display->display_options['filters']['field_os2web_cp_service_content_value']['table'] = 'field_data_field_os2web_cp_service_content';
  $handler->display->display_options['filters']['field_os2web_cp_service_content_value']['field'] = 'field_os2web_cp_service_content_value';
  $handler->display->display_options['filters']['field_os2web_cp_service_content_value']['operator'] = 'longerthan';
  $handler->display->display_options['filters']['field_os2web_cp_service_content_value']['value'] = '1';
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
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h1 class="title">Dokument [field_os2web_cp_service_doc_id]</h1>
<h2>Fra sag Nr.: [field_os2web_cp_service_case_id]</h2>
<p>Klik på sags nr. for at se alle dokumenter på sagen</p>';
  $handler->display->display_options['header']['area_text_custom']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: DokumentID */
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_id']['id'] = 'field_os2web_cp_service_doc_id';
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_id']['table'] = 'field_data_field_os2web_cp_service_doc_id';
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_id']['field'] = 'field_os2web_cp_service_doc_id';
  $handler->display->display_options['fields']['field_os2web_cp_service_doc_id']['label'] = 'Dokumentnummer';
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
  $handler->display->display_options['fields']['title']['label'] = 'Dokumentnavn';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] <span>Se alle sager på denne addresse</span>';
  $handler->display->display_options['fields']['title']['alter']['path'] = 'aaben-indsigt?search=[title]';
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
  $handler->display->display_options['fields']['field_os2web_cp_service_case_id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_cp_service_case_id']['alter']['path'] = 'sag/[field_os2web_cp_service_case_id]';
  $handler->display->display_options['fields']['field_os2web_cp_service_case_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'os2web_cp_service_cp_document' => 'os2web_cp_service_cp_document',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;
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
    'os2web_cp_service_cp_document' => 'os2web_cp_service_cp_document',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'cp-document/%';
  $export['os2web_cp_service_cp_document_view'] = $view;

  return $export;
}
