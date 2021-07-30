#!/bin/bash

# export FT_LINE1=7
# export FT_LINE2=15

cat /etc/passwd | 
grep -v ^\# | 
awk -F : '{print $1}' | 
sed '1~2d' | 
rev | sort -r |
sed -n $FT_LINE1,$FT_LINE2"p" | 
tr '\n' ',' | 
sed 's/,/, /g' |
sed -r 's/, $/./g'