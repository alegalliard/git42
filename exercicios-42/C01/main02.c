
#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b);

int main(void)
{
	int num1 = 6;
	int num2 = 2;

	printf("\n\n========Testando o C01 ex02======== \n");
	printf("\nEra %d e %d \n", num1, num2);

	ft_swap(&num1, &num2);

	
	printf("Agora é %d e %d \n", num1, num2);
}
