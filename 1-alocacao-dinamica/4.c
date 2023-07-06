/* Fac¸a um programa que leia n inteiros (definidos pelo usuario) armazenando-os em uma ´
memoria alocada dinamicamente. Em seguida, mostre quantos dos n n ´ umeros s ´ ao pares ˜
e quantos sao˜ ´ımpares.*/
#include<stdio.h>
#include <stdlib.h>

int main(){

  //quantidade de numeros interos a serem lidos
  int n;
  int countPar = 0;
  int countImpar = 0;

  printf("Digite a quantidade de numeros: ");
  scanf("%d", &n);

  int* vetorDinamico = (int*)malloc(n * sizeof(int));

  printf("Digite os elemntos do vetor: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &vetorDinamico[i]);

    //se vetor na posiçao[i] for par, entao
    if(vetorDinamico[i] % 2 == 0){
      countPar++;
    }
    else
    {
      countImpar++;
    }
    
  }
  
  printf("\n");
  printf("Quantida de par: %d\n", countPar);
  printf("Quantida de Impar: %d\n", countImpar);
  printf("\n\n");


  return 0;
}