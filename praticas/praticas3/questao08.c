#include <stdio.h> 

int main() { 
  long int numero;
  long int fatorial;

  printf("entre com um numero: ");
  int deu_certo = scanf("%li", &numero);

  if (deu_certo && numero >= 0) {
    printf("%li! = ", numero);
    for(int i = numero; i > 1; i--) {
      printf("%i x ", i);
      fatorial = fatorial * i;
    }
    printf("1 = %li\n", fatorial);
  } else {
    printf("numero invalido");
  }
  

return 0;
}