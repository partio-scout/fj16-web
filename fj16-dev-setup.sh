#!/bin/sh

# Install Drupal
drush si minimal -y --account-name=admin --account-pass=admin --site-name="Roihu 2016" --db-url=sqlite://sites/default/files/.db.sqlite

# Enable all fj16 features
cd ./sites/default
drush en fj16_master -y
