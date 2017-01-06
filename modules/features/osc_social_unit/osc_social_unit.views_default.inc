<?php
/**
 * @file
 * osc_social_unit.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function osc_social_unit_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'social_units';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Social Units';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Other University Social Media Channels';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_social_unit_link']['id'] = 'field_social_unit_link';
  $handler->display->display_options['fields']['field_social_unit_link']['table'] = 'field_data_field_social_unit_link';
  $handler->display->display_options['fields']['field_social_unit_link']['field'] = 'field_social_unit_link';
  $handler->display->display_options['fields']['field_social_unit_link']['label'] = '';
  $handler->display->display_options['fields']['field_social_unit_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_social_unit_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_social_unit_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_social_unit_link']['type'] = 'link_absolute';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_social_unit_link]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Icon */
  $handler->display->display_options['fields']['field_social_unit_icon']['id'] = 'field_social_unit_icon';
  $handler->display->display_options['fields']['field_social_unit_icon']['table'] = 'field_data_field_social_unit_icon';
  $handler->display->display_options['fields']['field_social_unit_icon']['field'] = 'field_social_unit_icon';
  $handler->display->display_options['fields']['field_social_unit_icon']['label'] = '';
  $handler->display->display_options['fields']['field_social_unit_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_social_unit_icon']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_social_unit_icon']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_social_unit_icon']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_social_unit_icon']['multi_type'] = 'ul';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'social_unit' => 'social_unit',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['social_units'] = $view;

  return $export;
}
