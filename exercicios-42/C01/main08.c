
#include <unistd.h>
#include <stdio.h>

void andale(int *tab, int size);
void ft_sort_int_tab(int *tab, int size);

int main(void)
{
	printf("\n\n========Testando o C01 ex08======== \n");
	int tab[] = {5,7,2,4,90,78,34,66,10,12,17,56,34,0,1,8};
	int size =  sizeof(tab)/sizeof(tab[0]);
	printf("Iniciou com: \n");
	andale(tab, size);

	ft_sort_int_tab(tab, size);
	printf("\n\nAcabou assim: \n");
	andale(tab, size);
	// printf("\n================================= \n\n");
}

void andale(int *tab, int size)
{
	int i = 0;
	
	while(i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}