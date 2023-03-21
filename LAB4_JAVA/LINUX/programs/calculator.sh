#!/bin/sh
if [ "$1" = "" ]; then
echo "Enter two numbers : "
read a
read b

echo "Choose an option :-"
echo "1) Addition"
echo "2) Substraction"
echo "3) Multiplication"
echo "4) Division"
echo "5) Modulus"
echo "6) Exit"

read ch

case $ch in
1)res=$(($a + $b)) 
echo "Result of the Addition is $res" ;;
2)res=$(($a - $b)) 
echo "Result of the Substrsaction is $res" ;;
3)res=$(($a * $b)) 
echo "Result of the Multiplication is $res" ;;
4)res=$(($a / $b)) 
echo "Result of the Division is $res" ;;
5)res=$(($a % $b)) 
echo "Result of the reminder is $res" ;;
6)echo "Exiting ..." ;;

esac

else 

total_size=0
count=0

for file in "$1"/*; do
    if [ -f "$file" ]; then
        total_size=$((total_size + $(stat -c %s "$file")))
        count=$((count + 1))
    fi
done

if [ $count -eq '0' ]; then
    echo "No files found in $1"
else
    average_size=$((total_size / count))
    echo "Average file size in $1 is $average_size bytes"
fi
fi