(function ($) {

    Drupal.behaviors.catchsmileRefresher = {

        attach: function( context, settings ) {

            catchsmile = {};

            /**
             * Performs POST request to the CatchSmile REST service.
             * @param callback
             */
            catchsmile.calculateCount = function (callback) {
                $.ajax({
                    type:        "POST",
                    url:         Drupal.settings.catchsmile.serviceUri,
                    dataType:    'json',
                    contentType: 'application/json',
                    success:     callback
                });
            };

            /**
             * This method gets count of catchsmile nodes using REST service
             * and performs page refresh if it is necessary.
             */
            catchsmile.refresh = function() {
                catchsmile.calculateCount(
                    function (result) {
                        var catchsmileCount = $.cookie("catchsmile_count");

                        var oldValue = catchsmileCount != null ? catchsmileCount : 0;

                        // Refresh page if quantity of catchsmile nodes is changed.
                        if(parseInt(oldValue, 10) < parseInt(result.count, 10)) {
                            $.cookie("catchsmile_count", result.count);
                            location.reload();
                        } else {
                            setTimeout(catchsmile.refresh, Drupal.settings.catchsmile.refreshInterval);
                        }
                    }
                );
            };

            /**
             * Execute when DOM is loaded.
             */
            $(document).ready(function() {
                // Run refresh method with little delay.
                setTimeout(catchsmile.refresh, Drupal.settings.catchsmile.refreshInterval);
            });
        }
    };
}(jQuery));