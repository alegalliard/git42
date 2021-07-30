
#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);

int main(void)
{
	int num = 2;

	ft_ft(&num);

	printf("\n\n========Testando o C01 ex00======== \n");
	printf("%d \n", num);
}
