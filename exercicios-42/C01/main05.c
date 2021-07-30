#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *a);

int main(void)
{
	char *la = "Jon bon xóviS";
	//la  = "Jon bon xóviS";

	printf("\n\n========Testando o C01 ex05======== \n");
	ft_putstr(la);
	printf("\n\n");
}

/*

	// int		i;

	// i = 0;
	// while (str[i] != '\0')
	// {
	// 	write(1, &str[i], 1);
	// 	i++;
	// }

*/