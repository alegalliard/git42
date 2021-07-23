#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int tab[3]; //o compilador sabe que tab é o nome do endereço
				//passar o 3 diz ao compilador quantos espaços de memória quero alocar
	int *ptr;
	tab[0] = 478;

	ptr = tab;
	printf("%p\n", ptr); //retorna o endereço da memória
	printf("%d\n", *tab); //print 478
	printf("%d\n", *(tab + 1)); //print 32764
	printf("%d\n", *(tab - 1)); //print 32764


	int tab0[3];
	int *tab02[2];

	tab0[2] = 145;
	tab02[1] = tab0;
	// tab02[1][2] = 18; //se descomentar essa linha, ele vai sobrescrever o 145 pra 18
	// *(tab02[1] + 2) = 18;
	// *(*(tab02 + 1) + 2) = 19; //se descomentar essa linha, ele vai sobrescrever o 145 pra 19. É quivalente a fazer tab0[2] 
	printf("%d\n", *(tab0 + 2)); //print 145, porque faz o equivalente a tab0[2]
	printf("%d\n", tab0[2]); //print 145, porque faz o equivalente a tab0[2]

	return(0);
}