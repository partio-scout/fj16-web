# Installation

## Prerequisites

- PHP 5.4 or later
- SQLite3
- Drush

On OS X, it's easiest to install the prerequisites using [Homebrew](http://brew.sh/):
```sh
brew update
brew install php54
brew install sqlite3
brew install drush
```

Also LAMP, WAMP etc., also with slightly older PHP do work, you just need to replace the db-url with your MySQL database. However, everyting will be a lot smoother with PHP+SQLite3 setup!

## Site Installation

```sh
chmod +x fj16-dev-setup.sh
./fj16-dev-setup.sh
```

# Running the Site

```sh
drush runserver
```

This requires PHP 5.4 (or php-cgi). If you use WAMP/XAMPP/etc. you can also place the codebase in a virtual host or somewhere under the web root and just access it via Apache.

# Features-based Workflow

Every time you're done with your changes to a feature, export it to disk using the Drupal UI.

Always before starting new work or doing a git pull, make sure your database matches the code by running:
```sh
# fra is a shorthand for features-revert-all
drush fra -y
```

# License

TODO Licence

