#!/bin/sh

# Install Drupal
drush si minimal -y --account-name=admin --account-pass=admin --site-name="Roihu 2016" --db-url=sqlite://sites/default/files/.db.sqlite
