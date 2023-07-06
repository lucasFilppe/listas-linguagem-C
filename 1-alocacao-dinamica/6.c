/*Faça um programa em C que receba do usuario o tamanho de uma string e chame uma ´
func¸ao para alocar dinamicamente essa string. Em seguida, o usuario devera informar o ´
conteudo dessa string. O programa imprime a string sem suas vogais. */
#include <stdio.h>
#include<stdlib.h>
#include<string.h>


// Função que aloca uma string
char* alocaString(int tamanho) {
  char* s = (char*)malloc((tamanho + 1) * sizeof(char)); // +1 para o caractere nulo '\0'

  // Lê a string
  printf("Digite a string: ");
  fgets(s, tamanho + 1, stdin);

  return s;
}

// Função que remove as vogais da string
void removeVogais(char* str) {
  int i, j;
  for (i = 0, j = 0; str[i] != '\0'; i++) {
    if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
        str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
      str[j++] = str[i];
    }
  }
  str[j] = '\0'; // Adiciona o caractere nulo '\0' no final da string resultante
}

int main() {
  int n;

  printf("Digite o tamanho da string: ");
  scanf("%d", &n);

  // Limpa o buffer do teclado
  while (getchar() != '\n');

  char* palavra = alocaString(n);

  removeVogais(palavra);

  printf("String sem vogais: %s\n", palavra);

  free(palavra); // Libera a memória alocada

  return 0;
}