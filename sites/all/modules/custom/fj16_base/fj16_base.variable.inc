<?php
/**
 * @file
 * fj16_base.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function fj16_base_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['language']['en'] = array(
  'site_name' => 'Roihu 2016',
  'site_slogan' => 'Liekeissä. Äventyr. Together.',
  'anonymous' => 'Anonymous',
  'user_mail_register_no_approval_required_subject' => 'Thank you for registering at Roihu Generator',
  'user_mail_register_no_approval_required_body' => 'Hi,

Thank you for registering at Roihu Generator. You may now log in by clicking this
link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where
you can set your password.

After setting your password, you will be able to log in at
[site:login-url] in the future using:

username: [user:name]
password: Your password

--  Roihu 2016 team',
  'user_mail_password_reset_subject' => 'Replacement login information for [user:name] at [site:name]',
  'user_mail_password_reset_body' => 'Hi,

A request to reset the password for your account has been made at [site:name].

You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password. It expires after one day and nothing will happen if it\'s not used.

--  [site:name] team',
);
  $realm_variables['language']['fi'] = array(
  'site_name' => 'Roihu 2016',
  'site_slogan' => 'Liekeissä. Äventyr. Together.',
  'anonymous' => 'Anonymous',
  'user_mail_register_no_approval_required_subject' => 'Tervetuloa pestikehittimeen',
  'user_mail_register_no_approval_required_body' => 'Terve,

Kiitos rekisteröitymisestä Roihun Pestikehittimeen. Voit nyt kirjautua klikkaamalla tai kopioimalla tämän osoitteen selaimeesi:

[user:one-time-login-url]

Linkkiä voi käyttää vain kerran ja se vie sivulle, jolla voit valita itsellesi salasanan.

Valittuasi salasanan voit jatkossa kirjautua osoitteessa [site:login-url] näillä tiedoilla:

username: [user:name]
password: Valitsemasi salasana

--  Roihun pestitiimi',
  'user_mail_password_reset_subject' => 'Replacement login information for [user:name] at [site:name]',
  'user_mail_password_reset_body' => 'Hi,

A request to reset the password for your account has been made at [site:name].

You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password. It expires after one day and nothing will happen if it\'s not used.

--  [site:name] team',
);
  $realm_variables['language']['sv'] = array(
  'site_name' => 'Roihu 2016',
  'site_slogan' => 'Liekeissä. Äventyr. Together.',
  'anonymous' => 'Anonymous',
  'user_mail_register_no_approval_required_subject' => 'Tervetuloa pestikehittimeen',
  'user_mail_register_no_approval_required_body' => 'Terve,

Kiitos rekisteröitymisestä Roihun Pestikehittimeen. Voit nyt kirjautua klikkaamalla tai kopioimalla tämän osoitteen selaimeesi:

[user:one-time-login-url]

Linkkiä voi käyttää vain kerran ja se vie sivulle, jolla voit valita itsellesi salasanan.

Valittuasi salasanan voit jatkossa kirjautua osoitteessa [site:login-url] näillä tiedoilla:

username: [user:name]
password: Valitsemasi salasana

--  Roihun pestitiimi',
  'user_mail_password_reset_subject' => 'Replacement login information for [user:name] at [site:name]',
  'user_mail_password_reset_body' => 'Hi,

A request to reset the password for your account has been made at [site:name].

You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password. It expires after one day and nothing will happen if it\'s not used.

--  [site:name] team',
);

return $realm_variables;
}
