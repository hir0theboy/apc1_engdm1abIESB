// questao 1: faça um programa que calcule a media do iesb (0.4*A1+0.6*A2)

#include <stdio.h>

int main() {
  float nota1;
  float nota2;
  


    printf("entre com o valor da primeira nota: ");
    int deu_certo = scanf("%f", &nota1);

    printf("entre com o valor da segunda nota: ");
    deu_certo = scanf("%f", &nota2);


  float media1 = nota1*0.4f; 

float media2 = nota2*0.6f;

  float media_final = media1+media2;

    

    printf("A nota final é: %f\n", media_final);

  if (media_final >= 6.0f) {
    printf("Aprovado!\n");
  }
  else if (media_final < 6.0f) {
    printf("Reprovado!\n");
  }

  return 0;
  }
