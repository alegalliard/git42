#!/bin/bash

# Pergunta qual a versão do Rush o usuário quer executar
read -p "Escolha a versão do Rush de 0 a 4. (Nosso Rush é o 1): "  RUSH_VERSION

# Verifica o usuário digitou um parâmetro inváldo para o Rush
function rush_invalido()
{
	if [[ $RUSH_VERSION -lt 0 || $RUSH_VERSION -gt 4 ]]; then
			echo "Versão do Rush precisa ser entre 0 e 4."
			exit;
	fi
}
rush_invalido #chama a função acima



# Se o usuário não digitar nada ou 1 será o nosso Rush
if [[ -z $RUSH_VERSION || $RUSH_VERSION -eq 1 ]]; then
		RUSH_VERSION='';
fi

# Pega entradas para alterar o main.c
read -p "Digite o número de linhas: "  LINHAS
read -p "Digite o número de colunas: "  COLUNAS

function verifica_linhas_e_colunas()
{
	if [[ -z $LINHAS || $LINHAS -lt 1 || -z $COLUNAS || $COLUNAS -lt 1 ]]; then
		echo "Número de linhas ou colunas inválido."
		exit;
	fi
}
verifica_linhas_e_colunas  #chama a função acima

# Se passar por todas as verificações acima, ele vai pra execução




#  = = = = = = = = = Execução do Rush = = = = = = = = = = = = = = =

# Função para reescrever o rush() dentro do main.
# Baseado nas entradas do usuário, a função abaixo vai pegar o
# main.c e substituir a chamada do para rush(LINHAS, COLUNAS)
function substituir_parametros_do_main()
{
	# Passa o sed no main.c pra alterar os parâmetros da função rush, onde...
	# -i = atualiza o arquivo
	# "s/.../g" com o /s inicializando a expressão regular e o /g setando para 
	#											 buscar globalmente no arquivo
	# Expressão regular:
	# 1- rush ( = encontra a expressão rush seguida de espaço e parênteses
	# 2- [[:digit:]] = encontra número
	#	com \+ encontra um ou mais dígitos juntos. 
	#	Tem duas sequências de dígitos separados por vírgula e espaço,
	#	representando o x e o y do código;
	# 3- ) = fecha os parênteses da função rush()

	echo "Gerando um novo main com $LINHAS linhas e $COLUNAS..."

	sed -i "s/rush ([[:digit:]]\+, [[:digit:]]\+)/rush ($LINHAS, $COLUNAS)/g" ./ex00/main.c
}


# Função para compilar e executar o Rush escolhido
# Aqui, ele irá usar o RUSH_VERSION como parâmetro pra escolher
# qual dos ft_putchar.c será executado.
# Se o RUSH_VERSION for 2, por ex., o compilador vai executar
# o gcc assim: gcc ... ft_putchar2.c main.c ...etc

function escolher_rush()
{
	OUTPUT=./bin/paula.out

	substituir_parametros_do_main

	echo "Testando e compilando..."
	norminette

	gcc -Wall -Wextra -Werror ./ex00/rush01.c \
		./ex00/ft_putchar$RUSH_VERSION.c \
		./ex00/main.c \
		-o $OUTPUT

	echo "E o resultado foi:"
	$OUTPUT
}

# Executa a função de escolher o rush
escolher_rush


