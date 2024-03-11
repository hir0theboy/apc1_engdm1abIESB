#include <stdio.h>

int main() {

  float valor_hora = 150.0f;
  int horas_trabalhadas = 200;
  float salario_bruto = valor_hora * horas_trabalhadas;
  

  const float IR = 0.25f;
  const float INSS = 0.11f;

  float valor_ir = salario_bruto * IR;
  float valor_inss = salario_bruto * INSS;

  float salario_liquido = salario_bruto - valor_ir - valor_inss;

  printf("------------------------------\n");
  printf("   C O N T R A  C H E Q U E   \n");
  printf("------------------------------\n");
  printf("Salario Bruto: %13.2f\n", salario_bruto);
  printf("IR: %23.2f\n", valor_ir);
  printf("INSS: %21.2f\n", valor_inss);
  printf("Salario Liquido: %11.2f\n", salario_liquido);
  
  
  return 0;
}