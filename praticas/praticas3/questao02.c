  #include <stdio.h>
  int main() {
    float valor_bruto;

    printf("Entre com o valor bruto: ");
    int deu_certo = scanf("%f", &valor_bruto);

    if (deu_certo) {
      if (valor_bruto <= 100.00f) {
        float valor_desconto = valor_bruto * 0.01f;
        float valor_total = valor_bruto - valor_desconto;
        printf("O valor do produto é: %.2f\n", valor_total);
      } else if (valor_bruto <= 500.00f) {
        float valor_desconto = valor_bruto * 0.05f;
        float valor_total = valor_bruto - valor_desconto;
        printf("O valor do produto é: %.2f\n", valor_total);
      } else if (valor_bruto > 500.00f) {
        float valor_desconto = valor_bruto * 0.1f;
        float valor_total = valor_bruto - valor_desconto;
        printf("O valor do produto é: %.2f\n", valor_total);
      }
    } else 
    printf("O valor inserido é invalido!\n");

    return 0;
  }