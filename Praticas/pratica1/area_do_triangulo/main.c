#include <stdio.h>

int main() {

    //entrada
  
  float base;
  float altura;

  
  base = 2.0f; // 2.0f (float) 2.0 (double)
  altura = 3.0f;

    //processamento

float area = base*altura/2; //armazenando resultado em uma variavel

    //saida
  
  printf("A area do triangulo eh: %f\n", area);
  
return 0;
}