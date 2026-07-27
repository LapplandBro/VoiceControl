#! /bin/bash
set -e

rm -rf build-x64
mkdir build-x64
cd build-x64
python3 ../configure.py -s tf2 --arch=x64 --voicecontrol-only --sm-path /sourcemod --mms-path /metamod-source --hl2sdk-root /sdks --enable-optimize
ambuild

# Ensure no DWARF sections remain in shipped binaries (Accelerator/Breakpad safety).
find . -name 'voicecontrol.ext.*.so' -print -exec strip --strip-debug {} \;
