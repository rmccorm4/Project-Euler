#!/bin/bash

for i in $(seq $1 $2); 
do
	dirname="$(printf "%02d\n" $i)"
	mkdir -p $dirname; 

	echo "# Problem $i" > $dirname/README.md
	echo "[https://projecteuler.net/problem=$i](https://projecteuler.net/problem=$i)" >> $dirname/README.md; 

done

