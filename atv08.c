#include <stdio.h>
int main(void) {
  
  int tamanho;
  
  printf("Digite o tamanho da string: ");
  scanf("%d", &tamanho);

  char string[tamanho + 1];
  printf("Digite a string de caracteres: ");
  scanf("%s", string);

  for (int i = tamanho - 1; i >= 0; i--) {
    printf("%c", string[i]);
  }
  return 0;
}