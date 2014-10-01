# Installation

## Prerequisites
PHP 5.4 or later
SQLite
Drush

(Also LAMP, WAMP etc., also with slightly older PHP do work, you just need to replace the db-url with your MySQL database.

## One-line install

```sh
drush si minimal --account-name=admin --account-pass=admin --site-name="Roihu 2016" --uri=sqlite://sites/default/files/.db.sqlite
```

# Running the site

```sh
drush runserver
```

This requires PHP 5.4 (or php-cgi). If you use WAMP/XAMPP/etc. you can also place the codebase in a virtual host or somewhere under the web root and just access it via apache.

# License

TODO Licence

