<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * Omega Subtheme theme.
 */
/* function aap_theme_menu_link($variables) {
 // dsm($variables);
  //dsm($element);
  $element = &$variables['element'];

  /* $pattern = '/\S+\.(png|gif|jpg)\b/i';
  if (preg_match($pattern, $element['#title'], $matches) > 0) {
    $element['#title'] = preg_replace($pattern,
      '<img alt = "' . $element['#localized_options']['attributes']['title'] . '" src = "' . url($matches[0]) . '" />',
      $element['#title']);
    $element['#localized_options']['html'] = TRUE;
  }

  return theme_menu_link($variables); 
} */