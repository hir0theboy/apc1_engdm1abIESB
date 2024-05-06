#include <stdio.h>

int main(){
  int numero;


  printf("entre com um numero entre 1 e 100: ");
  int deu_certo = scanf("%i", &numero);

  if (deu_certo && numero >0 && numero <= 100) {
    printf("multiplos de %i entre 1 e 100:\n", numero);
    // for (int i = 1; i <= 100; i++) {
    //   if (i % numero == 0) {
    //     printf("%i, ", i);
    //   }
    // }
    for (int i = numero; i <= 100; i += numero) {
      printf("%i, ", i);
    }
  } else {
    printf("entrada invalida\n");
  }
  return 0;
}