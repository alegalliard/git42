#include <stdio.h>
//SIGNED = "use o sinal"
//UNSIGNED = NÃO use o sinal, equivalente a pedir pro C converter valores negativos em um positivo equivalente em bits
//declarar sign char ou somente char é a mesma coisa
// o char por padrão vai de uma faixa de -127 a 127
// unsign força a utilizar o bit de sinal como bit pra compor o número, vai de 0 até 255
signed char letra;
unsigned char outraletra;
char letrapadrao; //1 byte = 8 bits. Dá pra representar 256 elementos de 1 byte
//  Se for int, pode ser 127 a 127 ou de 0 até 255
//Quando uso o unsigned eu pego o range dos positivos (0 - 255)
int main()
{
	letrapadrao = 'A';
	printf("\n=====\n%c\n", letrapadrao); // retorna A
	printf("%i\n", letrapadrao); // retorna um int, o código da tabela ASCII

	letrapadrao = 66;
	printf("\n=====\n%c\n", letrapadrao); // retorna B, pois 66 é a referência para B na tabela ASCII
	printf("%i\n", letrapadrao); // retorna 66

	letrapadrao = -30;
	printf("\n=====\n%c\n", letrapadrao); // retorna cagado
	printf("%i\n", letrapadrao); // retorna -30


	outraletra = -30;
	printf("\n=====\n%i\n", outraletra); // 226, pois ele vai pegar o conjunto de bits e retornar o equivalente ao valor positivo

	letra = -30;
	printf("\n=====\n%i\n", letra);


	// outraletra = -30;
	// printf("\n=====\n%c\n", outraletra); // r
	// printf("%i\n", outraletra); // 
}