#include <stdio.h>
int main(void) {

  int idades[12];
  char sexos[12];
  int count_mulheres = 0;
  int soma_idade_mulheres = 0;
  int soma_idade_homens = 0;
  int count_homens = 0;

  for (int i = 0; i < 12; i++) {
    printf("Digite a idade da pessoa %d: ", i + 1);
    scanf("%d", &idades[i]);
    printf("Digite o sexo da pessoa %d (m/f): ", i + 1);
    scanf(" %c", &sexos[i]);
    if (sexos[i] == 'f') {
      soma_idade_mulheres += idades[i];
      count_mulheres++;
    } else if (sexos[i] == 'm') {
      soma_idade_homens += idades[i];
      count_homens++;
    }
  }
  float media_idade_grupo = 0;
  float media_idade_mulheres = 0;
  float media_idade_homens = 0;

  for (int i = 0; i < 12; i++) {
    media_idade_grupo += idades[i];
  }
  media_idade_grupo /= 12;
  if (count_mulheres > 0) {
    media_idade_mulheres = (float)soma_idade_mulheres / count_mulheres;
  }
  if (count_homens > 0) {
    media_idade_homens = (float)soma_idade_homens / count_homens;
  }

  printf("Idade média do grupo: %.2f\n", media_idade_grupo);
  printf("Idade média das mulheres: %.2f\n", media_idade_mulheres);
  printf("Idade média dos homens: %.2f\n", media_idade_homens);
  return 0;
}