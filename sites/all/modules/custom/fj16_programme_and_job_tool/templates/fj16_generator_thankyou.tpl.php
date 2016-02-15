<div class="generator-thankyou">
  <div class="job">
    <p><?php print t('Your choices have been saved into our system.'); ?></p>

    <?php if($current_lang == 'fi'): ?>
      <p>
      Hienoa, hyvin tehty. Enää ei tarvitse kuin varata leirille aurinkoiset kelit.
      </p>
      <p>
      Pesti on kuin työpaikka,  ensivaikutelman voit tehdä vain kerran. Ole aktiivinen, soita esimiehellesi ja esittäydy. Samalla voit esittää toiveesi ja tarpeesi tehtäviesi ja vuorojesi suhteen.
      </p>
      <p>
      Muistatko mitä halusit kertoa leiripestistäsi seuraavassa työhaastattelussasi? Myös siitä kannattaa keskustella esimiehesi kanssa jo tässä vaiheessa.
      </p>
      <p>
      Samoajien on hyvä huomioida että Virvatulesi ajankohta sekä tarkemmat ohjeet vahvistetaan sähköpostilla viimeistään toukokuussa. Tieto ajankohdasta menee myös suoraan pestiesimiehellesi. 
      </p>
      <p>
      Mitä mieltä olit Kehittimestä?
      </p>
      <p>
      <a class="cta" href="https://annamoksman.typeform.com/to/VvoucL">Vastaa kyselyyn</a> 
      </p>
    <?php endif; ?>
    <?php if($current_lang == 'sv'): ?>
      <p>
      Fint, bra gjort! Nu återstår det bara att hoppas på soligt lägerväder. 
      </p>
      <p>
      Serviceuppdraget på lägret är som att ha ett riktigt arbetsuppdrag. Det första intrycket skapas bara en gång. Var aktiv, kontakta din uppdragsgivare och presentera dig själv. Samtidigt kan du framföra dina önskemål och behov gällande uppdragets innehåll och arbetsskift. 
      </p>
      <p>
      Kommer du ännu ihåg vad du tänkte att du skulle vilja berätta om ditt lägeruppdrag på din nästa arbetsintervju? Det lönar sig också att diskutera kring detta med din uppdragsgivare redan nu. 
      </p>
      <p>
      Explorerscout - du kommer att få bekräftan om när din löpeld går av stapeln och närmare instruktioner angående den per e-post senast i maj. Vi skickar informationen om när du är på löpeld direkt till din uppdragsgivare. 
      </p>
      <p>
      Hur gick det? <a class="cta" href="https://annamoksman.typeform.com/to/u38hbJ">Svara</a>
      </p>
    <?php endif; ?>
    <?php if($current_lang == 'en'): ?>
      <p>
      Great, well done. Now all you need is to cross your fingers for sunny skies during camp.
      </p>
      <p>
      Your chosen staff position is like a job, and you only get one shot at making a good first impression. Be active, call your team leader and introduce yourself. While you do this, you can also express your wishes regarding working hours and tasks. 
      </p>
      <p>
      Still remember how you wanted to look back on your camp staff duties in your next job interview?  Discuss this also with your team leader.
      </p>
      <p>
      Explorers should note that you will be notified of the specific time and location of your Will-o'-the-Wisp by email in May at the latest. These details will also be passed on directly to your team leader.
      </p>
      <p>
      On the last page, there will be a link to the feedback survey on Generator functionality. The survey will be in Finnish and English, possibly also in Swedish. 
      </p>
      <p>
      How did this go? <a class="cta" href="https://annamoksman.typeform.com/to/cPouEd">Answer the questionaire</a>
      </p>
    <?php endif; ?>

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
