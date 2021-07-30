# git42

Esse é um projetinho maroto pra galera da 42 testar o Git para além do add, commit e pull.

## Como usar esse projeto:

### Usando o Github do zero

É pra vida também, hihihi.

1. Crie uma conta no site do Github https://github.com/.
1. Agora será necessário configurar uma uma chave SSH pra poder fazer commits nesse repositório, seguindo os passo a seguir:
	1. Clique no seu perfil (canto superior direito) pra abrir o menu;
	1. Vá em [Settings](https://github.com/settings/profile), [SSH and GPG keys](https://github.com/settings/keys), [New SSH key](https://github.com/settings/keys) no para adicionar uma chave SSH;
	1. Volte pro terminal da 42 rode o comando `cat ~/.ssh/id_rsa.pub` para exibir a chave ssh, copie eu conteúdo (desde o ssh-rsa até o fim do e-mail. O conteúdo deve ficar algo como ssh-rsa ABC...[sopa de letrinhas linguiçônica]...Wxyz== <email@email>);
	1. De volta ao painel do Git, dê um nome para chave e cole o conteúdo da chave ssh no campo de texto;
	1. Volte para o terminal da intra e teste se a chave foi configurada com sucesso seguindo o comando `ssh -T git@github.com`.






1- Dê um clone nesse repositório no seu terminal e entre na pasta.

```sh
git clone git@github.com:alegalliard/git42.git
cd git42/
```


### Clonando o repositório

1. Crie uma pasta com o seu login e um arquivo `main.c` dentro. Se ainda não souber como faz, copie e renomeie a pata `__baseC`;
1. Faça uma nova branch com seu login da 42 e mude para ela;
1. Envie o seu login do Github no privado do Discord para o meu login (adias-de) para que eu possa te enviar um convite;
1. Aceite o convite pra colaborar com este repositório;
1. Crie uma branch com o nome branch-<seu-login>;
1. Faça o seu primeiro commit e push.

```sh
git checkout -b branch-<seu-login>
git add .
git commit -m "<Sua mensagem>"
git push origin branch-<seu-login>
```

Se quiser, você pode commitar também um arquivo txt dentro da sua pasta chamado `duvidas.txt`, listando suas perguntas, fazer um push delas.

**Importante:** no Github a branch padrão é o **main** ao invés da master. Iremos trabalhar em branches isoladas inicialmente.

That's all, folks!

Vamos praticar like a boss

![Praticar](https://i.giphy.com/media/dZfYddDBa5hDO/giphy-downsized-large.gif "Bollywood Norris.")


Salut!


# Coisas a mais nesse repositório

Exercícios da 42 com testes da fake moulinette
https://github.com/eduardomosko/fake-moulinnete/, lembrar de fazer pull requests depois.

### Documentação de suporte

* [Verificando se existe uma chave ssh na sua máquina](https://docs.github.com/en/github/authenticating-to-github/connecting-to-github-with-ssh/checking-for-existing-ssh-keys) 
* [Como gerar uma chave SSH do zero](https://docs.github.com/en/github/authenticating-to-github/connecting-to-github-with-ssh/generating-a-new-ssh-key-and-adding-it-to-the-ssh-agent);
* [Como adicionar uma chave SSH no painel do Github](https://docs.github.com/en/github/authenticating-to-github/connecting-to-github-with-ssh/adding-a-new-ssh-key-to-your-github-account)
