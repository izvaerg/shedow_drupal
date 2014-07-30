<?php 
/**
 *   Using hook_theme.
 */
drupal_add_library('system', 'drupal.collapse');

/**
 *   Function returns the content using hook_theme.
 */
function my_theming_page_content() {
  // First of all the content of our table:
  $header = array(
    array('data' => t('Header cell 1')),
    array('data' => t('Header cell 2')),
    array('data' => t('Header cell 3'))
  );
  $rows[] = array(
    array('data' => t('Row 1 - Cell 1')),
    array('data' => t('Row 1 - Cell 2')),
    array('data' => t('Row 1 - Cell 3')),
  );
  $rows[] = array(
    array('data' => t('Row 2 - Cell 1')),
    array('data' => t('Row 2 - Cell 2')),
    array('data' => t('Row 2 - Cell 3')),
  );
  // theme_table
  $table = theme('table', array(
    'header' => $header,
    'rows' => $rows,
    'caption' => t('Table created with theme_table'),
  ));

  // theme_item_list
  $list = theme('item_list', array(
    'items' => array(
      t('The Matrix'), t('X-Men'),
      t('Pirates of the Caribbean: The Curse of the Black Pearl'),
      t('The Hobbit: An Unexpected Journey'),
    ), 
    'title' => t('Films: '),
  ));

  // theme_fieldset
  $fieldset_elements = array(
    '#title' => t('List of films on the site: '),
    '#children' => $list,
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#attributes' => array('class' => array('collapsible','collapsed')),
  );
  $my_fieldset = theme('fieldset', array('element' => $fieldset_elements));

  // theme_image
  $image = theme('image_style', array(
    'path' => 'public://images/matrix_0.jpg',
    'style_name' => 'shedow_style',
    'alt' => t('here is a picture'), // alternative text if picture is not shown
  ));

  // using hook_theme with function and with template
  $them_func = theme('theme_function', array(
    'text' => t('Text with theme using theme function'))
  );
  
  $templ = theme('shedow_template', array(
    'text' => t('The Matrix - one of the best antiutopia films ever!'))
  );
  return $table . $list . $my_fieldset . $image . $them_func . $templ;
}
