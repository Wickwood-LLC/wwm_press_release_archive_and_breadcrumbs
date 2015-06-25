<?php
/**
 * @file
 * wwm_press_release_archives_and_breadcrumbs.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function wwm_press_release_archives_and_breadcrumbs_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-press_release-body'
  $field_instances['node-press_release-body'] = array(
    'bundle' => 'press_release',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>The lead sentence contains the most important information in 25 words or less.  Grab your reader\'s attention here by simply stating the news you have to announce.  Do not assume that your reader has read your headline or summary paragraph; the lead should stand on its own.  Be sure to include your important keywords in the headline, summary and lead paragraph. Add the Web address here for a quick link and to reinforce the site name and location.</p>

<p>A news release, like a news story, keeps sentences and paragraphs short, about three or four lines per paragraph. The first couple of paragraphs should answer the who, what, when, where, why and how questions. The news media may take information from a news release to craft a news or feature article or may use information in the release word-for-word.</p>

<p>The standard press release is 300 to 800 words and checked for spelling and grammar before submission.</p>

<p>The news release expounds on the information provided in the lead paragraph. It includes quotes from key people or subject matter experts. It contains more details about the news you have to tell, which can be about something unique or controversial or about a prominent person, place or thing.  It also includes links to the website in this form: http://www.DomainName.com</p>

<p>The tone is neutral and objective, not full of hype or text that is typically found in an advertisement. Avoid directly addressing your target audience. The use of “I,” “we” and “you” outside of a direct quotation is a flag that your copy is an advertisement rather than a news release.</p>

<p>Do not include an e-mail address in the body of the release. If you do, it will be protected from spam bots with a notice to that effect, which will overwrite your e-mail address.</p>

<p><em>The final paragraph of a traditional news release contains the least newsworthy material, but for an online release, it’s typical to restate and summarize the key points with a paragraph like the next one.</em><p>
<p><ins><q>For additional information on the news that is the subject of this release, contact Your Name or visit <a href="http://www.DomainName.com">http://www.DomainName.com</a></q></ins></p>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Story',
    'readmore_behaviour' => 'default',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 0,
          2 => 0,
          3 => 0,
          4 => 4,
          5 => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => -1,
            ),
            2 => array(
              'weight' => 0,
            ),
            3 => array(
              'weight' => 0,
            ),
            4 => array(
              'weight' => 0,
            ),
            5 => array(
              'weight' => 1,
            ),
          ),
        ),
      ),
      'display_summary' => 1,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'mediafront' => array(
        'custom' => '',
        'field_type' => 0,
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 15,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<p>The lead sentence contains the most important information in 25 words or less.  Grab your reader\'s attention here by simply stating the news you have to announce.  Do not assume that your reader has read your headline or summary paragraph; the lead should stand on its own.  Be sure to include your important keywords in the headline, summary and lead paragraph. Add the Web address here for a quick link and to reinforce the site name and location.</p>

<p>A news release, like a news story, keeps sentences and paragraphs short, about three or four lines per paragraph. The first couple of paragraphs should answer the who, what, when, where, why and how questions. The news media may take information from a news release to craft a news or feature article or may use information in the release word-for-word.</p>

<p>The standard press release is 300 to 800 words and checked for spelling and grammar before submission.</p>

<p>The news release expounds on the information provided in the lead paragraph. It includes quotes from key people or subject matter experts. It contains more details about the news you have to tell, which can be about something unique or controversial or about a prominent person, place or thing.  It also includes links to the website in this form: http://www.DomainName.com</p>

<p>The tone is neutral and objective, not full of hype or text that is typically found in an advertisement. Avoid directly addressing your target audience. The use of “I,” “we” and “you” outside of a direct quotation is a flag that your copy is an advertisement rather than a news release.</p>

<p>Do not include an e-mail address in the body of the release. If you do, it will be protected from spam bots with a notice to that effect, which will overwrite your e-mail address.</p>

<p><em>The final paragraph of a traditional news release contains the least newsworthy material, but for an online release, it’s typical to restate and summarize the key points with a paragraph like the next one.</em><p>
<p><ins><q>For additional information on the news that is the subject of this release, contact Your Name or visit <a href="http://www.DomainName.com">http://www.DomainName.com</a></q></ins></p>');
  t('Story');

  return $field_instances;
}
