#include <stdio.h>

int main() {
  float boletim[10][3]; //10 linhas, 3 colunas

  for (int i=0; i<10; i++) {
    for (int j=0; j<2; j++) {
      printf("entre com a %ia nota do %io aluno: ", j+1, i+1);
      int deu_certo = scanf("%f", &boletim[i][j]);
    }
    boletim[i][2] = 0.4f * boletim[i][0] + 0.6f * boletim[i][1];
  }

  printf("\nBOLETIM\n");
  printf("Nota1  Nota2  Media\n");
  for (int i=0; i<10; i++) {
    for (int j=0; j<3; j++) {
      printf("%5.1f ", boletim[i][j]);
    }
    printf("\n");
  }
  



  return 0;
}