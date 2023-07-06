#include <stdio.h>
#include <stdlib.h>

int* alocaVetor(int tamanho) {
    int* vetor = (int*)malloc(tamanho * sizeof(int));
    return vetor;
}

void lerVetor(int* vetor, int tamanho) {
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
}

int main() {
    int tamanho;
    int* vetor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = alocaVetor(tamanho);

    if (vetor == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }

    lerVetor(vetor, tamanho);

    printf("Vetor lido:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}
