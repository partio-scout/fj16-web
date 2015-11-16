/**
 * @file
 * Custom CKEditor configurations.
 */

/**
 * Custom editor configs for CKEditor Enhanced Image plugin.
 *
 * @param {CKEditor.config} config The existing CKEditor configuration object.
 */
CKEDITOR.editorConfig = function (config) {
  'use strict';
  // By default, CKEditor will try to define the image width and
  // height in the image tag using inline style attribute, however
  // this breaks responsive image resizing. Thus, prevent width/height
  // css rules on the image tag's inline style attribute.
  config.disallowedContent = 'img{width,height}';
  // Instead use image2 alignment classes which can be used in your
  // theme to adjust width and height using percentages while allowing
  // width and height *attributes* (eg those created by core Drupal
  // image presets and the Media module) to define image size.
  config.image2_alignClasses = ['align-left', 'align-center', 'align-right'];
};
