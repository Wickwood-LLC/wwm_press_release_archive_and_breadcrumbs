<?php
/**
 * @file
 * wwm_press_release_archives_and_breadcrumbs.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wwm_press_release_archives_and_breadcrumbs_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'press_releases';
  $view->description = 'A "blog archive" of Press Releases.';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'Press Releases';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Articles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'month';
  /* Contextual filter: Content: Published year */
  $handler->display->display_options['arguments']['published_at_year']['id'] = 'published_at_year';
  $handler->display->display_options['arguments']['published_at_year']['table'] = 'publication_date';
  $handler->display->display_options['arguments']['published_at_year']['field'] = 'published_at_year';
  $handler->display->display_options['arguments']['published_at_year']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['published_at_year']['title'] = 'Press Releases from %1';
  $handler->display->display_options['arguments']['published_at_year']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['published_at_year']['breadcrumb'] = 'Press Releases';
  $handler->display->display_options['arguments']['published_at_year']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['published_at_year']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['published_at_year']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['published_at_year']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Published month */
  $handler->display->display_options['arguments']['published_at_month']['id'] = 'published_at_month';
  $handler->display->display_options['arguments']['published_at_month']['table'] = 'publication_date';
  $handler->display->display_options['arguments']['published_at_month']['field'] = 'published_at_month';
  $handler->display->display_options['arguments']['published_at_month']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['published_at_month']['title'] = 'Press Releases from %2 %1';
  $handler->display->display_options['arguments']['published_at_month']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['published_at_month']['breadcrumb'] = '%1';
  $handler->display->display_options['arguments']['published_at_month']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['published_at_month']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['published_at_month']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['published_at_month']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Published day */
  $handler->display->display_options['arguments']['published_at_day']['id'] = 'published_at_day';
  $handler->display->display_options['arguments']['published_at_day']['table'] = 'publication_date';
  $handler->display->display_options['arguments']['published_at_day']['field'] = 'published_at_day';
  $handler->display->display_options['arguments']['published_at_day']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['published_at_day']['title'] = 'Press Releases from %2 %3, %1';
  $handler->display->display_options['arguments']['published_at_day']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['published_at_day']['breadcrumb'] = '%2';
  $handler->display->display_options['arguments']['published_at_day']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['published_at_day']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['published_at_day']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['published_at_day']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'press_release' => 'press_release',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Below is a list of articles that we have written and believe you will find helpful and enjoy reading.

';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['path'] = 'press-releases';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Articles';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: RSS Feed */
  $handler = $view->new_display('feed', 'RSS Feed', 'feed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Blog';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'press-releases/%/%/%/rss.xml';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
  );
  $handler->display->display_options['sitename_title'] = 1;

  /* Display: Recent Press Releases Block */
  $handler = $view->new_display('block', 'Recent Press Releases Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent Press Releases';
  $handler->display->display_options['display_description'] = 'List the 5 most Recent Aricles';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Scheduler: Publish on */
  $handler->display->display_options['fields']['publish_on']['id'] = 'publish_on';
  $handler->display->display_options['fields']['publish_on']['table'] = 'scheduler';
  $handler->display->display_options['fields']['publish_on']['field'] = 'publish_on';
  $handler->display->display_options['fields']['publish_on']['label'] = '';
  $handler->display->display_options['fields']['publish_on']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['publish_on']['date_format'] = 'time ago';
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Press Release Archive Block */
  $handler = $view->new_display('block', 'Press Release Archive Block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Press Release Archive';
  $handler->display->display_options['display_description'] = 'Show Number of Articles By Grouped by Date';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['link_url'] = 'articles/%2/%3';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['pager_position'] = 'bottom';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_aggregator';
  $handler->display->display_options['style_options']['columns'] = array(
    'created_1' => 'created_1',
    'created_2' => 'created_2',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'created_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'created_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 0,
      'aggr' => array(
        'views_aggregator_first' => 'views_aggregator_first',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'has_aggr' => 1,
      'aggr' => array(
        'views_aggregator_group_and_compress' => 'views_aggregator_group_and_compress',
        'views_aggregator_tally' => 'views_aggregator_tally',
      ),
      'aggr_par' => '',
      'has_aggr_column' => 0,
      'aggr_column' => 'views_aggregator_sum',
      'aggr_par_column' => '',
    ),
  );
  $handler->display->display_options['style_options']['column_aggregation']['totals_per_page'] = '0';
  $handler->display->display_options['style_options']['column_aggregation']['totals_row_position'] = array(
    1 => 0,
    2 => '2',
  );
  $handler->display->display_options['style_options']['column_aggregation']['precision'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Post date (year) */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['ui_name'] = 'Post date (year)';
  $handler->display->display_options['fields']['created_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_1']['custom_date_format'] = 'Y';
  $handler->display->display_options['fields']['created_1']['second_date_format'] = 'long';
  /* Field: Post date (month) */
  $handler->display->display_options['fields']['created_2']['id'] = 'created_2';
  $handler->display->display_options['fields']['created_2']['table'] = 'node';
  $handler->display->display_options['fields']['created_2']['field'] = 'created';
  $handler->display->display_options['fields']['created_2']['ui_name'] = 'Post date (month)';
  $handler->display->display_options['fields']['created_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created_2']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created_2']['custom_date_format'] = 'm';
  $handler->display->display_options['fields']['created_2']['second_date_format'] = 'long';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = '<a href="http://dev.om.wickwoodmarketing.com/press-releases/[created_1]/[created_2]">[created]</a>';
  $handler->display->display_options['fields']['created']['alter']['path'] = 'articles/%3/%2';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'F Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'month';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $export['press_releases'] = $view;

  return $export;
}
