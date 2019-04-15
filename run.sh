#!/bin/sh
echo "Deleting .."
rm -rf build/*
echo "Getting into build folder .."
cd build/
echo "Compiling ..."
cmake ../
echo "Building ..."
make
echo "Running .."
./mySiteIndex --docroot ../ --http-address 0.0.0.0 --http-port 9090
