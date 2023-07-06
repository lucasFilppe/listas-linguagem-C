/*Escreva um programa que aloque dinamicamente uma matriz (de inteiros) de dimens ˜oes
definidas pelo usu ´ario. Em seguida, implemente uma func¸ ˜ao que receba um valor, re-
torne 1 caso o valor esteja na matriz ou retorne 0 caso n ˜ao esteja na matriz.*/
#include <stdio.h>
#include<stdlib.h>

//funbção para ler matriz
int** matriz(int l, int c){
    int **m = (int**)malloc(l * sizeof(int*));

    for (int i = 0; i < l; i++)
    {
        m[i] = (int*)malloc(c * sizeof(int));
    }
    
    return m;

}

int main(){


    return 0;
}