#include <stdio.h>

//exercicio 4

 int main() {

  float preco_inicial;
  float preco_final;
   const float ICMS = 0.17;
   const float COFINS = 0.076;
   const float pis_pasep = 0.0165;

   preco_inicial = 100.0f;
   preco_final = (1 + ICMS + COFINS + pis_pasep) * preco_inicial;

     printf( "O preco final do produto eh: %f\n", preco_final);
   
   return 0;
 }