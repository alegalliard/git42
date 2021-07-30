
#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int num1 = 65;
	int num2 = 17;
	int divisao;
	int modulo;

	printf("\n\n========Testando o C01 ex03======== \n");
	printf("\nCalculando %d com %d \n", num1, num2);

	ft_div_mod(num1, num2, &divisao, &modulo);

	printf("Divisão = %d\n", divisao);
	printf("Módulo = %d \n", modulo);
}
