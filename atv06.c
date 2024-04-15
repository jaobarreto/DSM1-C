#include <stdio.h>
int main(void) {
  int vetor[20];
  int x;
  for (int i = 0; i < 20; i++) {
    printf("Digite o valor para a posição %d do vetor: ", i);
    scanf("%d", &vetor[i]);
  }
  printf("Digite o valor de X a ser buscado: ");
  scanf("%d", &x);
  int found = 0;
  for (int i = 0; i < 20; i++) {
    if (vetor[i] == x) {
      printf("O valor %d foi encontrado na posição %d do vetor.\n", x, i);
      found = 1;
      break;
    }
  }
  if (!found) {
    printf("O valor %d não foi encontrado no vetor.\n", x);
  }
  return 0;
}