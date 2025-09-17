#include <stdio.h>
#include <string.h>

struct Carta {
    char estado[50];
    char codigo_carta[10];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int num_pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
};

int main() {
    struct Carta carta1, carta2;

    strcpy(carta1.estado, "São Paulo");
    strcpy(carta1.codigo_carta, "SP01");
    strcpy(carta1.nome_cidade, "São Paulo");
    carta1.populacao = 12300000;
    carta1.area = 1521.11;
    carta1.pib = 700.5;
    carta1.num_pontos_turisticos = 15;

    carta1.densidade_populacional = (float)carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib / carta1.populacao;

    strcpy(carta2.estado, "Rio de Janeiro");
    strcpy(carta2.codigo_carta, "RJ01");
    strcpy(carta2.nome_cidade, "Rio de Janeiro");
    carta2.populacao = 6748000;
    carta2.area = 1182.3;
    carta2.pib = 450.3;
    carta2.num_pontos_turisticos = 20;

    carta2.densidade_populacional = (float)carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;

    printf("--- Carta 1 ---\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo_carta);
    printf("Cidade: %s\n", carta1.nome_cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.num_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade_populacional);
    printf("PIB per capita: R$ %.2f\n", carta1.pib_per_capita);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo_carta);
    printf("Cidade: %s\n", carta2.nome_cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.num_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade_populacional);
    printf("PIB per capita: R$ %.2f\n", carta2.pib_per_capita);

    printf("\n--- Comparação por POPULAÇÃO ---\n");
    printf("Carta 1 - %s: %d\n", carta1.nome_cidade, carta1.populacao);
    printf("Carta 2 - %s: %d\n", carta2.nome_cidade, carta2.populacao);

    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome_cidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome_cidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
    }
    if (carta2.populacao > 0) {
        carta2.pib_per_capita = carta2.pib / carta2.populacao;
    } else {
        carta2.pib_per_capita = 0.0;
    }

    printf("--- Carta 1 ---\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo_carta);
    printf("Cidade: %s\n", carta1.nome_cidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.num_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidade_populacional);
    printf("PIB per capita: R$ %.2f\n", carta1.pib_per_capita);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo_carta);
    printf("Cidade: %s\n", carta2.nome_cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.num_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidade_populacional);
    printf("PIB per capita: R$ %.2f\n", carta2.pib_per_capita);

    printf("\n--- Comparação por POPULAÇÃO ---\n");
    printf("Carta 1 - %s: %d\n", carta1.nome_cidade, carta1.populacao);
    printf("Carta 2 - %s: %d\n", carta2.nome_cidade, carta2.populacao);

    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome_cidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome_cidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}