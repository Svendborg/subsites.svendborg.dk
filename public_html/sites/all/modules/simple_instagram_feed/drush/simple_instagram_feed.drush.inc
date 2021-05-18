<?php

/**
 * @file
 * Drush integration: simple_instagram_feed.
 *
 * Simple Instagram Feed is a module that
 * provides blocks to display instagram
 * feeds.
 *
 * author: Andrew Wasson <https://drupal.org/user/127091>
 */

/**
 * The jquery.instagramFeed plugin URI.
 */
define('INSTAGRAMFEED_DOWNLOAD_URI', 'https://github.com/jsanahuja/jquery.instagramFeed/archive/master.zip');

/**
 * Implements hook_drush_command().
 */
function simple_instagram_feed_drush_command() {
  $items = array();

  $items['simple_instagram_feed-plugin'] = array(
    'callback' => 'drush_simple_instagram_feed_plugin',
    'description' => dt('Download and install the simple_instagram_feed plugin.'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
    'arguments' => array(
      'path' => dt('Optional. A path where to install the simple_instagram_feed plugin. If omitted Drush will use the default location.'),
    ),
    'aliases' => array('instagramfeedplugin'),
  );

  return $items;
}

/**
 * Downloads the simple_instagram_feed plugin and unzips it at its destination.
 */
function drush_simple_instagram_feed_plugin() {
  $args = func_get_args();
  if (!empty($args[0])) {
    $path = $args[0];
  }
  else {
    $path = 'sites/all/libraries';
  }

  // Create the path if it does not exist.
  if (!is_dir($path)) {
    drush_op('mkdir', $path);
    drush_log(dt('Directory @path was created', array('@path' => $path)), 'notice');
  }

  // Set the directory to the download location.
  $drushdir = getcwd();
  chdir($path);

  // Download the zip archive.
  if ($filepath = drush_download_file(INSTAGRAMFEED_DOWNLOAD_URI)) {
    $filename = basename($filepath);
    $dirname = "jquery.instagramFeed-" . basename($filepath, '.zip');

    // Remove any existing simple_instagram_feed plugin directory.
    if (is_dir($dirname) || is_dir('jqueryinstagramfeed')) {
      drush_delete_dir($dirname, TRUE);
      drush_delete_dir('jqueryinstagramfeed', TRUE);
      drush_log(dt('A existing Instagram Feed plugin was deleted from @path', array('@path' => $path)), 'notice');
    }

    // Decompress the zip archive into $dirname.
    drush_tarball_extract($filename);

    // Change the directory name to "jqueryinstagramfeed" if needed.
    if ($dirname != 'jqueryinstagramfeed') {
      drush_move_dir($dirname, 'jqueryinstagramfeed', TRUE);
      $dirname = 'jqueryinstagramfeed';
    }
  }

  if (is_dir($dirname)) {
    drush_log(dt('jqueryinstagramfeed plugin has been installed in @path', array('@path' => $path)), 'success');
  }
  else {
    drush_log(dt('Drush was unable to install the jqueryinstagramfeed plugin to @path', array('@path' => $path)), 'error');
  }

  // Set working directory back to the previous working directory.
  chdir($drushdir);
}

/**
 * Implements hook_drush_help().
 */
function simple_instagram_feed_drush_help($section) {
  switch ($section) {
    case 'drush:simple_instagram_feed-plugin':
      return dt('Download and install the jqueryinstagramfeed plugin from github.com/jsanahuja/jquery.instagramFeed, default location is sites/all/libraries.');
  }
}
