<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Separador'),
  'description' => t('Crea un separador'),
  'category' => t('BA Distro'),
  'render callback' => 'misdistro_bloques_separador_render',
  'admin info' => 'misdistro_bloques_separador_admin_info',
  'defaults' => array()
);


/**
* 'admin info' callback for panel pane.
*/
function misdistro_bloques_separador_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = $conf['override_title'] ? $conf['override_title_text'] : t('Separador');
    $block->content = t('Separador');
    return $block;
  }
}
function misdistro_bloques_separador_render($subtype, $conf, $panel_args, $context = NULL){
  $block = new stdClass();
  $block->title = '';
  $block->content = theme('misdistro_bloques_separador');
  return $block;
}