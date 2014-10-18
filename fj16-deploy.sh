#!/bin/sh

echo "DEPLOYING..."
drush updatedb -y
drush features-revert-all -y
drush cc all #clear caches
echo "DEPLOY DONE"
