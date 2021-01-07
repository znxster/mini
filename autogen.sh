#!/bin/sh

srcdir=`dirname $0`
test -z "$srcdir" && srcdir=.

if [ ! -f "$srcdir/configure.ac" ]; then
	echo "$srcdir missing configure.ac?" >&2
	exit 1
fi

if [ ! -d "$srcdir/m4" ]; then
	echo "$srcdir/m4 missing" >&2
	mkdir "$srcdir/m4"
fi

autoreconf --install
