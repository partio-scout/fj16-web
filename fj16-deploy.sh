#!/bin/sh

echo "DEPLOYING..."
/var/lib/nginx/drush/drush updatedb -y
/var/lib/nginx/drush/drush features-revert-all -y
/var/lib/nginx/drush/drush cc all #clear caches
echo "DEPLOY DONE"
