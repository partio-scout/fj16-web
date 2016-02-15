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

--  Roihun pestitiimi',
  'user_mail_password_reset_subject' => 'Palauta salasanasi Roihun kehittimeen',
  'user_mail_password_reset_body' => 'Hei,

Pyysit salasanan palautusta Roihun kehittimeen. Voit palauttaa salasanan oheisella linkillä:

[user:one-time-login-url]

Linkki on kertakäyttöinen ja vanhenee vuorokaudessa. Jos et haluakaan muuttaa salasanaasi, sinun ei tarvitse tehdä mitään.

--  [site:name] tiimi',
);
  $realm_variables['language']['sv'] = array(
  'site_name' => 'Roihu 2016',
  'site_slogan' => 'Liekeissä. Äventyr. Together.',
  'anonymous' => 'Anonymous',
  'user_mail_register_no_approval_required_subject' => 'Tack för att du registrerade dig på Roihus uppdragsgenerator',
  'user_mail_register_no_approval_required_body' => 'Hej,

Tack för att du registrerade dig på Roihus uppdragsgenerator. Du kan nu logga in genom att klicka på länken nedan eller klistra in den i din egen browser:

[user:one-time-login-url]

Länken kan användas endast EN gång och den för dig till en hemsida där du kan skapa ditt eget lösenord.',
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
