#include <stdio.h>

void insertionSort(int vetor[], int tamanho);
void exibeVetor(int vetor[], int tamanho);

int main()
{
	int meuVetor[5] = {24, 12, 36, 1, 7};

	printf("Vetor original: ");
	exibeVetor(meuVetor, 5);
	insertionSort(meuVetor, 5);
	printf("Vetor ordenado: ");
	exibeVetor(meuVetor, 5);

	return 0;
}

void insertionSort(int vetor[], int tamanho)
{
	int contador, aux, chave;

	for (contador = 1; contador < tamanho; contador++)
	{
		chave = vetor[contador];
		aux = contador - 1;

		while (aux >= 0 && vetor[aux] > chave)
		{
			vetor[aux + 1] = vetor[aux];
			aux--;
		}
		vetor[aux + 1] = chave;
	}
}

void exibeVetor(int vetor[], int tamanho)
{
	int contador;

	for (contador = 0; contador < tamanho; contador++)
		printf("[%d]", vetor[contador]);
	printf("\n");
}
