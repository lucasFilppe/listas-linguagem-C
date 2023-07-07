/*Escreva um programa que aloque dinamicamente uma matriz (de inteiros) de dimens ˜oes
definidas pelo usu ´ario. Em seguida, implemente uma func¸ ˜ao que receba um valor, re-
torne 1 caso o valor esteja na matriz ou retorne 0 caso n ˜ao esteja na matriz.*/

#include <stdio.h>
#include <stdlib.h>

// Função que aloca matriz
int** alocaMatriz(int linhas, int colunas) {
    int** m = (int**)malloc(linhas * sizeof(int*));

    for (int i = 0; i < linhas; i++) {
        m[i] = (int*)malloc(colunas * sizeof(int));
    }

    return m;
}

// Função que verifica valor
int verificaValor(int** m, int linhas, int colunas, int valor) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (m[i][j] == valor) {
                return 1;  // Valor encontrado na matriz
            }
        }
    }
    return 0;  // Valor não encontrado na matriz
}

// Função para ler matriz
void leMatriz(int** m, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("matriz[%d][%d]= ", i, j);
            scanf("%d", &m[i][j]);
        }
        printf("\n");
    }
}

// Função para liberar memória alocada para a matriz
void liberaMatriz(int** m, int linhas) {
    for (int i = 0; i < linhas; i++) {
        free(m[i]);
    }
    free(m);
}

int main() {
    int linhas, colunas, valor;

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &linhas);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &colunas);

    int** matriz = alocaMatriz(linhas, colunas);
    leMatriz(matriz, linhas, colunas);

    printf("Digite o valor que deseja verificar na matriz: ");
    scanf("%d", &valor);

    // Verifica o retorno da função
    if (verificaValor(matriz, linhas, colunas, valor) == 1) {
        printf("Valor encontrado na matriz.\n");
    } else {
        printf("Valor não encontrado na matriz.\n");
    }

    // Libera memória alocada para a matriz
    liberaMatriz(matriz, linhas);

    return 0;
}
