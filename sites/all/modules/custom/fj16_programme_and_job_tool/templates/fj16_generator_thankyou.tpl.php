<div class="generator-thankyou">
  <div class="job">
    <p><span class="label"><?php print t('Your assignment'); ?>:</span> <?php print $job_name; ?></p>
    <p>
      <span class="label"><?php print t('Assignment contact'); ?>:</span>
      <?php print $contact_name; ?>,
      <?php if($contact_phone): ?>
        <?php print $contact_phone; ?>,
      <?php endif; ?>
      <?php print l($contact_email, 'mailto:' . $contact_email); ?>
    </p>
    <p><?php print $job_further_info; ?></p>
  </div>
  <div class="will-o-the-wisp">
    <p><span class="label"><?php print t("Your will-o'-the-wisp"); ?>:</span> <?php print $will_o_the_wisp_name; ?></p>
  </div>
  <div class="further-info">
    <?php print $info_text; ?>
  </div>
</div>
