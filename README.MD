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
git clone git@github.com:partio-scout/fj16-web.git
cd fj16-web
chmod +x fj16-dev-setup.sh
./fj16-dev-setup.sh
```

# Running the Site

```sh
drush runserver
```

Default login is admin/admin.

This requires PHP 5.4 (or php-cgi). If you use WAMP/XAMPP/etc. you can also place the codebase in a virtual host or somewhere under the web root and just access it via Apache.

# Features-based Workflow

Every time you're done with your changes to a feature, export it to disk using the Drupal UI.

Always before starting new work or doing a git pull, make sure your database matches the code by running:
```sh
# runs database migrations, e.g. installation of new features
drush updatedb
# fra is a shorthand for features-revert-all
drush fra -y
```

# Best practices

## Naming things

- Machine names, variable names etc. in English
- Name features with the prefix "FJ16". For example: "FJ16 News" (machine name: fj16_news)
- Prefix machine names of views, content types, etc. by feature name. Visible name should be something usable. For example: "News article" (machine name: fj16_news_article)
- Group all features under the "FJ16" package

## Smart usage of features

- Features (as in Features-module features) should generally do one complete functionality, but not more. Good examples are: "FJ16 News", "FJ16 Content pages". Bad examples are: "FJ16 latest news list" (= only part of functionality), "FJ16 Pages and news" (=more than one functionality)
- Keep the FJ16 Site Setup feature [TODO Not created yet] small. If you find something that should be extracted into it's own feature, do so
- On the other hand, don't have loads of features that only contain e.g. a few strongarmed variables - these are a waste and cause performance trouble. For example, Google Analytics setup should be in FJ16 Site Setup, not in it's own feature.
- Remember to keep the feature in the database synced with the feature on disk, so that you don't lose your changes or override other people's changes
- Check the Git diff before committing, so you'll notice if you failed with the above step. SourceTree is a great GUI tool for Git :)
- When you remove something from a feature (e.g. a field or content type), it does not get deleted in other environments automatically. This is because otherwise you could not move components from one feature to another. Always delete components (fields, content types, views) that have been removed by deleting them via custom code in [hook_update_N hooks](https://api.drupal.org/api/drupal/modules!system!system.api.php/function/hook_update_N/7) in the feature's .install file. Start install numbering from 7001.
- When you create a new feature, add a hook_update_N in fj16_master.install to install the feature. This way, it will be installed automatically in all environments.

## Where to put things

- Features and custom modules should go under sites/all/modules/custom
- Contributed open source modules should go in sites/all/modules/contrib 
- If you need to modify the source of a contrib module (avoid this at all cost!) move it under sites/all/modules/patched-contrib so we know it's been modified
- Purely development-time modules should be in sites/all/modules/development

## Custom code

- Avoid custom modules in general - prefer contrib modules and features
- If you need custom code and it's related to a feature, place it in that feature's .module file
- If you need custom code, and it's related to theme output, place it in the theme's template.php
- If you need custom code that's not related to a feature, create a custom module
- Group custom modules under the "FJ16" package.
- Follow Drupal coding conventions

## Choosing modules

- Don't use too many modules - use reason. Installing 10 modules to get a simple thing done is crazy.
- Prefer modules with lots of existing users and always use stable releases (not alpha or dev).
- Make sure what you need can't be achieved with already installed modules. Prefer generic modules over specific ones, as they're easier to customize to our needs and might solve other problems later as well. So rather than use an event calendar module, use Views, Fields and a custom content type.

## Languages

- Use English as base language for views's titles, content type names, field titles etc. - this makes it possible to translate them using the core translation api

# License

All PHP source code and all custom code in this project is licensed under GNU GPL version 2 (see LICENSE.txt for the license). Other source code may be licensed separately - licenses for JavaScript libraries etc. can be found in the library files. Graphics, images and other intellectual property in this repository is copyrighted and you cannot build derivative works based on them without prior permission.

You are encouraged to use contribute to this site and use it as a basis for your own projects.
