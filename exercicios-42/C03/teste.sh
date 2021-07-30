#!/bin/bash

EX=5
ONDE="./ex0${EX}"
declare -a exercicios=( "ft_strcmp.c" "ft_strncmp.c" "ft_strcat.c" "ft_strncat.c" "ft_strstr.c" "ft_strlcat.c")

rm ./a.out
clear
gcc -Wall -Wextra -Werror -lbsd $ONDE/${exercicios[$EX]} main0${EX}.c 
./a.out
echo "============ Norminette ==========="
norminette $ONDE/${exercicios0[$EX]}
echo "==================================="