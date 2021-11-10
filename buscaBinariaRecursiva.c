#include <stdio.h>

int buscaBinariaRecursiva(int vetor[], int inicio, int fim, int chave);

int main()
{
  int meuVetor[5] = {12, 24, 36, 45, 51};

  printf("%d\n", buscaBinariaRecursiva(meuVetor, 0, 4, 36));
  return 0;
}

int buscaBinariaRecursiva(int vetor[], int inicio, int fim, int chave)
{
  if (inicio > fim)
    return -1;

  int meio = (inicio + fim) / 2;

  if (vetor[meio] > chave)
    return buscaBinariaRecursiva(vetor, inicio, meio - 1, chave);
  else if (vetor[meio] < chave)
    return buscaBinariaRecursiva(vetor, meio + 1, fim, chave);
  else
    return meio;
}
