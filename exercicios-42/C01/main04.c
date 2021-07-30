
#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int num1 = 90;
	int num2 = 15;

	printf("\n\n========Testando o C01 ex04======== \n");
	printf("\nIr %d e %d \n", num1, num2);

	ft_ultimate_div_mod(&num1, &num2);

	printf("Divisão de %d\n", num1);
	printf("Módulo de %d \n", num2);
}
