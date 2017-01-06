<?php
/**
 * @file
 * osc_social_unit.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function osc_social_unit_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function osc_social_unit_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function osc_social_unit_node_info() {
  $items = array(
    'social_unit' => array(
      'name' => t('Social Unit'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
