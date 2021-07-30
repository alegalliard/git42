
// #include <unistd.h>

// char	*ft_strcpy(char *dest, char *src);

// int main(void)
// {

//     char destiny[7];

//     ft_strcpy(destiny, "BATATA");
//     write(1, destiny, 7);
//     return (0);
// }


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);

int main(void)
{
	char *src;
	char *dest;
	char *ret;

	char *original_src;
	char *original_dest;
	char *original_ret;

	src = calloc(20, sizeof(char));
	dest = calloc(19, sizeof(char));
	src = "loro quer biscoitoo";
	ret = ft_strcpy(dest, src);

	original_src = calloc(20, sizeof(char));
	original_dest = calloc(19, sizeof(char));
	original_src = "loro quer biscoitoo";
	original_ret = ft_strcpy(original_dest, original_src);

	printf("\n Meu: %s ", ret);
	printf("\n Ori: %s \n", original_ret);

	printf("\n== %s \n", strcpy(dest, src));
	printf("src : %s\n", src);
	printf("dest: %s\n", dest);
	printf("ret : %s\n", ret);




	return (0);
}
