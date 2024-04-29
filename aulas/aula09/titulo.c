#include <stdio.h>

int main () {

  int idade;

  printf("Entre com a idade: ");
  int deu_certo = scanf("%d", &idade);
 if (deu_certo) {
   if (idade < 16) {
     printf("Não pode votar\n");
   } else if (idade >= 18 && idade < 65) {
     printf("voto obrigatório\n");
   } else {
     printf("o voto é opcional\n");
   }
} else {
   printf("A idade inserida é invalida!\n");
 }


  return 0;
}