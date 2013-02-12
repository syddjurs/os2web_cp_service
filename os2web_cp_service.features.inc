<?php
/**
 * @file
 * os2web_cp_service.features.inc
 */

/**
 * Implements hook_node_info().
 */
function os2web_cp_service_node_info() {
  $items = array(
    'os2web_cp_service_cp_case' => array(
      'name' => t('CP Case'),
      'base' => 'node_content',
      'description' => t('Holds a case, published via the case publishing service.'),
      'has_title' => '1',
      'title_label' => t('Officiel titel'),
      'help' => '',
    ),
    'os2web_cp_service_cp_document' => array(
      'name' => t('CP Document'),
      'base' => 'node_content',
      'description' => t('Holds a document from the case publishing service.'),
      'has_title' => '1',
      'title_label' => t('Officiel titel'),
      'help' => '',
    ),
  );
  return $items;
}
