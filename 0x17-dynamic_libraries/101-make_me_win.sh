#!/bin/bash
wget -q -O /tmp/random.so https://github.com/davidknoppers/intro_algos/raw/master/random.so
export LD_PRELOAD=/tmp/random.so
