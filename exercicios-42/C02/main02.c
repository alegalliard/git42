
#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;
	char *str5;
	char *str6;

	str1 = calloc(10, sizeof(char));
	str2 = calloc(10, sizeof(char));
	str3 = calloc(10, sizeof(char));
	str4 = calloc(10, sizeof(char));
	str5 = calloc(0, sizeof(char));
	str6 = calloc(1, sizeof(char));
	str1 = "alho";
	str2 = "pépsi com limão";
	str3 = "dança da motinha";
	str4 = "leriGou";
	str5 = "";
	str6 = "a";
	printf("str1: %s, is_alpha: %d\n", str1, ft_str_is_alpha(str1));
	printf("str2: %s, is_alpha: %d\n", str2, ft_str_is_alpha(str2));
	printf("str3: %s, is_alpha: %d\n", str3, ft_str_is_alpha(str3));
	printf("str4: %s, is_alpha: %d\n", str4, ft_str_is_alpha(str4));
	printf("str5: %s, is_alpha: %d\n", str5, ft_str_is_alpha(str5));
	printf("str6: %s, is_alpha: %d\n", str6, ft_str_is_alpha(str6));
	return (0);
}