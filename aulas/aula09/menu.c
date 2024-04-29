#include <stdio.h>

int main() {
 int opcao;

  printf("MENU PRINCIPAL\n");
  printf("1 - consultar saldo\n");
  printf("2 - recarregar\n");
  printf("3 - ligacoes recebidas\n");
  printf("4 - ligacoes feitas\n");
  printf("0 - Sair\n");
  int deu_certo = scanf("%d", &opcao);

  switch(opcao) {
    case 1: 
      printf("Seu saldo é de R$ 10,00\n"); break; 
    case 2:
      float valor_recarga;
      printf("Entre com o valor da recarga: ");
     deu_certo = scanf("%f", &valor_recarga); 
      printf("vc recarregou: %.2f reais\n", valor_recarga); break;
    case 3: 
      printf("Você tem 0 ligações recebidas\n"); break;
    case 4: 
     printf("suas ultimas ligacoes feitas foram: (3812-3213) (2838-2132) (1283-2131)\n"); break;
    case 0:
    printf("Saindo...      Ate logo!\n"); break;
    default:
    printf("Opção invalida!\n"); break;
  }



  return 0;
}