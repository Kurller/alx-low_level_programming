#!/bin/bash
wget -P /tmp https://github.com/Kurller/alx-low_level_progamming/raw/master/0x18-dynamic_libraries/liball.so
export LD_PRELOAD=/tmp/liball.so
