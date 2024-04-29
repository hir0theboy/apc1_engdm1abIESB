#include <stdio.h>

int main() {
  int nota;

  printf("Entre com a nota do motorista: ");
  int deu_certo = scanf("%d", &nota);
 
  
  /*
  if (deu_certo && nota < 6 && nota > 0) {
    if (nota == 1) {
      printf("O motorista é um arrombado\n");
    } else if (nota == 2) {
      printf("O motorista é um lixo\n");
    } else if (nota == 3) {
      printf("O motorista é meia bomba\n");
    } else if (nota == 4) {
      printf("O motorista fez o basico\n");
    } else if (nota == 5) {
      printf("O motorista é FODA\n");
    }
  } else {
    printf("A nota inserida é invalida!\n");
  }

*/
 
  
  // Aqui é o mesmo código, mas com apenas uma condição (==)
  
  switch (nota) {
    case 1 : printf("O motorista é um arrombado\n"); break;
    case 2 : printf("O motorista é um lixo\n"); break;
    case 3 : printf("O motorista é meia bomba\n"); break;
    case 4 : printf("O motorista fez o basico\n"); break;
    case 5 : printf("O motorista é FODA\n"); break;
    default: printf("A nota inserida é invalida!\n"); break;
  }
  
  return 0;
}