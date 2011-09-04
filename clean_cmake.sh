#!/bin/sh

find . -name "CMakeFiles" | xargs rm -rfv
find . -name "Makefile" | xargs rm -rfv
find . -name "cmake_install.cmake" | xargs rm -rfv
find . -name "CMakeCache.txt" | xargs rm -rfv
find . -name "CTestTestfile.cmake" | xargs rm -rfv
rm -vrf Testing