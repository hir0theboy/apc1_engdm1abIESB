#include <stdio.h>

 int main(){
  int celcius;
  int fahrenheit;

   printf("entre com o valor em celcius: ");
   int deu_certo = scanf("%i", &celcius);

   fahrenheit = (celcius * 9/5) + 32;

   printf("o valor em fahrenheit eh %i\n", fahrenheit);



   return 0;
 }