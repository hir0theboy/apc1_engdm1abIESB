#include <stdio.h> 

int main() {
  printf("------------------------------\n");
  printf("       N O T A  L E G A L     \n");
  printf("------------------------------\n");
  printf("ITEM          QTD        VALOR\n");

  char item[31] = "laranja";
  int qtde = 5;
  float preco = 4.00f;
  printf("%7s %7i %14.2f\n", item, qtde, preco);

  
  char item2[31] = "maça";
  qtde = 2;
  preco = 6.00f;
  printf("%4s %10i %14.2f\n", item2, qtde, preco);

  printf("TOTAL         %16.2f\n", 32.00f);
  return 0;
}