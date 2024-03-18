#include <stdio.h>

//exercicio 4
/*
4. Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
*/

 int main() {

  float preco_inicial;
  float preco_final;
   const float ICMS = 0.17;
   const float COFINS = 0.076;
   const float PIS_PASEP = 0.0165;

   preco_inicial = 100.0f;

   printf("Entre com o preco inicial: ");
   int deu_certo = scanf("%f", &preco_final);
   
   float valor_icms = preco_inicial * ICMS;
   float valor_cofins = preco_inicial * COFINS;
   float valor_pis_pasep = preco_inicial * PIS_PASEP;
   
   
   preco_final = (1 + ICMS + COFINS +  PIS_PASEP) * preco_inicial;

     printf( "O preco inicial do produto eh: %f\n", preco_inicial);
     printf( "O preco final do produto eh: %f\n", preco_final);
     printf( "O valor do ICMS eh: %f\n", valor_icms);
     printf( "O valor do COFINS eh: %f\n", valor_cofins);
     printf( "O valor do PIS/PASEP eh: %f\n", valor_pis_pasep);
   
   return 0;
 }