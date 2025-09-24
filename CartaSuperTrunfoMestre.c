#include <stdio.h>

int main() {
    // Variáveis Carta 1
    char estado1;
    int numeroCidade1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis Carta 2
    char estado2;
    int numeroCidade2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (letra A-H): ");
    scanf(" %c", &estado1);

    printf("Número da Cidade (01 a 04): ");
    scanf("%d", &numeroCidade1);

    sprintf(codigo1, "%c%02d", estado1, numeroCidade1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (letra A-H): ");
    scanf(" %c", &estado2);

    printf("Número da Cidade (01 a 04): ");
    scanf("%d", &numeroCidade2);

    sprintf(codigo2, "%c%02d", estado2, numeroCidade2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos propriedades calculadas
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    // Cálculo Super Poder = soma das propriedades (População, Área, PIB, Pontos Turísticos, Densidade e PIB per Capita)
    // Para manter o valor do Super Poder em mesma unidade e comparável, usaremos uma soma simples (ajustável)
    double superPoder1 = populacao1 + area1 + (pib1 * 1000000000.0) + pontosTuristicos1 + densidade1 + pibPerCapita1;
    double superPoder2 = populacao2 + area2 + (pib2 * 1000000000.0) + pontosTuristicos2 + densidade2 + pibPerCapita2;

    // Exibição das cartas
    printf("\n=== Carta 1 ===\n");
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2lf\n", superPoder1);

    printf("\n=== Carta 2 ===\n");
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2lf\n", superPoder2);

    // Comparações
    printf("\n=== Resultados das Comparações ===\n");

    // População (maior vence)
    if (populacao1 > populacao2)
        printf("População: Carta 1 vence!\n");
    else if (populacao2 > populacao1)
        printf("População: Carta 2 vence!\n");
    else
        printf("População: Empate!\n");

    // Área (maior vence)
    if (area1 > area2)
        printf("Área: Carta 1 vence!\n");
    else if (area2 > area1)
        printf("Área: Carta 2 vence!\n");
    else
        printf("Área: Empate!\n");

    // PIB (maior vence)
    if (pib1 > pib2)
        printf("PIB: Carta 1 vence!\n");
    else if (pib2 > pib1)
        printf("PIB: Carta 2 vence!\n");
    else
        printf("PIB: Empate!\n");

    // Pontos Turísticos (maior vence)
    if (pontosTuristicos1 > pontosTuristicos2)
        printf("Número de Pontos Turísticos: Carta 1 vence!\n");
    else if (pontosTuristicos2 > pontosTuristicos1)
        printf("Número de Pontos Turísticos: Carta 2 vence!\n");
    else
        printf("Número de Pontos Turísticos: Empate!\n");

    // Densidade Populacional (menor vence)
    if (densidade1 < densidade2)
        printf("Densidade Populacional: Carta 1 vence!\n");
    else if (densidade2 < densidade1)
        printf("Densidade Populacional: Carta 2 vence!\n");
    else
        printf("Densidade Populacional: Empate!\n");

    // PIB per Capita (maior vence)
    if (pibPerCapita1 > pibPerCapita2)
        printf("PIB per Capita: Carta 1 vence!\n");
    else if (pibPerCapita2 > pibPerCapita1)
        printf("PIB per Capita: Carta 2 vence!\n");
    else
        printf("PIB per Capita: Empate!\n");

    // Super Poder (maior vence)
    if (superPoder1 > superPoder2)
        printf("Super Poder: Carta 1 vence!\n");
    else if (superPoder2 > superPoder1)
        printf("Super Poder: Carta 2 vence!\n");
    else
        printf("Super Poder: Empate!\n");

    return 0;
}
