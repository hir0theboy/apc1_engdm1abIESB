#include <stdio.h>

int main() {
int numero1;
int numero2;

  printf("entre com o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf("entre com o segundo numero: ");
  deu_certo = scanf("%i", &numero2);

  int divisao = numero1 / numero2;
  int resto = numero1 % numero2;

  printf("o resultado da divisao eh %i e o resto eh %i\n",divisao, resto);
  

    



  return 0;
}