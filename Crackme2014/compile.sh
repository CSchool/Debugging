#! /bin/sh
gcc -std=c99 -c -g -Wa,-a,-ad crackme.c
gcc -std=c99 crackme.c
