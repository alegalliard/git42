#include <stdio.h>
#include <unistd.h>

/*
strings não existem para o computador
é um conjunto de bytes encadeados que termina em um byte 0 (\0)
Ex: alo\0
*/
int main(void)
{
	char *str;
	str = "lol";/*l na tabela ASCII, o na tabela ASCII, l na tabela ASCII e \0
	são 4 caracteres na memória
	escrever em aspas duplas significa escrever em constantes, um lugar paticular para indicar
	que algo foi escrito entre aspas e não pode mudar seu valor. Esse endereço não pode ser reescrito
	*/

	//str[0] = 'p'; vai dar erro 
		//%c = char 
		//%s = string da lin do stdio
	printf("%c %s\n", *str, str); //l lol
								  //*str é o endereço do primeiro caracter

	/* Pra poder reescrever uma string é necessário passar um array de caracteres*/
	char str_reescrevivel[] = "lol";
	str_reescrevivel[0] = 'p';
	printf("%c %s\n", *str_reescrevivel, str_reescrevivel); //agora funciona pol

	return(0);
}