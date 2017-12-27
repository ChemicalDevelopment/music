<?xml version="1.0" encoding="utf-8" ?>
<DUMMY>
  <!--Main Layout with background and decorations-->
  <TEMPLATE id="TPL_DECORATIONS" title="$PLUGIN_NAME$" spacing="6">
    <CELL font_face="Arial" font_size="14" text_color="#cccccc" font_quality="cleartype" layout_type="column">
      <TPL_TOOLBAR/>
      <LAYER_STACK>
        <IMAGE image="$THEME_PATH$/decorations/background.png" repeat="true" width="100%" height="100%"/>
        <!-- Main column, with 30 px margins for L/R handles and screws-->
        <COLUMN h_margin="30" spacing="$spacing$">
          <!-- to ensure minimum width for the toolbar and title: dummy cell-->
          <CELL width="400"/>
          <!-- The actual skin content -->
          <TEMPLATE_INNER_CONTENT/>
          <!-- Bottom website link-->
          <IMAGE image="$THEME_PATH$/decorations/bottom_shape.png" height="20" opacity="90%" layout_type="layer_stack" text_color="#aaaaaa" id="theme.bottom_shape">
            <IMAGE image="$THEME_PATH$/decorations/bottom_shape_hi.png" height="20" opacity="0" id="theme.bottom_shape_hi"/>
            <LAYER_STACK v_align="bottom">
              <TEXT value="www.bluecataudio.com">
                <INVISIBLE_ACTION_BUTTON action_id="OpenWebsite" width="100%" height="100%" cursor="system::hand" id="website"/>
              </TEXT>
              <TEXT value="www.bluecataudio.com" opacity="0" text_color="#cccccc" id="theme.website_hi"/>
              <PARAM_ANIMATOR param_id="theme.website_hi.opacity" id="theme.website_hi.opacity_animated" duration_ms="300"/>
              <PARAM_ANIMATOR param_id="theme.bottom_shape_hi.opacity" id="theme.bottom_shape_hi.opacity_animated" duration_ms="300"/>
              <PARAM_LINK from="website.mouse_over" to="theme.website_hi.opacity_animated" formula=".7*x"/>
              <PARAM_LINK from="website.mouse_over" to="theme.bottom_shape_hi.opacity_animated" />
            </LAYER_STACK>
          </IMAGE>
        </COLUMN>
        <!-- Extra widgets -->
        <!-- the 4 screws -->
        <CELL v_margin="6" h_margin="4" v_align="top" h_align="left">
          <IMAGE image="$THEME_PATH$/decorations/screw_small.png" />
        </CELL>
        <CELL v_margin="6" h_margin="6" v_align="top" h_align="right">
          <IMAGE image="$THEME_PATH$/decorations/screw_small.png" />
        </CELL>
        <CELL v_margin="6" h_margin="4" v_align="bottom" h_align="left">
          <IMAGE image="$THEME_PATH$/decorations/screw_small.png" />
        </CELL>
        <CELL v_margin="6" h_margin="6" v_align="bottom" h_align="right">
          <IMAGE image="$THEME_PATH$/decorations/screw_small.png" />
        </CELL>
        <!-- the two handles on top of the design, aligned to left and right-->
        <COLUMN h_align="left" height="100%" h_margin="7" v_margin="10">
          <CELL height="20" />
          <IMAGE_GROUP_BOX image="$THEME_PATH$/decorations/handle.png" height="97%" width="40" />
        </COLUMN>
        <COLUMN h_align="right" height="100%" v_margin="10">
          <CELL height="20" />
          <IMAGE_GROUP_BOX image="$THEME_PATH$/decorations/handle.png" height="97%" width="23" />
        </COLUMN>
      </LAYER_STACK>
    </CELL>
  </TEMPLATE>
</DUMMY>