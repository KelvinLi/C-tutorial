#!/bin/sh

if test ! -x ./exit-status; then
    echo "compile exit-status first!"
    exit 1
fi
./exit-status
echo "exit-status returned: $?"
