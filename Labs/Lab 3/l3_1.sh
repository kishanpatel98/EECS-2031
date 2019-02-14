#!/bin/bash
while read -r name file1
do
	while read -r id file2
	do
		if [[ "$file1" == "$id" ]]
		then
			echo "$name $file2"
		fi
	done <$2
done <$1
