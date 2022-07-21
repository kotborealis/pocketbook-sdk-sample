#! /usr/bin/env sh

set -ex

# Needs full path
PB_SDK_CFG="$(readlink -f "./SDK_481/config.cmake")" \
cmake \
  -DCMAKE_TOOLCHAIN_FILE=./SDK_481/config.cmake \
  -DTARGET_TYPE=ARM \
  -S. -B./build "$@"