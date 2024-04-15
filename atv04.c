#include <stdio.h>
int main(void) {
  
  char tipo_bilhete[20];
  float valor_pago;

  printf("Digite o tipo de bilhete (unitário, duplo ou 10 viagens): ");
  scanf("%s", tipo_bilhete);
  printf("Digite o valor pago pelo passageiro: ");
  scanf("%f", &valor_pago);
  
  if (strcmp(tipo_bilhete, "unitário") == 0) {
    int quantidade_bilhetes = valor_pago / 1.30;
    float troco = valor_pago - quantidade_bilhetes * 1.30;
    printf("Quantidade de bilhetes possíveis: %d\n", quantidade_bilhetes);
    printf("Troco: %.2f\n", troco);
  } else if (strcmp(tipo_bilhete, "duplo") == 0) {
    int quantidade_bilhetes = valor_pago / 2.60;
    float troco = valor_pago - quantidade_bilhetes * 2.60;
    printf("Quantidade de bilhetes possíveis: %d\n", quantidade_bilhetes);
    printf("Troco: %.2f\n", troco);
  } else if (strcmp(tipo_bilhete, "10 viagens") == 0) {
    int quantidade_bilhetes = valor_pago / 12.00;
    float troco = valor_pago - quantidade_bilhetes * 12.00;
    printf("Quantidade de bilhetes possíveis: %d\n", quantidade_bilhetes);
    printf("Troco: %.2f\n", troco);
  }
  return 0;
}