/*
* TODO: 
* - map
*/

(function($, Drupal, undefined){
  var scenes = {
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
    "panorama-5": {
      "title": "Pelastus- ja logistiikkakeskus",
      "type": "multires",
      "multiRes": {
        "path": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-5/%l/%s%y_%x",
        "fallbackPath": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-5/fallback/%s",
        "extension": "jpg",
        "tileResolution": 512,
        "maxLevel": 5,
        "cubeResolution": 4288
      },
      "hotSpots": [
        {
          "pitch": -2.7377124968491553,
          "yaw": 160.72357068384818,
          "type": "scene",
          "text": "Metsälaakso",
          "sceneId": "panorama-a"
        },
        {
          "pitch": -4.292146692156837,
          "yaw": -165.37009132162459,
          "type": "scene",
          "text": "Stage",
          "sceneId": "panorama-b"
        },
        {
          "pitch": -3.8707236787279897,
          "yaw": -119.30339622566056,
          "type": "scene",
          "text": "Riehun alaleiriportti",
          "sceneId": "panorama-c"
        },
        {
          "pitch": 2.657086051899041,
          "yaw": -64.31632243787858,
          "type": "scene",
          "text": "Syke Central Park",
          "sceneId": "panorama-d"
        },
        {
          "pitch": 2.5314675786202607,
          "yaw": -4.9438477376704455,
          "type": "scene",
          "text": "Luovuuslaakso",
          "sceneId": "panorama-3"
        }
      ],
      "autoLoad": true,
      "autoRotate": -2
    },
    "panorama-6": {
      "title": "Iso uimaranta",
      "type": "multires",
      "multiRes": {
        "path": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-6/%l/%s%y_%x",
        "fallbackPath": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-6/fallback/%s",
        "extension": "jpg",
        "tileResolution": 512,
        "maxLevel": 5,
        "cubeResolution": 4136
      },
      "hotSpots": [
        {
          "pitch": 3.3093858620976064,
          "yaw": -67.40559012013031,
          "type": "scene",
          "text": "Solmu",
          "sceneId": "panorama-l"
        },
        {
          "pitch": 0.5274754878060323,
          "yaw": 2.605283391660734,
          "type": "scene",
          "text": "Huminanpolku",
          "sceneId": "panorama-p"
        },
        {
          "pitch": 2.918596474133067,
          "yaw": -39.70564071936535,
          "type": "scene",
          "text": "Hurma Mini Park",
          "sceneId": "panorama-o"
        },
        {
          "pitch": 1.6354648453880987,
          "yaw": 165.0439255933513,
          "type": "scene",
          "text": "Minälaakso",
          "sceneId": "panorama-i-a"
        },
        {
          "pitch": 3.3006635329510936,
          "yaw": -103.4099697772186,
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
      "hotSpots": [
        {
          "pitch": -4.0305509960130195,
          "yaw": 40.191061263709116,
          "type": "scene",
          "text": "Stage",
          "sceneId": "panorama-b"
        },
        {
          "pitch": 1.7549141978983365,
          "yaw": 93.86231989842119,
          "type": "scene",
          "text": "Pelastus- ja logistiikkakeskus",
          "sceneId": "panorama-5"
        },
        {
          "pitch": -2.034652023044074,
          "yaw": 54.21760676566368,
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
      "hotSpots": [
        {
          "pitch": 7.544158894490998,
          "yaw": -97.52115167469572,
          "type": "scene",
          "text": "Metsälaakso",
          "sceneId": "panorama-a"
        },
        {
          "pitch": 2.4641788131710074,
          "yaw": 113.03383821226649,
          "type": "scene",
          "text": "Pelastus- ja logistiikkakeskus",
          "sceneId": "panorama-5"
        },
        {
          "pitch": 3.6273709653999746,
          "yaw": 80.5913425895926,
          "type": "scene",
          "text": "Syke Central Park",
          "sceneId": "panorama-d"
        },
        {
          "pitch": 8.458982381824427,
          "yaw": -24.04807610700206,
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
      "hotSpots": [
        {
          "pitch": -0.34275092804668894,
          "yaw": 166.08031072868488,
          "type": "scene",
          "text": "Roihutori",
          "sceneId": "panorama-g"
        },
        {
          "pitch": 1.5586636321553198,
          "yaw": -108.56390940960803,
          "type": "scene",
          "text": "Pelastus- ja logistiikkakeskus",
          "sceneId": "panorama-5"
        },
        {
          "pitch": 3.393010866371119,
          "yaw": -81.23397810046448,
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
          "pitch": 3.1755119019210754,
          "yaw": 48.54684229901818,
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
      "hotSpots": [
        {
          "pitch": 1.347977812232273,
          "yaw": 143.76731724551837,
          "type": "scene",
          "text": "Raiku Forum",
          "sceneId": "panorama-h"
        },
        {
          "pitch": 3.1706182836527135,
          "yaw": -128.5119795874832,
          "type": "scene",
          "text": "Luovuuslaakso",
          "sceneId": "panorama-3-luovuus"
        },
        {
          "pitch": 0.7070838792148494,
          "yaw": -42.618550660788635,
          "type": "scene",
          "text": "Pelastus- ja logistiikkakeskus",
          "sceneId": "panorama-5"
        },
        {
          "pitch": -2.5156432893141316,
          "yaw": -2.826607692957527,
          "type": "scene",
          "text": "Stage",
          "sceneId": "panorama-b"
        },
        {
          "pitch": -2.922805923624701,
          "yaw": 17.842979411901066,
          "type": "scene",
          "text": "Riehun alaleiriportti",
          "sceneId": "panorama-c"
        },
        {
          "pitch": -0.23875669375411648,
          "yaw": 107.12574151260023,
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
      "hotSpots": [
        {
          "pitch": -1.5381209995149137,
          "yaw": -130.99999258251384,
          "type": "scene",
          "text": "Unityn alaleiritoimisto",
          "sceneId": "panorama-k"
        },
        {
          "pitch": 0.1417131109347739,
          "yaw": -180.18743514818078,
          "type": "scene",
          "text": "Elämyslaakso",
          "sceneId": "panorama-j-b"
        },
        {
          "pitch": -3.6197943443204963,
          "yaw": -0.526882023279514,
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
      "hotSpots": [
        {
          "pitch": 5.42664644662854,
          "yaw": 136.98458785440576,
          "type": "scene",
          "text": "Solmu",
          "sceneId": "panorama-l"
        },
        {
          "pitch": 4.125330211040837,
          "yaw": 105.85743507256191,
          "type": "scene",
          "text": "Leirisuora",
          "sceneId": "panorama-4-liput2"
        },
        {
          "pitch": 1.7186266708551783,
          "yaw": -127.08072951334685,
          "type": "scene",
          "text": "Minälaakso",
          "sceneId": "panorama-i-a"
        },
        {
          "pitch": -2.234233117318891,
          "yaw": 15.748030094424962,
          "type": "scene",
          "text": "Syke Central Park",
          "sceneId": "panorama-d"
        },
        {
          "pitch": -1.2736265803353235,
          "yaw": -25.99330507987361,
          "type": "scene",
          "text": "Luovuuslaakso",
          "sceneId": "panorama-3-luovuus"
        },
        {
          "pitch": 5.936548566497682,
          "yaw": 149.29110814619003,
          "type": "scene",
          "text": "Iso uimaranta",
          "sceneId": "panorama-6"
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
      "hotSpots": [
        {
          "pitch": 1.4325566833661596,
          "yaw": -165.86120674299218,
          "type": "scene",
          "text": "Luovuuslaakso",
          "sceneId": "panorama-3-luovuus"
        },
        {
          "pitch": -0.4806456424922891,
          "yaw": -147.64890327483025,
          "type": "scene",
          "text": "Raiku Forum",
          "sceneId": "panorama-h"
        },
        {
          "pitch": -2.0618726953532316,
          "yaw": -119.44455328419461,
          "type": "scene",
          "text": "Solmu",
          "sceneId": "panorama-l"
        },
        {
          "pitch": -3.3357095255048987,
          "yaw": -98.94724836529042,
          "type": "scene",
          "text": "Iso uimaranta",
          "sceneId": "panorama-6"
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
      "hotSpots": [
        {
          "pitch": 7.972680444801701,
          "yaw": -184.5810030067386,
          "type": "scene",
          "text": "Samoajaohjelma",
          "sceneId": "panorama-f"
        },
        {
          "pitch": 1.0206233684350368,
          "yaw": 35.146416414324364,
          "type": "scene",
          "text": "Unityn alaleiritoimisto",
          "sceneId": "panorama-k"
        },
        {
          "pitch": -0.22790242374174888,
          "yaw": -4.716644777915473,
          "type": "scene",
          "text": "Kiminkierto",
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
      "hotSpots": [
        {
          "pitch": -1.3125076259742106,
          "yaw": -86.29837329553575,
          "type": "scene",
          "text": "Roihutori",
          "sceneId": "panorama-g"
        },
        {
          "pitch": 0.6156717785068422,
          "yaw": -168.95768855208544,
          "type": "scene",
          "text": "Kiminkierto",
          "sceneId": "panorama-m"
        },
        {
          "pitch": 2.9478830356374663,
          "yaw": 80.64066229510381,
          "type": "scene",
          "text": "Elämyslaakso",
          "sceneId": "panorama-j-b"
        },
        {
          "pitch": 3.3776483361404694,
          "yaw": 63.94990889925049,
          "type": "scene",
          "text": "Samoajaohjelma",
          "sceneId": "panorama-f"
        },
        {
          "pitch": 3.449915925681975,
          "yaw": -0.003066273910075523,
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
          "text": "Kiminkierto",
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
          "pitch": 1.088139963701142,
          "yaw": -122.27291361624563,
          "type": "scene",
          "text": "Minälaakso",
          "sceneId": "panorama-i-a"
        },
        {
          "pitch": -1.5766961422253403,
          "yaw": -170.8561452848902,
          "type": "scene",
          "text": "Iso uimaranta",
          "sceneId": "panorama-6"
        }
      ],
      "autoLoad": true,
      "autoRotate": -2
    },
    "panorama-m": {
      "title": "Kiminkierto",
      "type": "multires",
      "multiRes": {
        "path": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-m/%l/%s%y_%x",
        "fallbackPath": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-m/fallback/%s",
        "extension": "jpg",
        "tileResolution": 512,
        "maxLevel": 5,
        "cubeResolution": 4344
      },
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
          "text": "Huminanpolku",
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
          "pitch": -1.3615494920605917,
          "yaw": 164.4884751953015,
          "type": "scene",
          "text": "Unityn alaleiritoimisto",
          "sceneId": "panorama-k"
        },
        {
          "pitch": -1.8610395019100472,
          "yaw": -140.38371374347815,
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
      "hotSpots": [
        {
          "pitch": 1.4831373035632394,
          "yaw": 158.84725000357093,
          "type": "scene",
          "text": "Solmu",
          "sceneId": "panorama-l"
        },
        {
          "pitch": 1.6889430689782587,
          "yaw": -135.3876329714309,
          "type": "scene",
          "text": "Kiminkierto",
          "sceneId": "panorama-m"
        },
        {
          "pitch": 2.0207425810039066,
          "yaw": -34.98540326333111,
          "type": "scene",
          "text": "Huminanpolku",
          "sceneId": "panorama-p"
        },
        {
          "pitch": 0.2771377551979744,
          "yaw": 54.50340192775255,
          "type": "scene",
          "text": "Iso uimaranta",
          "sceneId": "panorama-6"
        }
      ],
      "autoLoad": true,
      "autoRotate": -2
    },
    "panorama-p": {
      "title": "Huminanpolku",
      "type": "multires",
      "multiRes": {
        "path": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-p/%l/%s%y_%x",
        "fallbackPath": "https://d21028m0bsfnhj.cloudfront.net/img/panoramas/panorama-p/fallback/%s",
        "extension": "jpg",
        "tileResolution": 512,
        "maxLevel": 5,
        "cubeResolution": 4296
      },
      "hotSpots": [
        {
          "pitch": 4.381816562239882,
          "yaw": 47.2055146599007,
          "type": "scene",
          "text": "Hurma Mini Park",
          "sceneId": "panorama-o"
        },
        {
          "pitch": -0.007895078415725785,
          "yaw": 94.91668068484695,
          "type": "scene",
          "text": "Kiminkierto",
          "sceneId": "panorama-m"
        },
        {
          "pitch": 4.561711591579408, 
          "yaw": -5.9671716378525534,
          "type": "scene",
          "text": "Iso uimaranta",
          "sceneId": "panorama-6"
        }
      ],
      "autoLoad": true,
      "autoRotate": -2
    }
  };

  if($('#panorama').length > 0) {
    for(var key in scenes) {
      if(!scenes.hasOwnProperty(key)) continue;
      var scene = scenes[key];
      var elem = $('<li><a href="#" data-panorama="' + key + '">' + scene.title + '</a></li>');
      $('.panorama-list').append(elem);
    }

    $('#panorama').empty().hide();

    $('.panorama-list li a').click(function(e){
      e.preventDefault();

      var firstScene = $(this).data('panorama');

      $('.panorama-list').hide();
      $('#panorama').show();

      pannellum.viewer('panorama', {
        "default": {
          "firstScene": firstScene,
          "sceneFadeDuration": 500
        },
        "scenes": scenes
      });
    });
  }
})(jQuery, Drupal);