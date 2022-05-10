/*cria uma estrutura de dados do tipo pessoa*/
#include<stdio.h>
#include<stdlib.h>

//define o tipo endereco como estrutura
typedef struct endereco Endereco;

struct endereco{
	char *rua;
	int numero;
	char *cidade;
	char *CEP;
};

// cria a estrutura pessoa
struct pessoa{
	char *nome;
	int idade;
	Endereco *endereco;
};

//define o tipo Pessoa como estrutura
typedef struct pessoa Pessoa;

//instância a estrutura pessoa
// tipo Pessoa
Pessoa *criar_pessoa (char *nome, int idade, Endereco *end){
	
	//cria e aloca o endereco para var nova
	Pessoa *nova = (Pessoa *) malloc(sizeof (Pessoa));
	
	//atribui os valores para as variáveis
	nova -> nome = nome;
	nova -> idade = idade;
	nova -> endereco = end;
	
	//retorna a variável
	return nova;
};


int
main(int argc, char *argv[]){

	//inicializa uma variavel do tipo Endereco
	Endereco *end = (Endereco *) malloc(sizeof (Endereco));
	
		
	
}
