<?php

/* 
* To change this license header, choose License Headers in Project Properties.
* To change this template file, choose Tools | Templates
* and open the template in the editor.
*/

$sectionId = str_replace(' ', '_', $title);
?>
<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
    <h3>
      <?php
      print render($content['field_section_heading']);
      ?>
    </h3>
    <?php
    print render($content['field_section_text']);
    ?>
    <?php
    if ($content['field_section_enabled']['#items'][0]['value'] <> 0):
      ?>
      <?php if (!empty($content['field_section_button_url']['#items'][0]['value'])): ?>
        <a type="button" title="<?php print render($content['field_section_button_title']['#items'][0]['value']); ?>" class="btn btn-success" href="<?php print($content['field_section_button_url']['#items'][0]['value']) ?>">
          <?php print($content['field_section_button_text']['#items'][0]['value']) ?>
        </a>
      <?php else : ?>
        <!-- Button trigger modal -->
        <button type="button" title="<?php print render($content['field_section_button_title']['#items'][0]['value']); ?>" class="btn btn-success" data-toggle="modal" data-target="#<?php print($sectionId); ?>">
          <?php print($content['field_section_button_text']['#items'][0]['value']) ?>
        </button>
        <!-- Modal -->
        <div class="modal fade" id="<?php print($sectionId); ?>" tabindex="-1" role="dialog" aria-labelledby="<?php print($sectionId); ?>Label" aria-hidden="true">
          <div class="modal-dialog" role="document">
            <div class="modal-content">
              <div class="modal-header">
                <h3 class="modal-title" id="<?php print($sectionId); ?>Label"><?php print($content['field_section_popup_heading']['#items'][0]['value']) ?></h3>
                <button type="button" class="close" data-dismiss="modal" aria-label="Close">
                  <span aria-hidden="true">&times;</span>
                </button>
              </div>
              <div class="modal-body">
                <?php print render($content['field_section_popup_text']); ?>
              </div>
              <div class="modal-footer">
                <button type="button" class="btn btn-success" data-dismiss="modal"><?php print t('Close') ?></button>
              </div>
            </div>
          </div>
        </div>
      <?php endif; ?>
    <?php endif; ?>
  </div>
</div>