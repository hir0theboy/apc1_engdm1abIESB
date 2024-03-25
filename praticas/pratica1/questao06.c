#include <stdio.h>
#include <math.h>

int main () {
  int a;
  int b; 
  int c; 

  printf("insira o valor de a: ");
    int deu_certo = scanf("%i", &a);

  printf("insira o valor de b: \n");
    deu_certo = scanf("%i", &b);

  printf("insira o valor de c: \n");
    deu_certo = scanf("%i", &c);

  double delta = pow(b, 2) - 4 * a * c;
  printf("o valor de delta eh %.2f\n", delta);
  
  double raiz1 = (-b + sqrt(delta)) / (2 * a);
  double raiz2 = (-b - sqrt(delta)) / (2 * a);

  if (delta < 0)
    printf("nao existe raiz real\n");
  else if (delta >= 0)
  printf("as raizes da equacao sao %.2f e %.2f\n", raiz1, raiz2);
}