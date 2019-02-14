#!/bin/bash
ls
for filename in *; do
if [ -d ${filename} ]; then 
echo "${filename} is a directory"
elif 
[ -x ${filename} ]; then
echo "${filename} is an executible"
else 
echo "${filename} is not an ececutible"
fi
done
