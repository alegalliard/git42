#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int		a;
	int 	b;
	int 	*ptr;
	int 	*ptr2;
	int 	**ptr3;

	ptr = &a;
	// printf("%p\n", ptr); //mostra no endereço da memória do a
	
	ptr = &b;
	// printf("%p\n", &b); //endereço da memória do b
	// printf("%p\n", ptr); //endereço da memória virtual que aponta pro b

	ptr2 = ptr;
	ptr3 = &ptr2;
	// printf("%p\n", ptr3); //pointer para o pointer


	int 	c;
	int 	*ptr01;
	int 	**ptr02;
	int 	***ptr03;
	int 	****ptr04;
	int 	*****ptr05;
	int 	******ptr06;

	c = 42;
	ptr01 = &c;
	ptr02 = &ptr01;
	ptr03 = &ptr02;
	ptr04 = &ptr03;
	ptr05 = &ptr04;
	ptr06 = &ptr05;

	printf("%d\n", ******ptr06); //retorna o valor da variável
	printf("%p\n", &ptr06); //retorna o endereço de memória

	// write(1, &ptr06, 1); //retorna 8
	// write(1, &ptr06, 2); //retorna ��
	// write(1, ******&ptr06, 1); //retorna *
	// write(1, ******&ptr06, 2); //retorna *
	// write(1, ******&ptr06+'0', 2); //retorna �
	// write(1, ptr06+'0', 2); //retorna �'
	// write(1, ptr06, 2); //retorna 0

	//Somando pointer:
	// "pointer pra variáve +1 não é +1 byte"

	int aa;
	int bb;
	int *ptr00;

	bb=23;
	aa=12;
	ptr = &b;
	printf("%p\n", ptr00);
	printf("%p\n", &bb);
	printf("%p\n", ptr -1);
	printf("%p\n", *(ptr - 1));
	//*(ptr - 1) = 78;
	printf("%p\n", &aa);

	return(0);
}