#include <stdio.h>
int main(void) {

  int idades[10];
  float pesos[10], alturas[10];
  float media_idade = 0;
  int count_pessoas_mais_90kg_e_menos_150 = 0;
  int count_pessoas_entre_10_e_30_anos_altura_mais_190 = 0;

  for (int i = 0; i < 10; i++) {
    printf("Digite a idade: ");
    scanf("%d", &idades[i]);
    printf("Digite o peso em kg: ");
    scanf("%f", &pesos[i]);
    printf("Digite a altura em metros: ");
    scanf("%f", &alturas[i]);
    media_idade += idades[i];
    if (pesos[i] > 90 && alturas[i] < 1.50) {
      count_pessoas_mais_90kg_e_menos_150++;
    }
    if (idades[i] >= 10 && idades[i] <= 30 && alturas[i] > 1.90) {
      count_pessoas_entre_10_e_30_anos_altura_mais_190++;
    }
  }
  media_idade /= 10;
  float porcentagem_pessoas_entre_10_e_30_anos_altura_mais_190 =
      (float)count_pessoas_entre_10_e_30_anos_altura_mais_190 / 10 * 100;

  printf("Média de idade das 10 pessoas: %.2f\n", media_idade);
  printf("Quantidade de pessoas com mais de 90 kg e menos de 1.50m de altura: "
         "%d\n",
         count_pessoas_mais_90kg_e_menos_150);
  printf("Porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas "
         "que medem mais de 1.90m: %.2f%%\n",
         porcentagem_pessoas_entre_10_e_30_anos_altura_mais_190);
  return 0;
}