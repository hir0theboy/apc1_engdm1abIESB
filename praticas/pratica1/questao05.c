//questao 5: faça um programa que converta o valor de gigabytes para bytes (1GB = 1024^3 Bytes)

#include <stdio.h>

int main () {

 float gigabyte;

  printf("Entre com o valor em gigabyte: ");
  int deu_certo = scanf("%f", &gigabyte);

  float bytes = 1024 * 1024 * 1024;


  printf("O valor em bytes é: %f\n", gigabyte*bytes);
  
}