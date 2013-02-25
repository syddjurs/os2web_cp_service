/* os2web_cp_service.js */
jQuery(document).ready(function($) {
	$( "#edit-from-date-value-datepicker-popup-0" ).datepicker({
		showOn: "both",
		buttonImage: "' . $calIcon . '",
		buttonImageOnly: true,
		dateFormat: "dd-mm-yy"
	});
	$( "#edit-to-date-value-datepicker-popup-0" ).datepicker({
				showOn: "both",
				buttonImage: "' . $calIcon . '",
				buttonImageOnly: true,
				dateFormat: "dd-mm-yy"
	});
	$( "a.qtip-this[title]" ).qtip({
		style: {
			padding: 1,
			background: "#FFF",
			color: "black",
			textAlign: "center",
			border: {
				width: 1,
				radius: 2,
				color: "#DDD"
			},
			tip: "leftMiddle"
		},
		position: {
			corner: {
				target: "rightMiddle",
				tooltip: "leftMiddle"
			},
			adjust: {
				x : 10
			}
		}
	});
});
