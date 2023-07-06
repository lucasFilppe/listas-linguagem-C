#include <stdio.h>

#define MAX_NUMEROS 100

int main() {
    int numeros[MAX_NUMEROS];
    int i, numero;

    // Leitura dos números
    for (i = 0; i < MAX_NUMEROS; i++) {
        printf("Digite um número (negativo para parar): ");
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }

        numeros[i] = numero;
    }

    // Imprimir o vetor lido
    printf("Números lidos: ");
    for (int j = 0; j < i; j++) {
        printf("%d ", numeros[j]);
    }
    printf("\n");

    return 0;
}
