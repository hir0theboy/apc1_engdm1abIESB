#include <stdio.h> 

int main() { 
  int numero;
  int fatorial;

  printf("entre com um numero: ");
  int deu_certo = scanf("%i", &numero);

  if (deu_certo && numero >= 0) {
    for(int i = numero; i > 1; i--) {
      fatorial = fatorial * i;
    }
    printf("o fatorial do %i = %i\n", numero, fatorial);
  } else {
    printf("numero invalido");
  }
  

return 0;
}