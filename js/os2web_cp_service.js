/* os2web_cp_service.js */
jQuery(document).ready(function($) {
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
