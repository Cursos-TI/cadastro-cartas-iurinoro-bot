// super_trunfo_aventureiro.c
#include <stdio.h>

int main() {

    char estado1;
    int numeroCidade1;
    char codigo1[4]; // Ex: A01
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    char estado2;
    int numeroCidade2;
    char codigo2[4]; // Ex: B02
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // ======= Entrada de Dados - Carta 1 =======
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (letra A-H): ");
    scanf(" %c", &estado1);

    printf("Número da Cidade (01 a 04): ");
    scanf("%d", &numeroCidade1);

    sprintf(codigo1, "%c%02d", estado1, numeroCidade1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);  // Lê string com espaços

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // ======= Entrada de Dados - Carta 2 =======
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (letra A-H): ");
    scanf(" %c", &estado2);

    printf("Número da Cidade (01 a 04): ");
    scanf("%d", &numeroCidade2);

    sprintf(codigo2, "%c%02d", estado2, numeroCidade2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);  // Lê string com espaços

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // ======= Cálculos =======

    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    // ======= Saída formatada =======

    printf("\n=== Carta 1 ===\n");
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);

    printf("\n=== Carta 2 ===\n");
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);

    return 0;
}
