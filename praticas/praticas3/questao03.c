#include <stdio.h> 

int main() {
  int nota;

  printf("Entre com uma nota: ");
  int deu_certo = scanf("%d", &nota);

  switch(nota) {
    case 1: printf("Ruim\n"); break;
    case 2: printf("Insuficiente\n"); break;
    case 3: printf("Suficiente\n"); break;
    case 4: printf("Bom\n"); break;
    case 5: printf("Ótimo\n"); break;
    default: printf("Nota inválida!\n"); break;
  }




  return 0;
}