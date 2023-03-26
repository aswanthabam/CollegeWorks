#!/bin/bash

echo "Enter a number : "
read num
echo -n "Number in reverse order is : "
while [ $num -gt 0 ];do
    echo -n $(($num%10))
    num=$(($num/10))
done
echo