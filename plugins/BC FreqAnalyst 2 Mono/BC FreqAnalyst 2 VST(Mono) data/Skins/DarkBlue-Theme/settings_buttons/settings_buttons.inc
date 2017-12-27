<?xml version="1.0" encoding="utf-8" ?>
<TEMPLATE id="TPL_DSP_PARAM_SETTINGS_BUTTON" param_id="#UNDEFINED#" button_index="" image_name="#UNDEFINED#">
    <!-- Action button to change the control settings for a dsp parameter -->
    <!-- image name defines the name of the image in the settings_buttons folder -->
    <IMAGE_ACTION_BUTTON action_id="Show_$param_id$_ControlSetup" cursor="system::hand" image="$THEME_PATH$/settings_buttons/$image_name$.png" id="$param_id$_settings_button$button_index$"/>
    <PARAM_LINK from="theme.show_settings" to="$param_id$_settings_button$button_index$.visible"/>
</TEMPLATE>