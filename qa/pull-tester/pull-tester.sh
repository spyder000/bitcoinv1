#!/bin/sh
# Copyright (c) 2013 The BitcoinV1 Core developers
# Distributed under the MIT/X11 software license, see the accompanying
# file COPYING or http://www.opensource.org/licenses/mit-license.php.
#
# Helper script for pull-tester.
#Param 1: path to bitcoinv1 srcroot
#Param ...: arguments for build-test.sh

if [ $# -lt 1 ]; then
  echo "usage: $0 [bitcoinv1 srcroot] build-test arguments..."
fi

killall -q bitcoinv1-cli
killall -q bitcoinv1d

cd $1
shift

./autogen.sh
./configure
./qa/pull-tester/build-tests.sh "$@"
