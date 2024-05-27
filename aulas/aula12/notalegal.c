#include <stdio.h>

int main() {
struct item_notafiscal_t {
  char nome[21];
  int quantidade;
  float valor;
    };
  
struct item_notafiscal_t item;

for (int i=0; i<5; i++) {
  printf("entre com o nome do produto: ");
  int deu_certo = scanf("%[^\n]s", item.nome);
  while(getchar() != '\n');

  printf("Entre com a quantidade: ");
  deu_certo = scanf("%i", &item.quantidade);
  while(getchar() != '\n');

  printf("Entre com o valor do produto: ");
  deu_certo = scanf("%f", &item.valor);
  while(getchar() != '\n');

}
  printf("\n N O T A  F I S C A L\n");
  printf("Item       Qtd    Valor\n");
  for (int i = 0; i < 5; i++) {
  printf("%-10s %03i %8.2f\n", item.nome, item.quantidade, item.valor);
    item[i].valor);
  }

  return 0;
}