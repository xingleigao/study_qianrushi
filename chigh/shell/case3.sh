#!/bin/bash

echo -n "please input score"
read S
if [ $S -lt 0 -o $S -gt 100 ]
then 
	echo "not in [0-100]"
	exit
fi
G=`expr $S / 10`
case $G in
	9 | 10)
		echo "A"
		;;
	6 | 7 | 8)
		echo "B"
		;;
	*)
		echo "C"
		#;;
esac
