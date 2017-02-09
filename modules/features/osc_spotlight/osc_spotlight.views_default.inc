<?php
/**
 * @file
 * osc_spotlight.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function osc_spotlight_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'spotlights';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Spotlights';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_spotlight_link']['id'] = 'field_spotlight_link';
  $handler->display->display_options['fields']['field_spotlight_link']['table'] = 'field_data_field_spotlight_link';
  $handler->display->display_options['fields']['field_spotlight_link']['field'] = 'field_spotlight_link';
  $handler->display->display_options['fields']['field_spotlight_link']['label'] = '';
  $handler->display->display_options['fields']['field_spotlight_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_spotlight_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_spotlight_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_spotlight_link']['type'] = 'link_absolute';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_spotlight_link]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_spotlight_link]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'spotlight',
    'image_link' => '',
  );
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_spotlight_description']['id'] = 'field_spotlight_description';
  $handler->display->display_options['fields']['field_spotlight_description']['table'] = 'field_data_field_spotlight_description';
  $handler->display->display_options['fields']['field_spotlight_description']['field'] = 'field_spotlight_description';
  $handler->display->display_options['fields']['field_spotlight_description']['label'] = '';
  $handler->display->display_options['fields']['field_spotlight_description']['element_label_colon'] = FALSE;
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
    'spotlight' => 'spotlight',
  );

  /* Display: Spotlight Block */
  $handler = $view->new_display('block', 'Spotlight Block', 'spotlight_block');
  $export['spotlights'] = $view;

  return $export;
}
