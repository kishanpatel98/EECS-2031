#!/bin/bash
chmod 777 l3_1.sh
read string
if [ "${PWD/$string}" = "$PWD" ]
then
	echo "NO"
else
	echo "YES"
fi
