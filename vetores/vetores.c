/*1. Vetores

Criar as seguintes funções que manipulam um vetor de inteiros passado em parâmetro:
- 'inicializar' que inicializa o vetor passado em parâmetro
- 'imprimir' que imprime os valores do vetor
- 'palindrome' que verifica se o vetor é um palindroma
- 'inverter' que inverte os elementos do vetor

Criar o programa principal que testa as funções*/

#include<stdio.h>
#define HAY_MAX 10

//Inicializa o vetor
void inicializa(int vetor[HAY_MAX]){
    for (int i = 0; i < HAY_MAX; i++)
    {
        if (i<((HAY_MAX/2)))
        {
            vetor[i] = i;
        }else{
            vetor[i] = HAY_MAX - (i+1);
        }
    }
}


//Imprime os valores dos vetores
void imprime(int vet[HAY_MAX]){
    for (int i = 0; i < HAY_MAX; i++)
    {
        printf("Vetor[%i] = %i\n", i, vet[i]);
    }
    
}
int
main(void){
    //cria o vetor
    int vetor[HAY_MAX];

    //inicializa
    inicializa(vetor);

    //imprime
    imprime(vetor);

}