#include <stdio.h>

int main(){
int numero;
int multiplos = 0; //cria a variavel que sera verificada se é maior que 2 ou nao (se for nao eh primo)
  
  printf("entre com um numero: ");
  int deu_certo = scanf("%i", &numero);
  
  if (deu_certo && numero > 0) {
    for (int i = 1; i <= numero; i++) {
      if (numero % i == 0) {
        multiplos++;
      }
    }
    if (multiplos == 2) {
      printf("o numero %i eh primo\n", numero);
    } else {
      printf("o numero %i nao e primo\n", numero);
    }
  } else {
    printf("entrada invalida\n");
  }
  


  return 0;
}