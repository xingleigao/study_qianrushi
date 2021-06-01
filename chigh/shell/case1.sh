#!/bin/bash

echo -n "please choose (yes|no)"
read R
case $R in
	yes)
		echo "yes"
		;;
	y)
		echo "yes"
		;;
	no)
		echo "no"
		;;
	*)
		echo "wrong"
		#;;
esac
