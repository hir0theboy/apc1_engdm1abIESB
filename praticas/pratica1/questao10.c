#include <stdio.h>

int main() {
int numero;
int unidade;
int dezena;
int centena;
int milhar;
  
  printf("entre com o numero: ");
  int deu_certo = scanf("%i", &numero);

  dezena = numero / 10 % 10 ;
  centena = numero / 100 % 10;
  milhar = numero / 1000 % 10; 
  unidade = numero % 10;
  
  printf("numero unidade: %i, numero dezena: %i, numero em centena: %i, numero em milhar: %i\n", unidade, dezena, centena, milhar);
  
  
  
}