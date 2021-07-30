#include <stdio.h>
#include <unistd.h>

int main(void)
{
	void *pointer_vazio;
	int *pointer_int;
	char *pointer_char;

	//pointer_int = pointer_char gera um warning por causa do tipo
	pointer_vazio = pointer_char; //funciona, porque o void diz ao computador q ele é genérico

	printf("%d\n", a);

	return(0);
}