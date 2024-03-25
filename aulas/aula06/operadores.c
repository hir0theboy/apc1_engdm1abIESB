#include <stdio.h>
#include <math.h> //funcoes complexas da matematica

 int main() {
   int numero1;
   int numero2;
   const double PI = 3.14;

   printf("Entre com o valor do do numero 1: ");
    int deu_certo = scanf("%i", &numero1);

   printf("Entre com o valor do numero 2: ");
     deu_certo = scanf("%i", &numero2);

   int resultado = numero1 + numero2;

   printf("A soma dos numeros eh %i\n", resultado);

   resultado = numero1 - numero2;

     printf("A subtracao dos numeros eh %i\n", resultado);

   resultado = numero1 * numero2;

     printf("a multiplicacao dos numeros eh %i\n", resultado);

   resultado = numero1 / numero2;

     printf("a divisao dos numeros eh %i\n", resultado);

   float resultado2 = numero1 / (numero2 * 1.0); //conversao implicita

    printf("a divisao dos numeros eh %.1f\n", resultado2);

   resultado = numero1 % numero2;
   printf( "o resto da divisao eh %i\n", resultado);

 printf("o incremento do numero 1 eh %i\n", numero1++);
 printf("o incremento do numero 1 eh %i\n", ++numero1);

 printf("o decremento do numero 1 eh %i\n", numero1--);
 printf("o decremento do numero 1 eh %i\n", --numero1);

  double raiz = sqrt(numero1); //raiz quadrada do numero
  printf("a raiz quadrada do numero 1 eh %.2f\n", raiz);
   
  double potencia = pow(numero1, 2); //potencia do numero
  printf("o numero 1 elevado ao quadrado eh %.2f\n", potencia);

   
  double seno = sin(numero1 * (PI / 180)); //seno do numero
  printf("o seno do numero 1 eh %.2f\n", seno);
   
  double cosseno = cos(numero1 * (PI / 180)); //cosseno do numero
  printf("o cosseno do numero 1 eh %.2f\n", cosseno);
   
  double tangente = tan(numero1 * (PI / 180)); //tangem do numero
  printf("a tangente do numero 1 eh %.2f\n", tangente);
   
  double logaritmo = log2(numero1);//log em base 2
  printf("o logaritmo do numero 1 na base 2 eh %.2f\n", logaritmo);
   
  double logaritmo10 = log10(numero1); //log base 10
   printf("o logaritmo do numero 1 na base 10 eh %.2f\n", logaritmo10);
   
   
   return 0;
 }