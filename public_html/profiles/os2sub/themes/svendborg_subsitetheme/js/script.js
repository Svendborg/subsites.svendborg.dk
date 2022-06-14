/* Svendborg theme script
*/
( function ($) {
   $(document).ready(function(){
     // A hash is set in the URL
     if (window.location.hash) {
       setTimeout(function () {
         var hash = window.location.hash,
           $target = $(hash);

         // The hash refers to a panel
         if ($target.length && $target.hasClass('panel', 'collapsible')) {

           // Let's open the target automatically
           $target.find('.collapse')
             .first()
             .collapse();
         }
       }, 500);
     }

     $('.header_fixed .navbar-nav > li > .dropdown-menu .dropdown > a')
       .removeAttr('data-target')
       .removeAttr('data-toggle');

    var button = 'filter-all';
    var button_class = "btn-primary";
    var button_normal = "btn-blacknblue";
    var $container = $("#nyheder-content-isotoper .view-content");
    $('.nav_main_menu').find("a[href='/search']").parent('li').addClass('search');
    $('.region-sidebar-first .menu li a').each(function(){
    $(this).removeAttr('data-target');
     $(this).removeAttr('data-toggle');
    });
    check_button(button);

     if (location.hash){
        $(location.hash).find('.short-aktivity').css('display', 'none');
        $(location.hash).find('.full-aktivity').css('display', 'inline-block');

        var offset = $(location.hash).offset().top-$('header').height()*2;
        if ($('#toolbar').length > 0)
             offset = offset - $('#toolbar').height();
         if ($('#top_menu').length > 0)
             offset = offset - $('#top_menu').height();

          $("body, html").animate({"scrollTop":offset},"slow");
     }
     setTimeout(function() {
       var $panels = $('fieldset.panel.collapsible');

       // Run through all panels
       $panels.each(function (index, element) {
         var $element = $(this),
           current_url = location.href.replace(window.location.hash, ''),
           link = current_url + '#' + $element.attr('id'),
           $target_link = $('<a />')
             .addClass('panel-direct-link')
             .attr('href', link)
             .html($('<span />').addClass('icon fa fa-link'));

         // Add the link inside the panels body
         $element.find('.panel-body').prepend($target_link);
       });
     }, 500);

    function check_button(button){
      $('.filter-link').removeClass(button_class);
      $('.filter-link').addClass(button_normal);
      $('#'+button).addClass(button_class);
      $('#'+button).removeClass(button_normal);
    }

    // filter buttons.
    $('.filter-link').click(function(event){
      $(this).addClass(button_class);
      button = $(this).attr('id');
      check_button(button);
      var filterValue = $( this ).attr('data-filter');
      jQuery.get("/aktulet_news/ajax/view/"+filterValue+'/'+20, function(data){
        $('#nyheder-content-isotoper').html(data);
        load_content();
      });
    });

    $container = $("#nyheder-content-isotoper .view-content");

    // Initial masonry
    if ($container.length) {
      load_content();
    }
    function load_content() {
      $container = $("#nyheder-content-isotoper .view-content");

      $container.imagesLoaded(function(){

        $container.masonry({
          columnWidth: '.switch-elements',
        });

        $container.infinitescroll({
          state : {
            currPage: 0
          },
          // selector for the paged navigation
          navSelector  : '.pagination',
          // selector for the NEXT link (to page 2)
          nextSelector : '.pagination li.next a',
          // selector for all items you'll retrieve
          itemSelector : '.switch-elements',
          loading: {
            //finishedMsg: 'Der er ikke flere.',
            //img: 'http://i.imgur.com/qkKy8.gif'
          },
          debug: false,
        },
        function(newElements) {
          var $newElems = $(newElements).hide();
          $newElems.imagesLoaded(function(){
            $newElems.fadeIn(); // fade in when ready
            $container.masonry( 'appended', $newElems);
            Drupal.attachBehaviors();
          });
            /*setTimeout(function() {
              $container.masonry( 'insert', $newElems);
            }, 500);*/
        }
        );
      });
    }


    // Navbar scroll
    $(window).bind('scroll', function() {
        var navHeight = $( window ).height();
        if ($(window).scrollTop() > 41 && $(window).width() > 768 ) {
          $('.header_svendborg header').addClass('navbar-fixed-top');
          //$('.header_fixed_inner').addClass('container');
          //$('.header_svendborg header').removeClass('container');
         // $('.main-container').css('padding-top','114px ');
          //$('#fixed-navbar').addClass('row');
          $('img#front-logo').attr('src', Drupal.settings.basePath + Drupal.settings.pathToTheme + '/images/svendborg_logo.png');
       }
        else {
          $('.header_svendborg header').removeClass('navbar-fixed-top');
          //$('.header_fixed_inner').removeClass('container');
          //$('.header_svendborg header').addClass('container');
          $('.main-container').css('padding-top','0');
          //$('#fixed-navbar').removeClass('row');
          $('img#front-logo').attr('src', Drupal.settings.basePath + Drupal.settings.pathToTheme + '/images/footer_logo.png');
        }
    });

    // borger.dk articles
      $("div.mArticle").hide();
      $(".microArticle a.gplus").click(function() {
        var article = $(this).parent().find('h2');
        var myid = article.attr('id');
        var style = $('div.' + myid).css('display');
        var path = $(this).css("background-image");
        if (style == 'none') {
          $("div." + myid).show("500");
          $(this).addClass('gminus');
          $(this).removeClass('gplus');
        }
        else {
          $("div." + myid).hide("500");
          $(this).addClass('gplus');
          $(this).removeClass('gminus');
        }
        return false;
      });
      $(".gplus_all").click(function() {
        if ($(".microArticle a").hasClass("gminus")) {
          $("div.mArticle").hide();
          $(".microArticle a.gminus").addClass('gplus');
          $(".microArticle a.gminus").removeClass('gminus');
        }
        else {
          $("div.mArticle").show();
          $(".microArticle a.gplus").addClass('gminus');
          $(".microArticle a.gplus").removeClass('gplus');
        }

        return false;
      });
      $(".gminus_all").click(function() {
        if ($(".microArticle a").hasClass("gminus")) {
          $("div.mArticle").hide();
          $(".microArticle a.gminus").addClass('gplus');
          $(".microArticle a.gminus").removeClass('gminus');
        }
        else {
          $("div.mArticle").show();
          $(".microArticle a.gplus").addClass('gminus');
          $(".microArticle a.gplus").removeClass('gplus');
        }

        return false;
      });
      // front nav header search_form button
      $(".front .region-navigation.container #search-block-form button").click(function(){
        $( ".main-container .front-search-box input" ).focus();

        return false;
      });

    $('#feedback-submit').addClass('btn-primary');

    var links = $('.region-content a');
    $(links).each(function() {
      if (!$(this).attr('href') && $(this).attr('id') && $(this).attr('id') !== 'main-content') {
        $(this).addClass('link_here');
      }
    });

  });

Drupal.behaviors.feedbackForm = {
  attach: function (context) {
    $('#block-feedback-form').addClass('hidden-xs');
    $('#block-feedback-form', context).once('feedback', function () {
      var $block = $(this);
      $block.find('span.feedback-link')
        .prepend('<span id="feedback-form-toggle">[ + ]</span> ')
        .css('cursor', 'pointer')
        .toggle(function () {
            Drupal.feedbackFormToggle($block, true);
          },
          function() {
            Drupal.feedbackFormToggle($block, false);
          }
        );
      $block.find('form').hide();
      $block.show();
    });
  }
};

/**
 * Re-collapse the feedback form after every successful form submission.
 */
Drupal.behaviors.feedbackFormSubmit = {
  attach: function (context) {
    var $context = $(context);
    if (!$context.is('#feedback-status-message')) {
      return;
    }
    // Collapse the form.
    $('#block-feedback-form .feedback-link').click();
    // Blend out and remove status message.
    window.setTimeout(function () {
      $context.fadeOut('slow', function () {
        $context.remove();
      });
    }, 3000);
  }
};

/**
 * Collapse or uncollapse the feedback form block.
 */
Drupal.feedbackFormToggle = function ($block, enable) {
  if (enable) {
    $block.animate({width:"329px"});
    $block.css('z-index','960');
    $block.find('form').css('display','block');
    $('#feedback-form-toggle', $block).html('[ + ]');
    var cittaslow = $('#block-cittaslow-block');
    if (cittaslow.width() > 51) {
      Drupal.cittaslowToggle(cittaslow, false);
    }
  }
  else {
    $block.animate({width:"29px"});
    $block.css('z-index','900');
    $('#feedback-form-toggle', $block).html('[ &minus; ]');
  }
};

Drupal.behaviors.cittaslow= {
  attach: function (context) {
    $('#block-cittaslow-block', context).once(function () {
      var $block = $(this);
      $block.find('span.cittaslow-link').toggle(function () {
          if ($block.width() < 300) {
            Drupal.cittaslowToggle($block, true);
          }
          else {
            Drupal.cittaslowToggle($block, false);
          }

          },
          function() {
            if ($block.width() < 300) {
              Drupal.cittaslowToggle($block, true);
            }
            else {
              Drupal.cittaslowToggle($block, false);
            }
          }
        );
      $block.show();
    });
  }
};

  Drupal.cittaslowToggle = function ($block, enable) {
  if (enable) {
    $block.animate({width:"351px"});

  }
  else {
    $block.animate({width:"51px"});
  }
};

Drupal.behaviors.bookPlace = {
  attach: function (context, settings) {
    $('.btn-book-place').unbind('click').click(function(e){
      e.preventDefault();
      var nid = $(e.target).data("node-id");
      if (nid) {
        $('.block-book-place[data-node-id="' + nid + '"]').toggle();
      }
    });
  }
};
Drupal.behaviors.calendarEvent = {
  attach: function (){

$('.short-aktivity').each(function() {
        $(this).children().children('.open-activity').click(function(event){
          var container= $(this).closest('.event-content');
             $('.short-aktivity').css('display', 'inline-block');
             $('.full-aktivity').css('display', 'none');
              container.children('.short-aktivity').css('display', 'none');
              container.children('.full-aktivity').css('display', 'inline-block');
          return false;
        });
     });

  }
};
})( jQuery );





