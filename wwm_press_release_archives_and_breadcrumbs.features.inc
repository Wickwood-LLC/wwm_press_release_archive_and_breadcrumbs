<?php
/**
 * @file
 * wwm_press_release_archives_and_breadcrumbs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wwm_press_release_archives_and_breadcrumbs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function wwm_press_release_archives_and_breadcrumbs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_custom_breadcrumb_features_default_settings().
 */
function wwm_press_release_archives_and_breadcrumbs_custom_breadcrumb_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: press_releases.
  $custom_breadcrumbs['press_releases'] = array(
    'titles' => 'Press Releases
[node:published:custom:Y]
[node:published:custom:F]
[node:published:custom:d]',
    'paths' => 'press-releases
press-releases/[node:published:custom:Y]
press-releases/[node:published:custom:Y]/[node:published:custom:m]
press-releases/[node:published:custom:Y]/[node:published:custom:m]/[node:published:custom:d]',
    'visibility_php' => '',
    'node_type' => 'press_release',
    'language' => '',
    'name' => 'Press Releases',
    'machine_name' => 'press_releases',
  );

  return $custom_breadcrumbs;
}

/**
 * Implements hook_node_info().
 */
function wwm_press_release_archives_and_breadcrumbs_node_info() {
  $items = array(
    'press_release' => array(
      'name' => t('Press Releases'),
      'base' => 'node_content',
      'description' => t('<em>Press Releases</em> are special pages that are published to the Newsroom.  They are intended to be used to make site content readily available for the members of News media.'),
      'has_title' => '1',
      'title_label' => t('Headline'),
      'help' => t('Ideally Under 80 Characters '),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
