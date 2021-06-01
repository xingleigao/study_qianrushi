#!/bin/bash

echo -n "please choose (yes|no)"
read R
case $R in
	yes | YES | Y | y | Yes)
		echo "yes"
		;;
	no)
		echo "no"
		;;
	*)
		echo "wrong"
		#;;
esac
