<?php
/**
 * @file
 * lhb_slide_content_type.features.uuid_fpp.inc
 */

/**
 * Implements hook_uuid_features_default_fpps().
 */
function lhb_slide_content_type_uuid_features_default_fpps() {
  $fpps = array();

  $fpps[] = array(
    'timestamp' => 1417975031,
    'title' => 'CURRENT BEER',
    'log' => '',
    'bundle' => 'text',
    'link' => 0,
    'path' => '',
    'reusable' => 0,
    'admin_title' => '',
    'admin_description' => '',
    'category' => 'Reusable Content',
    'view_access' => NULL,
    'edit_access' => NULL,
    'created' => 1417975008,
    'uuid' => 'e096450a-c867-4df4-9576-053cbbd980bc',
    'language' => '',
    'field_basic_text_text' => array(),
    'rdf_mapping' => array(),
  );
  return $fpps;
}
