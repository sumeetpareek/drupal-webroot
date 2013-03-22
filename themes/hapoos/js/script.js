/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - http://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {

$(document).ready(function(){
	// Settings for the homepage banner slider
	var aap = {
		bannerSlider : function(options_){
			// Set starting slide to 1
			var startSlide = 1;
			
			// Initialize Slides
			$(options_.selector).slides({
				preload: true,
				generatePagination: options_.pagination,
				play: 5000,
				pause: 2500,
				hoverPause: true,
				// Get the starting slide
				start: startSlide
			});
		}
	};

	// Initiate the homepage banner slider
	aap.bannerSlider({selector : '#homepage-slides', pagination : false});	
});



})(jQuery, Drupal, this, this.document);
