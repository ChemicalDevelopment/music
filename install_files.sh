#!/bin/bash

# installation script

LDIR="$HOME/lmms"


if [ $# -eq 0 ]; then

  cp -rf samples/* $LDIR/samples
  cp -rf plugins/* $LDIR/plugins
  cp -rf presets/* $LDIR/presets

else
 
  cp -rf $1 $LDIR/

fi



