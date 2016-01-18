function gMapsReady() {

  jQuery(function($) {
    function escapeStr(str) {
      var $elem = $('<div></div>');
      $elem.text(str);
      return $elem.html();
    }

    var map = new google.maps.Map(document.getElementById('insta-map'), {
      center: { lat: 65.578458, lng: 27.176209 },
      zoom: 5,
      disableDefaultUI: true
    });

    var infoWindow = new google.maps.InfoWindow({
      content: '',
      maxWidth: 200
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
          title: item.caption.text,
          icon: {
            url: item.images.thumbnail.url,
            scaledSize: new google.maps.Size(50, 50),
            anchor: new google.maps.Point(25, 25)
          }
        });

        marker.addListener('click', function() {
          var content = '';

          content += '<img src="' + escapeStr(item.images.low_resolution.url) + '" alt="">';
          content += '<div class="insta-map-author">@' + escapeStr(item.user.username) + '</div>';

          var t = new Date(item.created_time*1000);
          var dateString =  t.getDate() + '.' + (t.getMonth() + 1) + '.' + t.getFullYear();
          content += '<div class="insta-map-submitted">' + dateString + '</div>';

          var clippedCaption = item.caption.text;
          if(clippedCaption.length > 60) {
            clippedCaption = clippedCaption.substring(0,57) + '...';
          }
          content += '<div class="insta-map-caption">' + escapeStr(clippedCaption) + '</div>';

          content += '<a href="' + item.link + '">Näytä Instagramissa</a>'

          infoWindow.close();
          infoWindow.setContent('<div class="insta-map-infowindow">' + content + '</div>');
          infoWindow.open(map, marker);
        })
      });
    })
  });
};
