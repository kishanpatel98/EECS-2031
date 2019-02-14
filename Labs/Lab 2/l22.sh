#!/bin/bash
read fna mna lna
if [-z $lna];
then
echo "$fna $mna"
else
echo "$fna $lna"
fi
done

