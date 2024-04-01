#include <stdio.h>

int main() {
int numero1;
int numero2;

  printf("entre com o primeiro numero");

  int deu_certo = scanf("%i", &numero1);

  printf("entre com o segundo numero");
  deu_certo = scanf("%i", &numero2);

  int maior_que_zero_menor_que_dez = numero1 > 0 && numero1 < 10; //numero > 0 < 10
  printf("o primeiro numero eh maior que zero e menor que dez? %i\n");

  int maior_que_zero_maior_que_dez = numero2 > 0 || numero2 > 10; //numero > 0 OU numero > 10
  printf("o segundo numero eh maior que zero e menor que dez? %i\n"); 

  int nao_eh_maior_que_zero = !(numero1 > 0); // usa ! para indicar negacao, ou seja, se era falso, agora eh verdadeiro
  printf("o primeiro numero nao eh maior que zero? %i\n");



  return 0;
}