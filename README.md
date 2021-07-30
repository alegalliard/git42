# git42

Esse é um projetinho maroto pra galera da 42 testar o Git para além do add, commit, push e pull.

## Como usar esse projeto:

### Usando o Git(hub) do zero

É pra vida também, hihihi.

1. Crie uma conta no site do Github https://github.com/.
1. Agora será necessário configurar uma uma chave SSH seguindo os passo a seguir:
	1. Clique no seu perfil (canto superior direito) pra abrir o menu;
	1. Vá em [Settings](https://github.com/settings/profile), [SSH and GPG keys](https://github.com/settings/keys), [New SSH key](https://github.com/settings/keys) para adicionar uma chave SSH;
	1. Volte pro terminal da 42 rode o comando `cat ~/.ssh/id_rsa.pub` para exibir a chave ssh;
	1. Copie eu conteúdo (desde o ssh-rsa até o fim do e-mail. Deve ficar algo como __ssh-rsa ABC...[sopa de letrinhas linguiçônica]...Wxyz== <email@email>__);
	1. De volta ao painel do Git, cole o conteúdo da chave ssh no campo de texto, dê um nome qualquer para chave e salve;
	1. Volte para o terminal da intra e teste usando `ssh -T git@github.com`.
1. Dê um clone nesse repositório no seu terminal e entre na pasta.

```sh
git clone git@github.com:alegalliard/git42.git
cd git42/
```


### Como fazer commits aqui

1. Envie o seu login do Github no meu privado do Discord (adias-de) para que eu possa te enviar um convite;
1. Aceite o convite. 😱**Importante:** realmente é necessário aceitar o convite antes de seguir para os próximos passos;
1. Crie uma branch com o nome branch-< seu-login >;
1. Crie uma pasta com o seu login e um arquivo `main.c` dentro. Se ainda não souber como faz o .c, faça uma cópia da pasta `__baseC` e renomeie-a com o seu login;
1. Faça o seu primeiro commit e push na sua branch.

```sh
git checkout -b branch-<seu-login>
git add .
git commit -m "<Sua mensagem>"
git push origin branch-<seu-login>
```

**Importante:** no Github a branch padrão é o **main** ao invés da master. Iremos trabalhar em branches isoladas inicialmente.

That's all, folks!

Vamos praticar like a boss.

![Praticar](https://i.giphy.com/media/dZfYddDBa5hDO/giphy-downsized-large.gif "Bollywood Norris.")


Salut!


# Coisas a mais nesse repositório

Exercícios da 42 com testes da fake moulinette
https://github.com/eduardomosko/fake-moulinnete/, lembrar de fazer pull requests depois.

### Documentação de suporte

* [Verificando se existe uma chave ssh na sua máquina](https://docs.github.com/en/github/authenticating-to-github/connecting-to-github-with-ssh/checking-for-existing-ssh-keys) 
* [Como gerar uma chave SSH do zero](https://docs.github.com/en/github/authenticating-to-github/connecting-to-github-with-ssh/generating-a-new-ssh-key-and-adding-it-to-the-ssh-agent);
* [Como adicionar uma chave SSH no painel do Github](https://docs.github.com/en/github/authenticating-to-github/connecting-to-github-with-ssh/adding-a-new-ssh-key-to-your-github-account)
