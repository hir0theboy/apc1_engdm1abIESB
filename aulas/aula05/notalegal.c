#include <stdio.h>

 int main() {
 char nome[31] = "";
   int quantidade = 0;
   float valor = 0.0f;
  printf("preencha o nome do produto: ");
   int deu_certo = scanf("%[^\n]s", nome);

   printf("preencha a quantidade: ");
   deu_certo = scanf("%i", &quantidade);

   printf("preencha o valor: ");
   deu_certo = scanf("%f", &valor);

   printf("------------------------------\n");
   printf("       N O T A  L E G A L     \n");
   printf("------------------------------\n");
   printf("ITEM          QTD        VALOR\n");
   
  printf("%-14s %02i %12.2f\n", nome, quantidade, valor);
   
   return 0;
 }