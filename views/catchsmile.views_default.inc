<?php

/**
 * Implements hook_views_default_views.
 *
 * @return array
 */
function catchsmile_views_default_views() {
  $view = new view;
  $view->name = 'catch_a_smile_photo_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Catch a Smile Photo Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Catch a Smile Photo Gallery';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no photos to display.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Field: Content: Upload a photo */
  $handler->display->display_options['fields']['catchsmile_image']['id'] = 'catchsmile_image';
  $handler->display->display_options['fields']['catchsmile_image']['table'] = 'field_data_catchsmile_image';
  $handler->display->display_options['fields']['catchsmile_image']['field'] = 'catchsmile_image';
  $handler->display->display_options['fields']['catchsmile_image']['label'] = '';
  $handler->display->display_options['fields']['catchsmile_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['catchsmile_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['catchsmile_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['catchsmile_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['catchsmile_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['catchsmile_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['catchsmile_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['catchsmile_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['catchsmile_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['catchsmile_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['catchsmile_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['catchsmile_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['catchsmile_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['catchsmile_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['catchsmile_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['catchsmile_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['catchsmile_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['catchsmile_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['catchsmile_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['catchsmile_image']['type'] = 'lightbox2__lightbox__medium__original';
  $handler->display->display_options['fields']['catchsmile_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['catchsmile_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
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
    'catchsmile' => 'catchsmile',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['field_language'] = 'und';
  $handler->display->display_options['path'] = 'node';
  $translatables['catch_a_smile_photo_gallery'] = array(
    t('Master'),
    t('Catch a Smile Photo Gallery'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('There are no photos to display.'),
    t('Page'),
  );

  // Add view to list of views to provide.
  $views[$view->name] = $view;

  // At the end, return array of default views.
  return $views;
}
