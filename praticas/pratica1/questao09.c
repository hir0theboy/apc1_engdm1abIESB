#include <stdio.h>

int main() {
  int anos;
  int meses;
  int dias;

  printf("entre com o valor em anos: ");
  int deu_certo = scanf("%i", &anos);

  dias = anos * 365;
  meses = dias / 30;

  printf("o valor em anos eh %i, valor em meses: %i, valor em dias: %i\n", anos, meses, dias);



  return 0;
}