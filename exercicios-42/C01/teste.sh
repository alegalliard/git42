#!/bin/bash

EX=6
ONDE="../avaliacoes/jefernan-c01/ex0${EX}"
# ONDE="./ex0${EX}"
declare -a exercicios=( "ft_ft.c" "ft_ultimate_ft.c" "ft_swap.c" "ft_div_mod.c" "ft_ultimate_div_mod.c" "ft_putstr.c" "ft_strlen.c" "ft_rev_int_tab.c" "ft_sort_int_tab.c")

norminette $ONDE/${exercicios[$EX]}
gcc -Wall -Wextra -Werror $ONDE/${exercicios[$EX]} main0${EX}.c 
./a.out