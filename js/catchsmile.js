(function ($) {

    Drupal.behaviors.catchsmileRefresher = {

        attach: function( context, settings ) {

            catchsmile = {};

            catchsmile.calculateCount = function (callback) {
                $.ajax({
                    type:        "POST",
                    url:         Drupal.settings.catchsmile.serviceUri,
                    dataType:    'json',
                    contentType: 'application/json',
                    success:     callback
                });
            };

            catchsmile.refresh = function() {
                catchsmile.calculateCount(
                    function (result) {
                        var oldValue = $.cookie("catchsmile_count") != null ? $.cookie("catchsmile_count") : 0;

                        if(parseInt(oldValue, 10) < parseInt(result.count, 10)) {
                            $.cookie("catchsmile_count", result.count);
                            location.reload();
                        } else {
                            setTimeout(catchsmile.refresh, Drupal.settings.catchsmile.refreshInterval);
                        }
                    }
                );
            };

            $(document).ready(function() {
                setTimeout(catchsmile.refresh, Drupal.settings.catchsmile.refreshInterval);
            });
        }
    };

}(jQuery));