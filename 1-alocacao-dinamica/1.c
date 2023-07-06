/*1. Fac¸a um programa que leia do usuario o tamanho de um vetor a ser lido, fac¸a a alocac¸ ´ ao˜
dinamica de mem ˆ oria, leia do usu ´ ario seus valores inteiros e imprima o vetor lido.  */
#include <stdio.h>
#include<stdlib.h>

int main(){

  int n;

  //le tamanho do vetor
printf("Digite o tamanho do vetor: ");
scanf("%d", &n);

int* vetorDinamico =  (int*)malloc(n * sizeof(int));

//lendo valores do vetor
printf("Digite os valores do vetor: ");
for (int i = 0; i < n; i++)
{
  scanf("%d", &vetorDinamico[i]);
}
printf("\n\n");

printf("Imprimindo vetor\n");
for (int i = 0; i < n; i++)
{
  printf("%d ", lsvetorDinamico[i]);
}
printf("\n\n");
  return 0;
}