<?php
/**
 * @file
 * Administration settings for library module.
 */

/**
 * Administration form for the ding library blocks.
 *
 * @param $form
 * @param $form_state
 * @return mixed
 */
function easyddb_hide_librarydropdown_settings_form($form, $form_state) {
  $form['easyddb_hide_librarydropdown_list'] = array(
    '#type' => 'checkbox',
    '#title' => t('Remove "Select library" option.'),
    '#default_value' => variable_get('easyddb_hide_librarydropdown_list', '0'),
  );
  return system_settings_form($form);
}
