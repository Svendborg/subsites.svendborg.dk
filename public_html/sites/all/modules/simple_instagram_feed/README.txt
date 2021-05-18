INTRODUCTION
------------
Simple Instagram Feed is an integration module for the jquery.instagramFeed
library that can be found at https://github.com/jsanahuja/jquery.instagramFeed.

BENEFITS
--------
Unlike many Instagram integrations, this module does not require a complicated
token and authorization sequence to use. Simply add the jquery.instagramFeed
library, install this module and place the block, assign the Instagram account
that you would like to pull the feed from and save. If you want to change the
number of images or any other settings, use the block settings.


REQUIREMENTS
------------
This module requires the jquery.instagramFeed library that can be found at
https://github.com/jsanahuja/jquery.instagramFeed.

INSTALLATION
------------

* Without Composer *

Install the Simple Instagram Feed Block Module:
  Using DRUSH: drush en simple_instagram_feed
  -or-
  Download it from https://www.drupal.org/project/simple_instagram_feed and
  install it to your website.

Install the jquery.instagramFeed Library:
  Using DRUSH: drush simple_instagram_feed-plugin
  -or-
  Download the repository for the jquery.instagramFeed library that can be found
  at https://github.com/jsanahuja/jquery.instagramFeed .

  Place the file jquery.instagramFeed.min.js in a directory called:
  jqueryinstagramfeed

  The path to the jquery.instagramFeed library should look like:
  /sites/all/libraries/jqueryinstagramfeed/jquery.instagramFeed.min.js


* With Composer *

Install with Composer: $ composer require 'drupal/simple_instagram_feed:^1.2'

To install a library with composer in Drupal 7, you will need to add a
dependency on oomphinc/composer-installers-extender to add mapping for
installer paths and then add require jsanahuja/jqueryinstagramfeed:dev-master'.
To do so add the code below to into your project's composer.json, under
"repositories", "extra" and "require":

"repositories": [
  {
    "type": "package",
    "package": {
      "name": "jsanahuja/jqueryinstagramfeed",
      "version": "dev-master",
      "type": "drupal-library",
      "dist": {
        "url": "https://github.com/jsanahuja/jquery.instagramFeed/archive/master.zip",
        "type": "zip"
      }

    }
  }
],
"extra": {
  "installer-types": ["drupal-library"],
  "installer-paths": {
    "sites/all/libraries/{$name}/": ["type:drupal-library"]
  }
},
"require": {
  "oomphinc/composer-installers-extender": "^1.1",
  "jsanahuja/jqueryinstagramfeed": "dev-master"
}

and run 'composer update'.



CONFIGURATION
-------------
Once you have installed Simple Instagram Feed Block and placed the
jquery.inatagramFeed library in your libraries directory, navigate to
Structure -> Block Layout (/admin/structure/block) to configure the Simple
Instagram Feed block on your site. By default the block will use the Instagram
account and display 12 images, 6 images per row. You can change the Instagram
user account, number of images and number of images per row settings as well as
displaying the Profile and Bio for the Instagram account.

KNOWN LIMITATIONS
-----------------
At the moment the Drupal 7 version of this module only contains one Instagram
Feed Block.
