#!/bin/bash
read firstname middlename lastname

if [ -z $lastname ];
then
echo "$firstname $lastname"

else
x=$(echo $middlename | head -c 1)
array=($x)
echo "$firstname ${array[0]}. $lastname"

fi
done
