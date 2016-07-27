/*
* TODO: 
* - hotspot coordinates a-b (1-4 done)
* - map
*/

(function($, Drupal, undefined){
  if($('#panorama').length > 0) {
    $('#panorama').empty();
    var firstScene = "panorama-4-liput2";
    pannellum.viewer('panorama', {   
      "default": {
        "firstScene": firstScene,
        "sceneFadeDuration": 500
      },
      "scenes": {
        "panorama-1-ilma": {
          "title": "Ilmailu- ja moottoriohjelma",
          "type": "multires",
          "multiRes": {
            "path": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-1-ilma/%l/%s%y_%x",
            "fallbackPath": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-1-ilma/fallback/%s",
            "extension": "jpg",
            "tileResolution": 512,
            "maxLevel": 5,
            "cubeResolution": 4288
          },
          "hotSpots": [
            {
              "pitch": 3.9906150159324363,
              "yaw": 6.890810659607919,
              "type": "scene",
              "text": "Riehun alaleiriportti",
              "sceneId": "panorama-c"
            },
            {
              "pitch": -4.431944930661854,
              "yaw": -175.10822920898462,
              "type": "scene",
              "text": "Samoajaohjelma",
              "sceneId": "panorama-f"
            },
            {
              "pitch": 6.559928699138377,
              "yaw": -66.58491737206054,
              "type": "scene",
              "text": "Unityn alaleiritoimisto",
              "sceneId": "panorama-k"
            }
          ],
          "autoLoad": true,
          "autoRotate": -2
        },
        "panorama-2-avajaiset": {
          "title": "Avajaiset",
          "type": "multires",
          "multiRes": {
            "path": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-2-avajaiset/%l/%s%y_%x",
            "fallbackPath": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-2-avajaiset/fallback/%s",
            "extension": "jpg",
            "tileResolution": 512,
            "maxLevel": 5,
            "cubeResolution": 4368
          },
          "hotSpots": [
            {
              "pitch": 5.016900913995161,
              "yaw": -5.500620098527445,
              "type": "scene",
              "text": "Stage",
              "sceneId": "panorama-b"
            },
            {
              "pitch": 5.900734482600804,
              "yaw": -109.6039611809077,
              "type": "scene",
              "text": "Metsälaakso",
              "sceneId": "panorama-a"
            }
          ],
          "autoLoad": true,
          "autoRotate": -2
        },
        "panorama-3-luovuus": {
          "title": "Luovuuslaakso",
          "type": "multires",
          "multiRes": {
            "path": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-3-luovuus/%l/%s%y_%x",
            "fallbackPath": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-3-luovuus/fallback/%s",
            "extension": "jpg",
            "tileResolution": 512,
            "maxLevel": 5,
            "cubeResolution": 4344
          },
          "hotSpots": [
            {
              "pitch": -0.8359758393835763,
              "yaw": -0.8829475403553992,
              "type": "scene",
              "text": "Minälaakso",
              "sceneId": "panorama-i-a"
            },
            {
              "pitch": -0.10765735571632568,
              "yaw": -107.00390167086643,
              "type": "scene",
              "text": "Raiku Forum",
              "sceneId": "panorama-h"
            },
            {
              "pitch": -0.9000780608560961,
              "yaw": -161.76266076138316,
              "type": "scene",
              "text": "Syke Central Park",
              "sceneId": "panorama-d"
            },
            {
              "pitch": -0.6069815975655609,
              "yaw": 142.16159240436969,
              "type": "scene",
              "text": "Pelastus- ja logistiikkakeskus",
              "sceneId": "panorama-5"
            }
          ],
          "autoLoad": true,
          "autoRotate": -2
        },
        "panorama-4-liput2": {
          "title": "Leirisuora",
          "type": "multires",
          "multiRes": {
            "path": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-4-liput2/%l/%s%y_%x",
            "fallbackPath": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-4-liput2/fallback/%s",
            "extension": "jpg",
            "tileResolution": 512,
            "maxLevel": 5,
            "cubeResolution": 4296
          },
          "hotSpotDebug": true,
          "hotSpots": [
            {
              "pitch": 0.3385808815869551,
              "yaw": -179.29926464828316,
              "type": "scene",
              "text": "Solmu",
              "sceneId": "panorama-l"
            },
            {
              "pitch": 0.5274754878060323,
              "yaw": 2.605283391660734,
              "type": "scene",
              "text": "Roihutori",
              "sceneId": "panorama-g"
            },
            {
              "pitch": 0.8193606866895075,
              "yaw": -108.09172488847987,
              "type": "scene",
              "text": "Raiku Forum",
              "sceneId": "panorama-h"
            }
          ],
          "autoLoad": true,
          "autoRotate": -2
        },
        "panorama-a": {
          "title": "Metsälaakso",
          "type": "multires",
          "multiRes": {
            "path": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-a/%l/%s%y_%x",
            "fallbackPath": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-a/fallback/%s",
            "extension": "jpg",
            "tileResolution": 512,
            "maxLevel": 5,
            "cubeResolution": 4312
          },
          "hotSpotDebug": true,
          "hotSpots": [
            {
              "pitch": -1.473456190568588,
              "yaw": -152.84611063258842,
              "type": "scene",
              "text": "Stage",
              "sceneId": "panorama-b"
            },
            {
              "pitch": -1.473456190568588,
              "yaw": -152.84611063258842,
              "type": "scene",
              "text": "Pelastus- ja logistiikkakeskus",
              "sceneId": "panorama-5"
            },
            {
              "pitch": -1.473456190568588,
              "yaw": -152.84611063258842,
              "type": "scene",
              "text": "Avajaiset",
              "sceneId": "panorama-2-avajaiset"
            }
          ],
          "autoLoad": true,
          "autoRotate": -2
        },
        "panorama-b": {
          "title": "Stage",
          "type": "multires",
          "multiRes": {
            "path": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-b/%l/%s%y_%x",
            "fallbackPath": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-b/fallback/%s",
            "extension": "jpg",
            "tileResolution": 512,
            "maxLevel": 5,
            "cubeResolution": 4392
          },
          "hotSpotDebug": true,
          "hotSpots": [
            {
              "pitch": -1.473456190568588,
              "yaw": -152.84611063258842,
              "type": "scene",
              "text": "Metsälaakso",
              "sceneId": "panorama-a"
            },
            {
              "pitch": -1.473456190568588,
              "yaw": -152.84611063258842,
              "type": "scene",
              "text": "Pelastus- ja logistiikkakeskus",
              "sceneId": "panorama-5"
            },
            {
              "pitch": -1.473456190568588,
              "yaw": -152.84611063258842,
              "type": "scene",
              "text": "Syke Central Park",
              "sceneId": "panorama-d"
            },
            {
              "pitch": -1.473456190568588,
              "yaw": -152.84611063258842,
              "type": "scene",
              "text": "Riehun alaleiriportti",
              "sceneId": "panorama-c"
            },
            {
              "pitch": -1.473456190568588,
              "yaw": -152.84611063258842,
              "type": "scene",
              "text": "Avajaiset",
              "sceneId": "panorama-2-avajaiset"
            }
          ],
          "autoLoad": true,
          "autoRotate": -2
        },
        "panorama-c": {
          "title": "Riehun alaleiriportti",
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
          "hotSpots": [
            {
              "pitch": -1.473456190568588,
              "yaw": -152.84611063258842,
              "type": "scene",
              "text": "Roihutori",
              "sceneId": "panorama-g"
            },
            {
              "pitch": -1.473456190568588,
              "yaw": -152.84611063258842,
              "type": "scene",
              "text": "Pelastus- ja logistiikkakeskus",
              "sceneId": "panorama-5"
            },
            {
              "pitch": -1.473456190568588,
              "yaw": -152.84611063258842,
              "type": "scene",
              "text": "Stage",
              "sceneId": "panorama-b"
            },
            {
              "pitch": -1.473456190568588,
              "yaw": -152.84611063258842,
              "type": "scene",
              "text": "Syke Central Park",
              "sceneId": "panorama-d"
            },
            {
              "pitch": -1.473456190568588,
              "yaw": -152.84611063258842,
              "type": "scene",
              "text": "Ilmailu- ja moottoriohjelma",
              "sceneId": "panorama-1-ilma"
            }
          ],
          "autoLoad": true,
          "autoRotate": -2
        },
        "panorama-d": {
          "title": "Syke Central Park",
          "type": "multires",
          "multiRes": {
            "path": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-d/%l/%s%y_%x",
            "fallbackPath": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-d/fallback/%s",
            "extension": "jpg",
            "tileResolution": 512,
            "maxLevel": 5,
            "cubeResolution": 4288
          },
          "hotSpotDebug": true,
          "hotSpots": [
            {
              "pitch": -1.473456190568588,
              "yaw": -152.84611063258842,
              "type": "scene",
              "text": "Raiku Forum",
              "sceneId": "panorama-h"
            },
            {
              "pitch": -1.3125076259742106,
              "yaw": -86.29837329553575,
              "type": "scene",
              "text": "Luovuuslaakso",
              "sceneId": "panorama-3-luovuus"
            },
            {
              "pitch": -1.3125076259742106,
              "yaw": -86.29837329553575,
              "type": "scene",
              "text": "Pelastus- ja logistiikkakeskus",
              "sceneId": "panorama-5"
            },
            {
              "pitch": -1.3125076259742106,
              "yaw": -86.29837329553575,
              "type": "scene",
              "text": "Stage",
              "sceneId": "panorama-b"
            },
            {
              "pitch": -1.3125076259742106,
              "yaw": -86.29837329553575,
              "type": "scene",
              "text": "Riehun alaleiriportti",
              "sceneId": "panorama-c"
            },
            {
              "pitch": -1.3125076259742106,
              "yaw": -86.29837329553575,
              "type": "scene",
              "text": "Roihutori",
              "sceneId": "panorama-g"
            }
          ],
          "autoLoad": true,
          "autoRotate": -2
        },
        "panorama-f": {
          "title": "Samoajaohjelma",
          "type": "multires",
          "multiRes": {
            "path": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-f/%l/%s%y_%x",
            "fallbackPath": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-f/fallback/%s",
            "extension": "jpg",
            "tileResolution": 512,
            "maxLevel": 5,
            "cubeResolution": 4288
          },
          "hotSpotDebug": true,
          "hotSpots": [
            {
              "pitch": -0.6408850989112115,
              "yaw": 121.73810265586565,
              "type": "scene",
              "text": "Unityn alaleiritoimisto",
              "sceneId": "panorama-k"
            },
            {
              "pitch": 0.1903774203638116,
              "yaw": -12.701562412785185,
              "type": "scene",
              "text": "Elämyslaakso",
              "sceneId": "panorama-j-b"
            },
            {
              "pitch": 0.1903774203638116,
              "yaw": -12.701562412785185,
              "type": "scene",
              "text": "Ilmailu- ja moottoriohjelma",
              "sceneId": "panorama-1-ilma"
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
              "text": "Unityn alaleiritoimisto",
              "sceneId": "panorama-k"
            },
            {
              "pitch": 0.1903774203638116,
              "yaw": -12.701562412785185,
              "type": "scene",
              "text": "Riehun alaleiriportti",
              "sceneId": "panorama-c"
            },
            {
              "pitch": 0.1903774203638116,
              "yaw": -12.701562412785185,
              "type": "scene",
              "text": "Syke Central Park",
              "sceneId": "panorama-d"
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
          "hotSpots": [
            {
              "pitch": -1.473456190568588,
              "yaw": -152.84611063258842,
              "type": "scene",
              "text": "Solmu",
              "sceneId": "panorama-l"
            },
            {
              "pitch": -1.473456190568588,
              "yaw": -152.84611063258842,
              "type": "scene",
              "text": "Leirisuora",
              "sceneId": "panorama-4-liput2"
            },
            {
              "pitch": -1.473456190568588,
              "yaw": -152.84611063258842,
              "type": "scene",
              "text": "Minälaakso",
              "sceneId": "panorama-i-a"
            },
            {
              "pitch": -1.473456190568588,
              "yaw": -152.84611063258842,
              "type": "scene",
              "text": "Syke Central Park",
              "sceneId": "panorama-d"
            },
            {
              "pitch": -1.473456190568588,
              "yaw": -152.84611063258842,
              "type": "scene",
              "text": "Luovuuslaakso",
              "sceneId": "panorama-3-luovuus"
            }
          ],
          "autoLoad": true,
          "autoRotate": -2
        },
        "panorama-i-a": {
          "title": "Minälaakso",
          "type": "multires",
          "multiRes": {
            "path": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-i-a/%l/%s%y_%x",
            "fallbackPath": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-i-a/fallback/%s",
            "extension": "jpg",
            "tileResolution": 512,
            "maxLevel": 5,
            "cubeResolution": 4280
          },
          "hotSpotDebug": true,
          "hotSpots": [
            {
              "pitch": -1.3125076259742106,
              "yaw": -86.29837329553575,
              "type": "scene",
              "text": "Luovuuslaakso",
              "sceneId": "panorama-3-luovuus"
            },
            {
              "pitch": -1.3125076259742106,
              "yaw": -86.29837329553575,
              "type": "scene",
              "text": "Raiku Forum",
              "sceneId": "panorama-h"
            },
            {
              "pitch": -1.3125076259742106,
              "yaw": -86.29837329553575,
              "type": "scene",
              "text": "Solmu",
              "sceneId": "panorama-l"
            }
          ],
          "autoLoad": true,
          "autoRotate": -2
        },
        "panorama-j-b": {
          "title": "Elämyslaakso",
          "type": "multires",
          "multiRes": {
            "path": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-j-b/%l/%s%y_%x",
            "fallbackPath": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-j-b/fallback/%s",
            "extension": "jpg",
            "tileResolution": 512,
            "maxLevel": 5,
            "cubeResolution": 4312
          },
          "hotSpotDebug": true,
          "hotSpots": [
            {
              "pitch": -1.3125076259742106,
              "yaw": -86.29837329553575,
              "type": "scene",
              "text": "Samoajaohjelma",
              "sceneId": "panorama-f"
            },
            {
              "pitch": -1.3125076259742106,
              "yaw": -86.29837329553575,
              "type": "scene",
              "text": "Unityn alaleiritoimisto",
              "sceneId": "panorama-k"
            },
            {
              "pitch": -1.3125076259742106,
              "yaw": -86.29837329553575,
              "type": "scene",
              "text": "Panorama M",
              "sceneId": "panorama-m"
            }
          ],
          "autoLoad": true,
          "autoRotate": -2
        },
        "panorama-k": {
          "title": "Unityn alaleiritoimisto",
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
            {
              "pitch": -1.3125076259742106,
              "yaw": -86.29837329553575,
              "type": "scene",
              "text": "Panorama M",
              "sceneId": "panorama-m"
            },
            {
              "pitch": -1.3125076259742106,
              "yaw": -86.29837329553575,
              "type": "scene",
              "text": "Elämyslaakso",
              "sceneId": "panorama-j-b"
            },
            {
              "pitch": -1.3125076259742106,
              "yaw": -86.29837329553575,
              "type": "scene",
              "text": "Samoajaohjelma",
              "sceneId": "panorama-f"
            },
            {
              "pitch": -1.3125076259742106,
              "yaw": -86.29837329553575,
              "type": "scene",
              "text": "Ilmailu- ja moottoriohjelma",
              "sceneId": "panorama-1-ilma"
            }
          ],
          "autoLoad": true,
          "autoRotate": -2
        },
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
              "text": "Leirisuora",
              "sceneId": "panorama-4-liput2"
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
              "text": "Raiku Forum",
              "sceneId": "panorama-h"
            },
            {
              "pitch": -1.3703593184729643, 
              "yaw": 165.68089240061764,
              "type": "scene",
              "text": "Hurma Mini Park",
              "sceneId": "panorama-o"
            },
            {
              "pitch": -1.3703593184729643, 
              "yaw": 165.68089240061764,
              "type": "scene",
              "text": "Minälaakso",
              "sceneId": "panorama-i-a"
            }
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
              "text": "Hurma Mini Park",
              "sceneId": "panorama-o"
            },
            {
              "pitch": 3.7320300388695014,
              "yaw": 16.06513638133209,
              "type": "scene",
              "text": "Unityn alaleiritoimisto",
              "sceneId": "panorama-k"
            },
            {
              "pitch": 3.7320300388695014,
              "yaw": 16.06513638133209,
              "type": "scene",
              "text": "Elämyslaakso",
              "sceneId": "panorama-j-b"
            }
          ],
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
          "hotSpots": [
            {
              "pitch": -1.473456190568588,
              "yaw": -152.84611063258842,
              "type": "scene",
              "text": "Solmu",
              "sceneId": "panorama-l"
            },
            {
              "pitch": -1.473456190568588,
              "yaw": -152.84611063258842,
              "type": "scene",
              "text": "Panorama M",
              "sceneId": "panorama-m"
            },
            {
              "pitch": -1.473456190568588,
              "yaw": -152.84611063258842,
              "type": "scene",
              "text": "Panorama P",
              "sceneId": "panorama-p"
            }
          ],
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
          "hotSpots": [
            {
              "pitch": -1.473456190568588,
              "yaw": -152.84611063258842,
              "type": "scene",
              "text": "Hurma Mini Park",
              "sceneId": "panorama-o"
            },
            {
              "pitch": -1.473456190568588,
              "yaw": -152.84611063258842,
              "type": "scene",
              "text": "Panorama M",
              "sceneId": "panorama-m"
            },
          ],
          "autoLoad": true,
          "autoRotate": -2
        }
      }
    });
  }
})(jQuery, Drupal);