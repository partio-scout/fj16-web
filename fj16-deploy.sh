#!/bin/sh

DATE=$(date)
echo "DEPLOY STARTED AT $DATE"
git log -1
echo

echo "Running update hooks..."
/var/lib/nginx/drush/drush updatedb -y
echo "Reverting features..."
/var/lib/nginx/drush/drush features-revert-all -y
echo "Clearing caches..."
/var/lib/nginx/drush/drush cc all #clear caches
echo "Running cron..."
/var/lib/nginx/drush/drush core-cron

hostname=$(hostname)
flowname="web-sivut"
email=$flowname"@finnjamboree2016.flowdock.com"
git log -1 | mailx -s "Deployed on "$hostname $email

DATE=$(date)
echo "DEPLOY COMPLETED AT $DATE"
echo
