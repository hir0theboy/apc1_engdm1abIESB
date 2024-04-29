#include <stdio.h>

int main () {

  int idade;

  printf("Entre com a idade: ");
  int deu_certo = scanf("%d", &idade);

  if (idade < 16) {
    printf("Não pode votar\n");
  } else if (idade >= 18 && idade < 65) {
    printf("voto obrigatório\n");
  } else {
    printf("o voto é opcional\n");
  }


  return 0;
}