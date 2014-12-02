<?php
/**
 * @file
 * lhb_slide_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lhb_slide_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function lhb_slide_content_type_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function lhb_slide_content_type_node_info() {
  $items = array(
    'vsx_slide' => array(
      'name' => t('Slide'),
      'base' => 'node_content',
      'description' => t('Node type used for making Views Slideshow Slides.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
