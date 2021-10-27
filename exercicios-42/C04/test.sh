#!/bin/bash

EX=2
ONDE="./ex0${EX}"
declare -a exercicios=( "ft_strlen.c" "ft_putstr.c" "ft_putnbr.c" "ft_atoi.c" "ft_putnbr_base.c" "ft_atoi_base.c")

rm ./a.out
clear
gcc -Wall -Wextra -Werror $ONDE/${exercicios[$EX]} main0${EX}.c 
./a.out
#norminette $ONDE/${exercicios[$EX]}