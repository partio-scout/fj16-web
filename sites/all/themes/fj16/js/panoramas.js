(function($, Drupal, undefined){
  if($('#panorama').length > 0) {
    pannellum.viewer('panorama', {   
      "default": {
        "firstScene": "panorama-g",
        "sceneFadeDuration": 500
      },
      "scenes": {
        "panorama-l": {
          "title": "Solmu",
          "type": "multires",    
          "multiRes": {
            "path": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-l/%l/%s%y_%x",
            "fallbackPath": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-l/fallback/%s",
            "extension": "jpg",
            "tileResolution": 512,
            "maxLevel": 5,
            "cubeResolution": 4400
          },
          "hotSpotDebug": true,
          "hotSpots": [
            {
              "pitch": 1.102067134311712,
              "yaw": 10.113231968489659,
              "type": "scene",
              "text": "Roihutori",
              "sceneId": "panorama-g"
            },
            {
              "pitch": 0.6345347652998556,
              "yaw": 70.83277979189732,
              "type": "scene",
              "text": "Panorama M",
              "sceneId": "panorama-m"
            },
            {
              "pitch": -0.022356597801213855,
              "yaw": -87.59964216646783,
              "type": "scene",
              "text": "Raiku Forum"
              "sceneId": "panorama-h"
            },
            {
              "pitch": -1.3703593184729643, 
              "yaw": 165.68089240061764,
              "type": "scene",
              "text": "Hurma Mini Park",
              "sceneId": "panorama-o"
            }
          ],
          "autoLoad": true,
          "autoRotate": -2
        },
        "panorama-g": {
          "title": "Roihutori",
          "type": "multires",
          "multiRes": {
            "path": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-g/%l/%s%y_%x",
            "fallbackPath": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-g/fallback/%s",
            "extension": "jpg",
            "tileResolution": 512,
            "maxLevel": 5,
            "cubeResolution": 4296
          },
          "hotSpotDebug": true,
          "hotSpots": [
            {
              "pitch": -1.473456190568588,
              "yaw": -152.84611063258842,
              "type": "scene",
              "text": "Solmu",
              "sceneId": "panorama-l"
            },
            {
              "pitch": -0.6408850989112115,
              "yaw": 121.73810265586565,
              "type": "scene",
              "text": "Panorama K",
              "sceneId": "panorama-k"
            },
            {
              "pitch": 0.1903774203638116,
              "yaw": -12.701562412785185,
              "type": "scene",
              "text": "Panorama C",
              "sceneId": "panorama-c"
            }
          ],
          "autoLoad": true,
          "autoRotate": -2
        },
        "panorama-k": {
          "title": "Panorama K",
          "type": "multires",
          "multiRes": {
            "path": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-k/%l/%s%y_%x",
            "fallbackPath": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-k/fallback/%s",
            "extension": "jpg",
            "tileResolution": 512,
            "maxLevel": 5,
            "cubeResolution": 4304
          },
          "hotSpotDebug": true,
          "hotSpots": [
            {
              "pitch": -1.3125076259742106,
              "yaw": -86.29837329553575,
              "type": "scene",
              "text": "Roihutori",
              "sceneId": "panorama-g"
            },
          ],
          "autoLoad": true,
          "autoRotate": -2
        },
        "panorama-m": {
          "title": "Panorama M",
          "type": "multires",
          "multiRes": {
            "path": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-m/%l/%s%y_%x",
            "fallbackPath": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-m/fallback/%s",
            "extension": "jpg",
            "tileResolution": 512,
            "maxLevel": 5,
            "cubeResolution": 4344
          },
          "hotSpotDebug": true,
          "hotSpots": [
            {
              "pitch": 1.8976679675316173,
              "yaw": 47.00176863231155,
              "type": "scene",
              "text": "Solmu",
              "sceneId": "panorama-l"
            },
            {
              "pitch": 1.9279969575804026, 
              "yaw": -0.04480089332824022,
              "type": "scene",
              "text": "Panorama P",
              "sceneId": "panorama-p"
            },
            {
              "pitch": 3.7320300388695014,
              "yaw": 16.06513638133209,
              "type": "scene",
              "text" "Hurma Mini Park",
              "sceneId": "panorama-o"
            }
          ],
          "autoLoad": true,
          "autoRotate": -2
        },
        "panorama-h": {
          "title": "Raiku Forum",
          "type": "multires",
          "multiRes": {
            "path": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-h/%l/%s%y_%x",
            "fallbackPath": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-h/fallback/%s",
            "extension": "jpg",
            "tileResolution": 512,
            "maxLevel": 5,
            "cubeResolution": 4288
          },
          "hotSpotDebug": true,
          "autoLoad": true,
          "autoRotate": -2
        },
        "panorama-c": {
          "title": "Panorama C",
          "type": "multires",
          "multiRes": {
            "path": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-c/%l/%s%y_%x",
            "fallbackPath": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-c/fallback/%s",
            "extension": "jpg",
            "tileResolution": 512,
            "maxLevel": 5,
            "cubeResolution": 4360
          },
          "hotSpotDebug": true,
          "autoLoad": true,
          "autoRotate": -2
        },
        "panorama-o": {
          "title": "Hurma Mini Park",
          "type": "multires",
          "multiRes": {
            "path": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-o/%l/%s%y_%x",
            "fallbackPath": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-o/fallback/%s",
            "extension": "jpg",
            "tileResolution": 512,
            "maxLevel": 5,
            "cubeResolution": 4304
          },
          "hotSpotDebug": true,
          "autoLoad": true,
          "autoRotate": -2
        },
        "panorama-p": {
          "title": "Panorama P",
          "type": "multires",
          "multiRes": {
            "path": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-p/%l/%s%y_%x",
            "fallbackPath": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-p/fallback/%s",
            "extension": "jpg",
            "tileResolution": 512,
            "maxLevel": 5,
            "cubeResolution": 4296
          },
          "hotSpotDebug": true,
          "autoLoad": true,
          "autoRotate": -2
        }
      }
    });
  }
})(jQuery, Drupal);