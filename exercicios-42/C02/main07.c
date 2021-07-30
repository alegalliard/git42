#include <unistd.h>

char	*ft_strupcase(char *str);
char 	*ft_strncpy(char *dest, char *src, unsigned int n);
int main(void)
{
    char lowcase[16];
    ft_strncpy(lowcase, "hello from The Other Side!# 1", 29);
    ft_strupcase(lowcase);
    write(1, lowcase, 29);

    return (0);
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i; // apenas inteiros positivos
    i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    if (i < n)
    {
        dest[n - 1] = '\0'; //garantindo que na última posição seja igual a \0
    }

    return dest;
}


// #include <stdio.h>
// #include <stdlib.h>
// char	*ft_strupcase(char *str);

// int	main(void)
// {
// 	char str1[] = "cara";
// 	char str2[] = "Que Coisa, Non?";
// 	char str3[] = "pois Zeh";

// 	printf("str1: %s\n", str1);
// 	printf("str2: %s\n", str2);
// 	printf("str3: %s\n", str3);
// 	printf("===== \n");
// 	ft_strupcase(str1);
// 	ft_strupcase(str2);
// 	ft_strupcase(str3);
// 	printf("str1: %s\n", str1);
// 	printf("str2: %s\n", str2);
// 	printf("str3: %s\n", str3);
// 	return (0);
// }