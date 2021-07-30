#!/bin/bash

EX=7
ONDE="./luricar-c05/ex0${EX}"
declare -a exercicios=( "ft_iterative_factorial.c" "ft_recursive_factorial.c" "ft_iterative_power.c" "ft_recursive_power.c" "ft_fibonacci.c" "ft_sqrt.c" "ft_is_prime.c" "ft_find_next_prime.c" "ft_ten_queens_puzzle.c")

rm ./a.out
clear
gcc -Wall -Wextra -Werror $ONDE/${exercicios[$EX]} main0${EX}.c 
./a.out
norminette $ONDE/${exercicios[$EX]}