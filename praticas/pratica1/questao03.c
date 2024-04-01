#include <stdio.h>

int main() {

  const float PI = 3.1416;
  int raio;
  printf("insira o raio da pizza: ");
  int deu_certo = scanf("%i", &raio);
  int perimetro = 2 * PI * raio;

  printf("o perimetro da pizza eh %i\n", perimetro);
  
}