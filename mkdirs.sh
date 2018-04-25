#!/bin/bash

for i in $(seq 1 15); 

do mkdir -p $i; 

echo "# Problem $i" > $i/README.md
echo "[https://projecteuler.net/problem=$i](https://projecteuler.net/problem=$i)" >> $i/README.md; 

done

