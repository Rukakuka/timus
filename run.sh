#!/bin/bash
id="$1"
g++ -std=c++17 src/$id.cpp -o out.bin
./out.bin