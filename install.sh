#!/bin/bash

sudo make clean
sudo make
sudo make install
sudo modprobe -a 8192eu
