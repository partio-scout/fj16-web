function gMapsReady() {

  jQuery(function($) {
    var map = new google.maps.Map(document.getElementById('insta-map'), {
      center: { lat: 65.578458, lng: 27.176209 },
      zoom: 5
    });

    var iconSize = google.maps.Size(50,50);

    $.getJSON('/map/json', function(data) {
      data.forEach(function(item) {
        var marker = new google.maps.Marker({
          map: map,
          position: {
            lat: item.location.latitude,
            lng: item.location.longitude
          },
          title: 'Test',
          icon: {
            url: item.images.thumbnail.url,
            scaledSize: new google.maps.Size(50, 50),
            anchor: new google.maps.Point(25, 25)
          }
        });
      });
    })
  });
};
