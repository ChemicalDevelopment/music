<?xml version="1.0" encoding="utf-8" ?>
<DUMMY>
	<!-- Spectrum View Curves Colors -->
	<VARIABLE id="instant_color_left" value="#018fa0"/>
	<VARIABLE id="peak_color_left" value="#26d5ea"/>
	<VARIABLE id="instant_fill_color_left" value="#018fa0"/>

	<VARIABLE id="instant_color_right" value="#cc3333"/>
	<VARIABLE id="peak_color_right" value="#ee4444"/>
	<VARIABLE id="instant_fill_color_right" value="#cc0133"/>

	<VARIABLE id="instant_color_max" value="#0274d9"/>
	<VARIABLE id="peak_color_max" value="#289eed"/>
	<VARIABLE id="instant_fill_color_max" value="#0274d9"/>

	<VARIABLE id="instant_color_avg" value="#0274d9"/>
	<VARIABLE id="peak_color_avg" value="#289eed"/>
	<VARIABLE id="instant_fill_color_avg" value="#0274d9"/>
	
	<!-- override colors for mono version -->
	<IF_MONO>
    <VARIABLE id="instant_color_left" value="$instant_color_max$" override="true"/>
    <VARIABLE id="peak_color_left" value="$peak_color_max$" override="true"/>
    <VARIABLE id="instant_fill_color_left" value="$instant_fill_color_max$" override="true"/>   
	</IF_MONO>
</DUMMY>