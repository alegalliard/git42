#include <stdio.h>

int main(void)
{
	int		a;
	int 	b;
	int 	*ptr;
	int 	*ptr2;
	int 	**ptr3;

	ptr = &a;
	printf("%p\n", ptr); //mostra no endereço da memória do a
	
	ptr = &b;
	printf("%p\n", &b); //endereço da memória do b
	printf("%p\n", ptr); //endereço da memória virtual que aponta pro b

	ptr2 = ptr;
	ptr3 = &ptr2;
	printf("%p\n", ptr3); //pointer para o pointer
	return(0);
}