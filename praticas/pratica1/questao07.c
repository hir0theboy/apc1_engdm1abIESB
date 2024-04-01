#include <stdio.h>
#include <math.h>


int main() {
int angulo;
int altura;
int distancia;

  printf("entre com o valor do angulo: ");
    int deu_certo = scanf("%i", &angulo);

  printf("entre com o valor da distancia em metros: ");
  deu_certo = scanf("%i", &distancia);

  altura = distancia * sin(angulo);

  printf("o valor da altura em metros eh %i\n", altura);
  
  

  

  return 0;
}