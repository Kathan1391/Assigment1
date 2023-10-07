#!/bin/sh

if [ $# -lt 2 ]; then
	echo "Less arg"
	exit 1
fi

if [ -e $1 ]; then
	count=$(grep -Rnw $1 -e $2 | wc -l)
	if [ $count -eq 0 ]; then
		echo "Not found"
		exit 1
	else
		echo "The number of files are ${count} and the number of matching lines are ${count}"
	fi
else
	echo "Not a dir"
	exit 1
fi
