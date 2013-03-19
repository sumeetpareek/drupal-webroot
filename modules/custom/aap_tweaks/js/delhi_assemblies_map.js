(function ($) {
	
Drupal.behaviors.aap_getData = function (id) {
	url = window.location.protocol + "//" + window.location.host + Drupal.settings.basePath + 'assembly-info.php';
	$.ajax( {
		type : "POST",
		url : url,
		data : {
			id : id
		},
		dataType : "json",
		success : function(data) {
			$("#dialog").html(data);
			$("#dialog").dialog( {
				width : 800,
				height : 250,
				modal : true
			});
		}
	});
	};
	
})(jQuery);
