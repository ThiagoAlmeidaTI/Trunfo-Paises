#include <stdio.h>

int main() {
    char estado1, estado2;
    int cidade_num1, cidade_num2;
    long populacao1, populacao2;
    double area1, area2;
    long pib1, pib2;
    int pontos_turísticos1, pontos_turísticos2;
    float densidade1, densidade2, pib_per_capita1, pib_per_capita2;

    // Entrada dos dados para a primeira cidade
    printf("Digite o estado da primeira cidade (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o número da cidade (1-4): ");
    scanf(" %d", &cidade_num1);

    printf("Digite a população da cidade: ");
    scanf("%ld", &populacao1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%lf", &area1);

    printf("Digite o PIB da cidade (em R$): ");
    scanf("%ld", &pib1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turísticos1);

    // Cálculo da densidade populacional e PIB per capita para a primeira cidade
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (float)pib1 / populacao1;

    // Entrada dos dados para a segunda cidade
    printf("\nDigite o estado da segunda cidade (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o número da cidade (1-4): ");
    scanf(" %d", &cidade_num2);

    printf("Digite a população da cidade: ");
    scanf("%ld", &populacao2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%lf", &area2);

    printf("Digite o PIB da cidade (em R$): ");
    scanf("%ld", &pib2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turísticos2);

    // Cálculo da densidade populacional e PIB per capita para a segunda cidade
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (float)pib2 / populacao2;

    // Exibição dos resultados
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%d\n", estado1, cidade_num1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1 / 1000000000.0);  // Exibindo o PIB em bilhões
    printf("Número de Pontos Turísticos: %d\n", pontos_turísticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%d\n", estado2, cidade_num2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2 / 1000000000.0);  // Exibindo o PIB em bilhões
    printf("Número de Pontos Turísticos: %d\n", pontos_turísticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita2);

    return 0;
}
