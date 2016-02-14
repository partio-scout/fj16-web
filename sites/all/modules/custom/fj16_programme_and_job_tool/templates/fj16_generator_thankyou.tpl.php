<div class="generator-thankyou">
  <div class="job">
    <p><?php print t('Your choices have been saved into our system.'); ?></p>
    <p>
      <strong class="label"><?php print t('Your staff position'); ?>:</strong>
      <?php print $job_name; ?></p>
    <p>
      <strong class="label"><?php print t('Contact person'); ?>:</strong>
      <?php print $contact_name; ?>,
      <?php if($contact_phone): ?>
        <?php print $contact_phone; ?>,
      <?php endif; ?>
      <?php print l($contact_email, 'mailto:' . $contact_email); ?>
      <br>
      <?php print $job_further_info; ?>
    </p>
  </div>
  <?php if($will_o_the_wisp_name): ?>
    <div class="will-o-the-wisp">
      <p><strong class="label"><?php print t("Your Will-o'-the-wisp 24h off-camp adventure"); ?>:
      </strong> <?php print $will_o_the_wisp_name; ?></p>
    </div>
  <?php endif; ?>
  <div class="further-info">
    <?php print t('See you at Roihu!'); ?>
  </div>
</div>
