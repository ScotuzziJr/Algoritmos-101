#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int vetor[], int tamanho);
void swap(int* numUm, int* numDois);
void exibeVetor(int vetor[], int tamanho);

int main()
{					
	int meuVetor[8] = {73, 7, 12, 18, 24, 35, 49, 1};

	printf("Vetor original: ");
	exibeVetor(meuVetor, 8);
	bubbleSort(meuVetor, 8);
	printf("Vetor ordenado: ");
	exibeVetor(meuVetor, 8);
	return 0;
}

void bubbleSort(int vetor[], int tamanho)
{
	int contador, flag;
	// int loopControl = 0;

	do
	{
		/*
		flag -> variável de controle
		sempre que o algoritmo encontrar elementos desordenados, essa variável será incrementada
			indicando que o vetor ainda não está ordenado;
		
		*/
		flag = false;
		
		for (contador = 0; contador < tamanho; contador++)
		{
			// teste que avalia se existem elementos fora de ordem;
			if (vetor[contador] > vetor[contador + 1])
			{
				swap(&vetor[contador], &vetor[contador + 1]);
				flag = true;
			}
			// loopControl++;
		}
	} while (flag != 0);

	// o printf abaixo serve somente para contar as comparações feitas e analisar a complexidade do algoritmo
	// printf("Comparacoes feitas: %d\n", loopControl);
}

void swap(int* numUm, int* numDois)
{
	int temp;
	
	temp = *numUm;
	*numUm = *numDois;
	*numDois = temp;
}

void exibeVetor(int vetor[], int tamanho)
{
	int contador;

	for (contador = 0; contador < tamanho; contador++)
		printf("[%d]", vetor[contador]);
	printf("\n");
}
