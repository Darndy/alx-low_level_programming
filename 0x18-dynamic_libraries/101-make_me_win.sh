#!/bin/bash
wget -P .. https://raw.githubusercontent.com/darndy/alx-low_level_programming/master/0x18-dynamic_libraries/libtrack.so
export LD_PRELOAD="$PWD/../libtrack.so"
