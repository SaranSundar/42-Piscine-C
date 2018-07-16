#!/bin/bash
rm -rf ~/stupidity/day$1
mkdir ~/stupidity/day$1
cp -R day$1/ ~/stupidity/day$1
cd ~/stupidity
./spawn.pl day$1 config_d$1.pl
./tools/build.sh
./tools/verify.sh
./tools/check_all.sh
cd -
