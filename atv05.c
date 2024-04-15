#include <stdio.h>
int main(void) {
  
  int vetor[12];
  int x, y;
  
  for (int i = 0; i < 12; i++) {
    printf("Digite o valor para a posição %d do vetor: ", i);
    scanf("%d", &vetor[i]);
  }
  
  printf("Digite o valor de X: ");
  scanf("%d", &x);
  printf("Digite o valor de Y: ");
  scanf("%d", &y);
  int soma = vetor[x] + vetor[y];
  printf("A soma dos valores encontrados nessas posições é: %d\n", soma);
  
  return 0;
}