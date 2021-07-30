#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int main(void)
{
	int 	c;
	int 	*ptr01;
	int 	**ptr02;
	int 	***ptr03;
	int 	****ptr04;
	int 	*****ptr05;
	int 	******ptr06;
	int 	*******ptr07;
	int		********ptr08;
	int		*********ptr09;

	c = 43332;
	ptr01 = &c;
	ptr02 = &ptr01;
	ptr03 = &ptr02;
	ptr04 = &ptr03;
	ptr05 = &ptr04;
	ptr06 = &ptr05;
	ptr07 = &ptr06;
	ptr08 = &ptr07;
	ptr09 = &ptr08;
	
	ft_ultimate_ft(ptr09);
	printf("\n\n========Testando o C01 ex01======== \n");
	printf("%d \n", c);
}
