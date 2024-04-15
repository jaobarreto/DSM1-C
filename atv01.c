#include <stdio.h>
int main(void) {
  
    int idades[7];
    float pesos[7];
    int num_pessoas_mais_90kg = 0;
    float media_idade = 0;
  
    for (int i = 0; i < 7; i++) {
        printf("Digite a idade: ");
        scanf("%d", &idades[i]);
        printf("Digite o peso em kg: ");
        scanf("%f", &pesos[i]);

        if (pesos[i] > 90) {
            num_pessoas_mais_90kg++;
        }

        media_idade += idades[i];
    }
    media_idade /= 7;
    printf("Quantidade de pessoas com mais de 90 kg: %d\n", num_pessoas_mais_90kg);
    printf("Média de idade das 7 pessoas: %.2f\n", media_idade);
    return 0;
}