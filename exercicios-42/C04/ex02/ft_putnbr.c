#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c);

void uni(int *num);

/*
Primeiro 345 (valor)
divide pra pegar o valor atual
3.45
resto da divisão pra pegar o próximo
45
*/

void ft_putnbr(int nb)
{
    int i;
    int *num;
    // 2147483647

    i = 0;
    num = &nb;

    if(num < 0)
        ft_putchar('-');
    else
        uni(num);
}


void uni(int *num)
{
    int temp;
    int ascii_num;
    int factor;

    temp = *num;
    factor = 10;
    ascii_num = 48;

    if(temp > factor)
    {
        //printf("\n factor %i, temp %i", factor, temp );
        //2147483647
        //1000000000
        while(factor < 1000000000)
             factor = factor * 10;

        temp /= factor;
        ft_putchar(temp + ascii_num);
        *num %= factor;
        printf("\n num %i", *num );
        uni(num);
        
    }
    return;

}

void ft_putchar(char c)
{
    write(1, &c, 1);
}