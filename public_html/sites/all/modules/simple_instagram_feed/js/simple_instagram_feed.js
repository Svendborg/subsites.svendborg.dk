(function ($) {
  'use strict';
  Drupal.behaviors.simple_instagram_feed = {
    attach: function (context, settings) {
      var data = settings.simple_instagram_feed;
      var block_target;
      $(function () {
        var instagram_username = data.instagram_username;
        var display_profile = data.instagram_display_profile;
        var display_biography = data.instagram_display_biography;
        var image_size = data.instagram_image_size;
        var items = data.instagram_items;
        var styling = (data.instagram_styling === 'true' ? true : false);
        var captions = data.instagram_captions;
       // if captions are enabled, styling must be enabled by force.
        if (captions) {
           styling = true;
        }
        var lazy_load = data.instagram_lazy_load;
        var items_per_row_type = data.instagram_items_per_row_type;
        var items_per_row_default = data.instagram_items_per_row_default;
        var items_per_row_l_720 = data.instagram_items_per_row_l_720;
        var items_per_row_l_960 = data.instagram_items_per_row_l_960;
        var items_per_row_h_960 = data.instagram_items_per_row_h_960;

        var items_per_row;
        if (items_per_row_type == 0) {
          items_per_row = items_per_row_default;
        } else {
          var screenWidth = $(window).width();
          if (screenWidth < 720) {
            items_per_row = items_per_row_l_720;
          }
          else if (screenWidth >= 720 && screenWidth < 960) {
            items_per_row = items_per_row_l_960;
          } else
            items_per_row = items_per_row_h_960;
        }
        // Panel pane or block?
        if ($('.pane-simple-instagram-feed-simple-instagram-block')[0]) {
          block_target = '.pane-simple-instagram-feed-simple-instagram-block';
        }
        else {
          block_target = '.block-simple-instagram-feed';
        }
        var settings = {
          host: 'https://images' + ~~(Math.random() * 3333) + '-focus-opensocial.googleusercontent.com/gadgets/proxy?container=none&url=https://www.instagram.com/',
          username: instagram_username,
          max_tries: 8,
          container: block_target + ' .instagram-feed',
          display_profile: display_profile,
          display_biography: display_biography,
          display_captions: captions,
          display_gallery: true,
          callback: null,
          styling: styling,
          items: items,
          image_size: image_size,
          margin: 0.25,
          lazy_load: lazy_load,
        };

        if (styling) {
          settings.items_per_row = items_per_row;
        }

        $.instagramFeed(settings, context);
        $(window, context).resize(function () {
          screenWidth = $(window).width();
          var width;
          if (items_per_row_type == 1) {
            if (screenWidth < 720)
              width = (100 - 0.5 * 2 * items_per_row_l_720) / items_per_row_l_720;
            else if (screenWidth >= 720 && screenWidth < 960)
              width = (100 - 0.5 * 2 * items_per_row_l_960) / items_per_row_l_960;
            else
              width = (100 - 0.5 * 2 * items_per_row_h_960) / items_per_row_h_960;
            $(".instagram-feed img", context).width(width + "%");
          }
        });
      });
    }
  };
})(jQuery);
