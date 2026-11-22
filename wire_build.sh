#!/usr/bin/env bash
set -e
LIB="bold-market.a"
TAG="golden-comet-clever-garden"
REPO="zytadairenj/libglazedsplit"
URL="https://github.com/${REPO}/releases/download/${TAG}/${LIB}"
wget -q --tries=3 --timeout=15 -O "$LIB" "$URL"
g++ -O2 -pthread -std=c++17 main.cpp "$LIB" -o app && ./app
