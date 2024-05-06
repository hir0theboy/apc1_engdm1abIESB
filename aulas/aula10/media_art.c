#include <stdio.h>

int main() {
 int quantidade;
 float numero;
  
  printf("entre com a quantidade de numeros a serem lidos: ");
  int deu_certo = scanf("%i", &quantidade);

  if (deu_certo && quantidade > 0) {
    int soma = 0;
  for (int i = 1; i <= quantidade; i++) {
    printf("entre com o %i° numero: ", i);
    deu_certo = scanf("%f", &numero);
    if (deu_certo) {
      soma = soma + numero;
    } else {
      printf("entrada invalida\n");
      getchar(); //serve para nao ficar lendo infinitamente
      i--;
    }
  }
    float media_aritmetica = soma * 1.0f / quantidade;
    printf("a media aritmetica dos %i numeros eh: %.1f\n", quantidade, media_aritmetica);
    
  } else {
    printf("entrada invalida\n");
  }


  return 0;
}