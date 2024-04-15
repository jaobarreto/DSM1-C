#include <stdio.h>
int main() {
  int matriz[3][3];
  int soma = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("Digite o valor para a posição [%d][%d] da matriz: ", i, j);
      scanf("%d", &matriz[i][j]);
      soma += matriz[i][j];
    }
  }
  printf("A soma de todos os elementos da matriz é: %d\n", soma);
  return 0;
}