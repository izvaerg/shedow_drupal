<?php
/**
 *  Included file for my_forms module.
 *  Rendering page form.
 */

/**
 *  Returns the array of variables of the form.
 *
 */
function my_forms_form_page($form, $form_state) {
  $form = array();
  $form['nick_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Nick Name'),
    '#size' => 20,
    '#required' => TRUE,
  );

  $form['first_name'] = array(
    '#type' => 'textfield',
    '#title' => t('First Name'),
    '#size' => 20,
  );

  $form['last_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Last Name'),
    '#size' => 20,
  );

  $form['e_mail'] = array(
    '#type' => 'textfield',
    '#title' => t('E-mail'),
    '#size' => 20,
    '#required' => TRUE,
  );

  $form['phone_number'] = array(
    '#type' => 'textfield',
    '#title' => t('Phone Number'),
    '#size' => 20,
  );

  $form['gender'] = array(
    '#type' => 'radios',
    '#title' => t('Gender'),
    '#options' => array(t('Male'),t('Female')),
  );

  $form['country'] = array(
    '#type' => 'select',
    '#title' => t('Country'),
    '#options' => array(
      'Ukraine' => t('Ukraine'),
      'Russia' => t('Russia'),
      'USA' => t('USA')),
  );

  $form['message'] = array(
    '#type' => 'textarea',
    '#title' => t('Message'),
    '#required' => TRUE,
  );

  $form['rules_accept'] = array(
    '#type' => 'checkbox',
    '#title' => t('I accept the terms and conditions'),
    '#required' => TRUE,
  );

  $form['fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => t('Contact settings'),
    '#children' => t('Here is the list of rules and terms...'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Send'),
  );
  return $form;
}
