/*
2. Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.
*/

#include <stdio.h>

int main() {

    //entrada
  
  float base;
  float altura;

  
  base = 2.0f; // 2.0f (float) 2.0 (double)
  altura = 3.0f;

  printf("entre com o valor da base: ");
  int deu_certo = scanf("%f", &base);

  printf("entre com o valor da altura: ");
  deu_certo = scanf("%f", &altura);

    //processamento

float area = base*altura/2; //armazenando resultado em uma variavel

    //saida
  
  printf("A area do triangulo eh: %f\n", area);
  
return 0;
}