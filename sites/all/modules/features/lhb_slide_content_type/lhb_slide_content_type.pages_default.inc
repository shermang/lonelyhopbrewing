<?php
/**
 * @file
 * lhb_slide_content_type.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function lhb_slide_content_type_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'foundation_2col_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '970195f5-da1d-4416-8423-62e459c4371d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-496c8542-77b9-4da9-89e2-98fa06962f9a';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'views_slideshow_xtra_example-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '496c8542-77b9-4da9-89e2-98fa06962f9a';
    $display->content['new-496c8542-77b9-4da9-89e2-98fa06962f9a'] = $pane;
    $display->panels['top'][0] = 'new-496c8542-77b9-4da9-89e2-98fa06962f9a';
    $pane = new stdClass();
    $pane->pid = 'new-0fcf337d-e889-44e1-b485-abac59388e5a';
    $pane->panel = 'top';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0fcf337d-e889-44e1-b485-abac59388e5a';
    $display->content['new-0fcf337d-e889-44e1-b485-abac59388e5a'] = $pane;
    $display->panels['top'][1] = 'new-0fcf337d-e889-44e1-b485-abac59388e5a';
    $pane = new stdClass();
    $pane->pid = 'new-ca36b360-e471-4e30-bec2-0ca294aab2a9';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'views_slideshow_xtra_example-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'teaser',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ca36b360-e471-4e30-bec2-0ca294aab2a9';
    $display->content['new-ca36b360-e471-4e30-bec2-0ca294aab2a9'] = $pane;
    $display->panels['top'][2] = 'new-ca36b360-e471-4e30-bec2-0ca294aab2a9';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
