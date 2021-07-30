#!/bin/bash

EX=11
ONDE="./ex${EX}"
declare -a exercicios=( "ft_strcpy.c" "ft_strncpy.c" "ft_str_is_alpha.c" "ft_str_is_numeric.c" "ft_str_is_lowercase.c" "ft_str_is_uppercase.c" "ft_str_is_printable.c" "ft_strupcase.c" "ft_strlowcase.c" "ft_strcapitalize.c" "ft_strlcpy.c" "ft_putstr_non_printable.c")

rm ./a.out
clear
gcc -Wall -Wextra -Werror -lbsd $ONDE/${exercicios[$EX]} main${EX}.c 
./a.out
norminette $ONDE/${exercicios[$EX]}