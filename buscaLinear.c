#include <stdio.h>

int buscaLinear(int vetor[], int tamanho, int chave);

int main()
{
    int meuVetor[5] = {12, 27, 36, 45, 91};

    printf("%d\n", buscaLinear(meuVetor, 5, 38));
    return 0;
}

// -> essa implementação percorre o vetor inteiro e independe da ordenação do mesmo
int buscaLinear(int vetor[], int tamanho, int chave)
{
    for (int contador = 0; contador < tamanho; contador++)
        if (vetor[contador] == chave)
            return contador;

    return -1;
}

/* 
-> essa implementação interrompe a busca quando o elemento atual é maior que a chave
-> isso pressupõe a ordenação do vetor
-> embora a busca binária seja mais efetiva no caso de vetores ordenados, essa implementação
    foi para fins de estudo

int buscaLinear(int vetor[], int tamanho, int chave)
{
    for (int contador = 0; contador < tamanho; contador++)
    {
        if (vetor[contador] == chave)
            return contador;
        else if (vetor[contador] > chave)
            return -1;
    }
}
*/
