#include <stdio.h>

int main() {
  int numero;

  printf("Entre com um numero: ");
  int deu_certo = scanf(" %d", &numero);

  if (deu_certo) {
    if (numero % 2 == 0) {
      printf("O numero eh par\n");
    } else {
      printf("O numero eh impar\n");
    }
  }
  else {
    printf("Numero/caractere invalido\n");
  }
  return 0;
}
