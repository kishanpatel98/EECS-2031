#!/bin/bash
while read a1 a2
do 
while read b1 b2
do
if [ "$a2" == "$b1" ]; then
if [ -n "$b2" ]; then
echo "$a1	$b2"
fi
fi
done<"$2"
done<"$1"