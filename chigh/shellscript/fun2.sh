grep_user()
{
	R=`grep "^$1:" /etc/passwd | wc -l`
	echo $R
	return $R
}

echo -n "input sername:"
read USER
grep_user $USER
RET=$?
echo "----return $RET-----"
