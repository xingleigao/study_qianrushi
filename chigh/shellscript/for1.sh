#!/bin/bash

#for I in 1 3 5 7 9
#for I in `ls /etc`
for I in `seq 1  100`
do
	SUM=`expr $SUM + $I`
done
echo $SUM

for ((I = 1; I <= 10 ; I++))
do
	echo "I=$I"
done

for((;;))
do
	echo "I=$I"
done
