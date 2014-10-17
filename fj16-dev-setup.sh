#!/bin/sh

# Install Drupal
drush si minimal -y --account-name=admin --account-pass=admin --site-name="Roihu 2016" --db-url=sqlite://sites/default/files/.db.sqlite

# Enable all fj16 features
cd ./sites/default
drush en fj16_master -y

# Enable dev modules
drush en field_ui -y
drush en views_ui -y

# Download translations
drush l10n-update -y

# Some features may not go fully on during installation, revert just in case
drush features-revert-all -y
drush cc all
