#include<stdio.h>

#define HAY_MAX 4


//incicializa a matriz
void incicializa(int matriz[HAY_MAX][HAY_MAX]){
	int pnc = 1;
	for (int i = 0; i < HAY_MAX; i++)
	{
		for (int j = 0; j < HAY_MAX; j++)
		{
			matriz[i][j] = pnc;
			pnc++; 
		}
	}
}


//inverte as posições
void inverte(int mat[HAY_MAX][HAY_MAX]){
	for (int i = 0; i < HAY_MAX; i++)
	{
		for (int j = 0; j < HAY_MAX; j++)
		{
			if (i != j && j<i)
			{
				int aux = mat[i][j];
				mat[i][j] = mat[j][i];
				mat[j][i] = aux;
			}
		}
	}
}

//imprime a matriz
void imprime(int mat[HAY_MAX][HAY_MAX]){
	for (int i = 0; i < HAY_MAX; i++)
	{
		for (int j = 0; j < HAY_MAX; j++)
		{
			printf("matriz[%d][%d] = %d\t", i, j, mat[i][j]); 
		}
		printf("\n");
	}
}

//maltiplica a matriz
int multiplica(int mat[HAY_MAX][HAY_MAX]){
	int ret = mat[HAY_MAX-1][HAY_MAX-1];
	for (int i = 0; i < HAY_MAX; i++)
	{
		for (int j = 0; j < HAY_MAX; j++)
		{
			ret = ret*mat[i][j];
		}
	}
	return ret;
}


int
main(void){
    int matriz[HAY_MAX][HAY_MAX];
    incicializa(matriz);

    printf("matriz original:\n");
	imprime(matriz);
	printf("\n");

	inverte(matriz);

	printf("matriz invertida:\n");
	imprime(matriz);

    int mult = multiplica(matriz);
    printf("Valor da matriz = %d\n", mult);
}
