#!/bin/bash
NOCONFIGURE=1 ./bootstrap.sh
QUILT_PATCHES=debian/patches quilt push -a

