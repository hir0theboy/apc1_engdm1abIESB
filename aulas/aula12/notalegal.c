#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
struct item_notafiscal_t {
  char nome[21];
  int quantidade;
  float valor;
  float preco;
    };
  
struct item_notafiscal_t item[5];
  float total = 0;
  
for (int i=0; i<5; i++) {
  printf("entre com o nome do produto: ");
  int deu_certo = scanf("%[^\n]s", item[i].nome);
  while(getchar() != '\n');
  int tamanho = strlen(item[i].nome);
  for (int j =0; j<tamanho; j++) {
    item[i].nome[j] = toupper(item[i].nome[j]);
    
  }
  printf("Entre com a quantidade: ");
  deu_certo = scanf("%i", &item[i].quantidade);
  while(getchar() != '\n');

  printf("Entre com o valor do produto: ");
  deu_certo = scanf("%f", &item[i].preco);
  while(getchar() != '\n');

  item[i].valor = item[i].quantidade * item[i].preco;
  total = total + item[i].valor;

}
  printf("\n N O T A  F I S C A L\n");
  printf("Item       Qtd    Valor     TOTAL\n");
  for (int i = 0; i < 5; i++) {
  printf("%-10s %03i %8.2f %8.2f\n", item[i].nome, item[i].quantidade, item[i].preco,
    item[i].valor);
  }

  printf("-------------------------------\n");
  printf("Total: %26.2f\n", total);
  

  return 0;
}