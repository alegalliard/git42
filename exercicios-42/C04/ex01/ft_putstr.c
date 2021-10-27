#include <unistd.h>

void ft_putchar(char c);

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}