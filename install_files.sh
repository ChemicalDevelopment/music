#!/bin/bash

# installation script

LDIR="$HOME/lmms"

mkdir $LDIR/plugins/vst

cp -rf samples/* $LDIR/samples
cp -rf plugins/* $LDIR/plugins
cp -rf plugins/* $LDIR/plugins/vst


