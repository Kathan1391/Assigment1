#!/bin/sh

if [ $# -lt 2 ]; then
	echo "Less arg"
	exit 1
fi

echo $1
touch $1
echo $2 > $1
