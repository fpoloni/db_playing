#!/bin/bash

RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m' # No Color

CROSS_COMPILE=true
BUILD_MAIN_CODE=true

echo "Build Source Project"

if [ "$1" = "X86" ] || [ "$1" = "x86" ]; then
  CROSS_COMPILE=fasle
fi

if [ "$2" = "test" ] || [ "$1" = "Test" ]; then
  BUILD_MAIN_CODE=false
fi

export HEMO_CROSS_COMPILING=${CROSS_COMPILE}
export HEMO_BUILD_MAIN_CODE=${BUILD_MAIN_CODE}

MAKELIST="CMakeLists.txt"
BUILD_DIR="_build"

if [ ! -e "$MAKELIST" ]; then
  echo "It is missing the " $MAKELIST
  exit 1
fi

if [ ! -d "$BUILD_DIR" ]; then
  echo "creating the _build dir" $BUILD_DIR
  mkdir _build/
fi

cd $BUILD_DIR && cmake ../

make

echo -e "${GREEN}Success _build${NC}"
unset ${CROSS_COMPILE}
exit 0
