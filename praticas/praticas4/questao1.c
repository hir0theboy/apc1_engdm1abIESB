#include <stdio.h>
#define LIMITE 10

int main() {
  int numeros[LIMITE];

  for (int i=0; i<LIMITE; i++) {
    printf("Entre com o %io numero: ", i+1);
    int deu_certo = scanf("%i", &numeros[i]);
  }

  int numero;
  printf("Entre com o numero a ser procurado: ");
  int deu_certo = scanf("%i", &numero);
  int achei = -1;

  for (int i=0; i<LIMITE; i++) {
    if (numero == numeros[i]){
      achei = 1;
      break;
    }
  }
  
if (achei < 0) {
  printf("O numero %i nao foi encontrado.\n", numero);
}
  else {
    printf("O numero %i foi encontrado na posicao %i.\n", numero, achei);
  }



  return 0;
}