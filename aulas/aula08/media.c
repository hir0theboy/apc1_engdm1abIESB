#include <stdio.h>

int main() {

  float nota1;
  float nota2;

  printf("Entre com a primeira nota: ");
    int deu_certo = scanf("%f", &nota1);

  if(nota1 >= 0.0f && nota1 <= 10.0f && deu_certo) {
    printf("Entre com a segunda nota: ");
    deu_certo = scanf( "%f", &nota2);
    if(nota2 >= 0.0f && nota2 <= 10.0f && deu_certo) {
      float media = 0.4f * nota1 + 0.6f * nota2;
      printf("A media eh %.1f\n", media);
    }
    else {
      printf("Segunda nota invalida\n");
    }
  }
  else{
    printf("Primeira nota invalida\n");
  }
  return 0;
}