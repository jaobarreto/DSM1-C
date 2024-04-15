#include <stdio.h>
int main() {
  int N;
  printf("Digite o valor de N para a matriz N x N: ");
  scanf("%d", &N);
  int matriz[N][N];
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("Digite o valor para a posição [%d][%d] da matriz: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
  int valor;
  printf("Digite um valor para procurar na matriz: ");
  scanf("%d", &valor);
  int encontrado = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (matriz[i][j] == valor) {
        printf("Valor encontrado\n");
        encontrado = 1;
        break;
      }
    }
  }
  if (!encontrado) {
    printf("Valor não encontrado\n");
  }
  return 0;
}