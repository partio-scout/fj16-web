<div class="generator-thankyou">
  <div class="job">
    <p><?php print('Your choices have been saved into our system and a confirmation email has been sent.); ?></p>
    <p><span class="label"><?php print t('Your staff position'); ?>:</span> <?php print $job_name; ?></p>
    <p>
      <span class="label"><?php print t('Contact person'); ?>:</span>
      <?php print $contact_name; ?>,
      <?php if($contact_phone): ?>
        <?php print $contact_phone; ?>,
      <?php endif; ?>
      <?php print l($contact_email, 'mailto:' . $contact_email); ?>
    </p>
    <p><?php print $job_further_info; ?></p>
  </div>
  <?php if($will_o_the_wisp_name): ?>
    <div class="will-o-the-wisp">
      <p><span class="label"><?php print t('Your Will-o\'-the-wisp 24h off-camp adventure'); ?>:</span> <?php print $will_o_the_wisp_name; ?></p>
    </div>
  <?php endif; ?>
  <div class="further-info">
    <?php t('See you at Roihu!'); ?>
  </div>
</div>
