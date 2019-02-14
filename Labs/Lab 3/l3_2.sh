#!/bin/bash
IPS=$':'
read -p "What is your eecs username: " userID
found=0
while read login passwod uid gid name dir sh
do
	if [ $login == $userID ]
	then
		echo -e Good day $name
		found=1
	fi
done < /etc/passwd
if [[ found -eq 0 ]]
then
	echo "No such login name"
fi
