#!/bin/bash

filelist=$(ls *.c | cut -d\. -f1)

for i in $filelist; do
	gcc -c $i.c -o $i.o
done

obj=($(ls *.o))

ar rcs liball.a "${obj[@]}"
