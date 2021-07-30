#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;
	char *str5;

	str1 = calloc(11, sizeof(char));
	str2 = calloc(11, sizeof(char));
	str3 = calloc(11, sizeof(char));
	str4 = calloc(1, sizeof(char));
	str4 = calloc(0, sizeof(char));
	str1 = "2345678";
	str2 = "meio amargo";
	str3 = "0123:56789";
	str4 = "0";
	str5 = "";
	printf("str1: %s, is_num: %d\n", str1, ft_str_is_numeric(str1));
	printf("str2: %s, is_num: %d\n", str2, ft_str_is_numeric(str2));
	printf("str3: %s, is_num: %d\n", str3, ft_str_is_numeric(str3));
	printf("str4: %s, número zero: %d\n", str4, ft_str_is_numeric(str4));
	printf("str5: %s, vazio: %d\n", str5, ft_str_is_numeric(str5));

	return (0);
}