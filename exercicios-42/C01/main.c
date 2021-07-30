#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);

int main(void)
{
	int i;
	// ft_ft(&i);

	int p;
	int *p0;
	int **p1;
	int ***p2;
	int ****p3;
	int *****p4;
	int ******p5;
	int *******p6;
	int ********p7;
	int *********p8;

	p = 1;
	p0 = &p;
	p1 = &p0;
	p2 = &p01;
	p3 = &p02;
	p4 = &p03;
	p5 = &p04;
	p6 = &p05;
	p7 = &p06;
	p8 = &p07;
	

	ft_ultimate_ft(int *********nbr);

	printf("%d", i);
}