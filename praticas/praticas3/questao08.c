#include <stdio.h> 

int main() { 
  long int numero;
  long int fatorial;

  printf("entre com um numero: ");
  int deu_certo = scanf("%li", &numero);

  if (deu_certo && numero >= 0) {
    for(int i = numero; i > 1; i--) {
      fatorial = fatorial * i;
    }
    printf("o fatorial do %li = %li\n", numero, fatorial);
  } else {
    printf("numero invalido");
  }
  

return 0;
}