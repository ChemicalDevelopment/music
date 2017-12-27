<?xml version="1.0" encoding="utf-8" ?>
<DUMMY>
  <TEMPLATE id="_TPL_IMAGE_OPACITY_BOX" layout_type="row" spacing="5" h_margin="10" v_margin="5" opacity="60%" width="-1" height="-1" image="$THEME_PATH$/pads/pad-bluelight.png" v_align="center" h_align="center" flex="0">
      <!-- group box with opacity -->
      <LAYER_STACK width="$width$" height="$height$" v_align="$v_align$" h_align="$h_align$" flex="$flex$" id="$id$">
          <IMAGE_GROUP_BOX image="$image$" stretch="true" opacity="$opacity$" width="100%" height="100%"/>
          <CELL layout_type="$layout_type$" spacing="$spacing$" h_margin="$h_margin$" v_margin="$v_margin$" width="$width$" height="$height$">
            <TEMPLATE_INNER_CONTENT/>
          </CELL>
      </LAYER_STACK>
  </TEMPLATE>
  
  <DEFINE>
    <TPL_IMAGE_OPACITY_BOX base_type="_TPL_IMAGE_OPACITY_BOX" id=""/>
  </DEFINE>
</DUMMY>