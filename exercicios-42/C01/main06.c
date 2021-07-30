#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *a);

int main(void)
{
	char la[] = "Bon xóvi";
	int total = ft_strlen(la);
	printf("\n\n========Testando o C01 ex06======== \n");
	printf("%d \n", total);
}