<?php 
/**
 * Page callback function for hook_menu.
 */
function shedow_page_content() {
  //module_invoke_all('shedow_my_module');
  $shedow = "i'm here";
  drupal_alter('shedow_my_module', $shedow);
  return t('Hello, World!');
}

/**
 * Custom page for 404 error.
 */
function not_found_content() {
  return t("404 not found. Page can not be found. Maybe it doesn't exist");
}

/**
 * Custom page for 403 error.
 */
function access_denied_content() {
  return t('403 access denied. You have not permission to to this');
}
