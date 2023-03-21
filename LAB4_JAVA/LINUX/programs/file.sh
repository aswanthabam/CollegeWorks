#!/bin/sh

echo -n "Enter name: "
read name

echo -n "Enter a number : "
read num

echo "Enter 10 lines :- (Use CTRL+d to exit)"
cat > $name"_"$num

echo "First 5 lines of "$name"_"$num" is "
head -n 5 $name"_"$num
