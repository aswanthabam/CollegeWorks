#!/bin/sh

echo -n "Enter your name : "
read name
h=$(date +%H)
if [ $h -gt 16 ]; then
    echo "$name, Good Evening !"
elif [ $h -gt 12 ]; then
    echo "$name, Good Afternoon !"
else 
    echo "$name, Good Morning !"
fi