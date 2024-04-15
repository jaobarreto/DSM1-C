#include <ctype.h>
#include <stdio.h>
int main(void) {
  int tamanho;
  printf("Digite o tamanho da string: ");
  scanf("%d", &tamanho);

  char string[tamanho + 1];
  printf("Digite a string de caracteres: ");
  scanf("%s", string);

  int vogais = 0, consoantes = 0;

  for (int i = 0; string[i] != '\0'; i++) {
    if (isalpha(string[i])) {
      char ch = tolower(string[i]);
      if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        vogais++;
      } else {
        consoantes++;
      }
    }
  }

  printf("Número de vogais: %d\n", vogais);
  printf("Número de consoantes: %d\n", consoantes);
  return 0;
}