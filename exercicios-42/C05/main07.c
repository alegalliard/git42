#include<stdio.h>

int ft_find_next_prime(int nb);

int main(void)
{
    int teste1 = ft_find_next_prime(-12);
    int teste2 = ft_find_next_prime(40);
    int teste3 = ft_find_next_prime(41);
    int teste4 = ft_find_next_prime(53);
    int teste5 = ft_find_next_prime(-2147483148);
    int teste6 = ft_find_next_prime(2147483646);
    int teste7 = ft_find_next_prime(2);

    printf("Teste -12 : %d\n", teste1);
    printf("Teste 40 : %d\n", teste2);
    printf("Teste 41 : %d\n", teste3);
    printf("Teste 53 : %d\n", teste4);
    printf("Teste -2147483648 : %d\n", teste5);
    printf("Teste 2147483646 : %d\n", teste6);
    printf("Teste 2 : %d\n", teste7);
}