/**
 * Re-collapse the feedback form after every successful form submission.
 */
Drupal.behaviors.feedbackFormSubmit = {
  attach: function (context) {}
};


/*
* rwdImageMaps jQuery plugin v1.6
*
* Allows image maps to be used in a responsive design by recalculating the area coordinates to match the actual image size on load and window.resize
*
* Copyright (c) 2016 Matt Stow
* https://github.com/stowball/jQuery-rwdImageMaps
* http://mattstow.com
* Licensed under the MIT license
*/
;(function(a){a.fn.rwdImageMaps=function(){var c=this;var b=function(){c.each(function(){if(typeof(a(this).attr("usemap"))=="undefined"){return}var e=this,d=a(e);a("<img />").on('load',function(){var g="width",m="height",n=d.attr(g),j=d.attr(m);if(!n||!j){var o=new Image();o.src=d.attr("src");if(!n){n=o.width}if(!j){j=o.height}}var f=d.width()/100,k=d.height()/100,i=d.attr("usemap").replace("#",""),l="coords";a('map[name="'+i+'"]').find("area").each(function(){var r=a(this);if(!r.data(l)){r.data(l,r.attr(l))}var q=r.data(l).split(","),p=new Array(q.length);for(var h=0;h<p.length;++h){if(h%2===0){p[h]=parseInt(((q[h]/n)*100)*f)}else{p[h]=parseInt(((q[h]/j)*100)*k)}}r.attr(l,p.toString())})}).attr("src",d.attr("src"))})};a(window).resize(b).trigger("resize");return this}})(jQuery);
