<?php
/**
 * @file
 * lhb_slide_content_type.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function lhb_slide_content_type_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'title' => 'Survey',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'webform',
  'language' => 'en',
  'created' => 1418505003,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '23b45673-76ee-437e-810b-f6e3ce19954e',
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'path' => array(
    'pathauto' => 0,
  ),
  'webform' => array(
    'nid' => '23b45673-76ee-437e-810b-f6e3ce19954e',
    'next_serial' => 2,
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(
      1 => array(
        'nid' => '23b45673-76ee-437e-810b-f6e3ce19954e',
        'cid' => 1,
        'pid' => 0,
        'form_key' => 'beer',
        'name' => 'Select a Beer',
        'type' => 'select',
        'value' => '[current-page:query:beer]',
        'extra' => array(
          'items' => '8|Smoked Porter
',
          'options_source' => 'beer-nodes',
          'other_option' => 0,
          'multiple' => 0,
          'title_display' => 'inline',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'aslist' => 1,
          'optrand' => 0,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'analysis' => TRUE,
        ),
        'required' => 1,
        'weight' => 0,
        'page_num' => 1,
      ),
      6 => array(
        'nid' => '23b45673-76ee-437e-810b-f6e3ce19954e',
        'cid' => 6,
        'pid' => 0,
        'form_key' => 'rate_the_beer',
        'name' => 'How would you rate the beer?',
        'type' => 'fivestar',
        'value' => 5,
        'extra' => array(
          'count_zero_ratings' => 0,
          'default_value' => 0,
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'admin_display' => 'percentage',
          'field_prefix' => '',
          'field_suffix' => '',
          'disabled' => 0,
          'unique' => 0,
          'description' => '',
          'attributes' => array(),
        ),
        'required' => 1,
        'weight' => 1,
        'mandatory' => 0,
        'email' => 1,
        'page_num' => 1,
      ),
      3 => array(
        'nid' => '23b45673-76ee-437e-810b-f6e3ce19954e',
        'cid' => 3,
        'pid' => 0,
        'form_key' => 'match',
        'name' => 'Did it match the description?',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'aslist' => 0,
          'other_option' => 0,
          'items' => '1|Yes
2|Kinda
3|I think I got the wrong bottle
',
          'multiple' => 0,
          'custom_keys' => 0,
          'optrand' => 0,
          'other_text' => 'Other...',
          'description' => '',
          'options_source' => '',
          'analysis' => TRUE,
        ),
        'required' => 1,
        'weight' => 2,
        'page_num' => 1,
      ),
      4 => array(
        'nid' => '23b45673-76ee-437e-810b-f6e3ce19954e',
        'cid' => 4,
        'pid' => 0,
        'form_key' => 'drink_again',
        'name' => 'Would you drink this beer again?',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'aslist' => 0,
          'other_option' => 0,
          'items' => '1|Yes
2|No
3|If I had to
',
          'multiple' => 0,
          'custom_keys' => 0,
          'optrand' => 0,
          'other_text' => 'Other...',
          'description' => '',
          'options_source' => '',
          'analysis' => TRUE,
        ),
        'required' => 1,
        'weight' => 3,
        'page_num' => 1,
      ),
      5 => array(
        'nid' => '23b45673-76ee-437e-810b-f6e3ce19954e',
        'cid' => 5,
        'pid' => 0,
        'form_key' => 'like_us_to_brew',
        'name' => 'What would you like us to brew?',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'cols' => '',
          'rows' => '',
          'resizable' => 1,
          'disabled' => 0,
          'description' => '',
          'placeholder' => '',
          'attributes' => array(),
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 4,
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'comment_count' => 0,
  'pathauto_perform_alias' => FALSE,
  'date' => '2014-12-13 16:10:03 -0500',
  'user_uuid' => 'b3f5eba8-1289-465e-8736-f4560abe408c',
);
  return $nodes;
}
