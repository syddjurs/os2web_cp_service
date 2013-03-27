/**
 * @file
 * os2web_cp_service.js
 */

jQuery(document).ready(function($) {
	// Convert all nonalphanumeric chars to /.
	$('#views-exposed-form-os2web-cp-service-cp-case-search-panel-pane-1').submit(function() {
		var value = $('#edit-case-id').val();
		$('#edit-case-id').val(value.replace(/\W/g, '/'));
		value = $('#edit-doc-id').val();
		$('#edit-doc-id').val(value.replace(/\W/g, '/'));
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
