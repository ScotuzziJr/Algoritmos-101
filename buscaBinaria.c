#include <stdio.h>

int buscaBinaria(int vetor[], int tamanho, int chave);

int main()
{
    int meuVetor[5] = {12, 24, 36, 45, 51};

    printf("%d\n", buscaBinaria(meuVetor, 5, 51));
    return 0;
}

int buscaBinaria(int vetor[], int tamanho, int chave)
{
    int inicio = 0;
    int final = tamanho - 1;
    int meio;

    while (inicio <= final)
    {
        meio = (inicio + final) / 2; // indice central da lista

        if (vetor[meio] > chave)
            final = meio - 1;
        else if (vetor[meio] < chave)
            inicio = meio + 1;
        else
            return meio;
    }

    return -1;
}
