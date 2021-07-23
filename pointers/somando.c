#include <stdio.h>
#include <unistd.h>

void so_copia_o_endereco(int a)
{
	a = a + 42;
}

void soma_o_valor_de_verdade(int *b)
{
	*b = *b + 42;
}

int main(void)
{
	int a;
	a = 42;

	printf("%d\n", a);	//42
	so_copia_o_endereco(a);
	printf("%d\n", a); //42

	int b;
	b = 42;
	printf("%d\n", b);	//42
	soma_o_valor_de_verdade(&b); //passa o valor do pointer
	printf("%d\n", b); //84

	/* Escrevendo errado:

	int *ptr;
	ptr = 42; 
	dá errado porque ele tenta sobrescrever um pointer com um int
	Passar o *ptr é só passar o endereço da memória.
	Só não dá erro se ptr = 0, porque por convenção trata-se de um NULL POINTER
	e ele aponta pra nada. Também é uma forma de dizer "pointer, não aponte pra 
	nada ainda


	return(0);
}