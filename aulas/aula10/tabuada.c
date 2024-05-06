#include <stdio.h> 

int main() {
int numero;

  printf("entre com um numero de 1 a 10: ");
  int deu_certo = scanf("%i", &numero);


  if (deu_certo && numero >= 1 && numero <= 10) {
    printf("Tabuada de %i:\n", numero);
    for (int i = 1; i <= 10; i++) {
      printf("%i x %i = %i\n", numero, i, numero * i);    
    }
  } else {
    printf("entrada invalida\n");
  }
  



  return 0;
}