#include <stdio.h>

int main() {

  int segundos;
  int horas;
  int minutos;

  printf("entre com o valor em segundos: ");
    int deu_certo = scanf("%i", &segundos);
  
  
  minutos = segundos / 60;

  horas = minutos / 60;
 
 
  segundos = segundos % 60;

  minutos = minutos % 60;

  horas = horas % 24;
  printf("%i horas, %i minutos, %i segundos\n", horas, minutos, segundos);
  return 0;
  
}