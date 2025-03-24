#include <stdio.h>
#include <string.h>

int main() {
    // Defini todas as variáveis, para carta 1 e carta 2
    char estado1[50], codigoDaCarta1[20], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidadePopulacional1 = 0, pibPerCapita1 = 0;

    char estado2[50], codigoDaCarta2[20], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidadePopulacional2 = 0, pibPerCapita2 = 0;

    // Leitura dos dados da primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("Estado: ");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = '\0';  // Remover \n do final

    printf("Codigo da Carta: ");
    fgets(codigoDaCarta1, sizeof(codigoDaCarta1), stdin);
    codigoDaCarta1[strcspn(codigoDaCarta1, "\n")] = '\0';

    printf("Nome Da Cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0';

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em R$): ");
    scanf("%f", &pib1);
    getchar();  // Limpar buffer

    // Cálculos
    if (area1 > 0) 
        densidadePopulacional1 = populacao1 / area1;
    if (populacao1 > 0) 
        pibPerCapita1 = pib1 / populacao1;

    // Leitura dos dados da segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado: ");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = '\0';

    printf("Código da Carta: ");
    fgets(codigoDaCarta2, sizeof(codigoDaCarta2), stdin);
    codigoDaCarta2[strcspn(codigoDaCarta2, "\n")] = '\0';

    printf("Nome Da Cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em R$): ");
    scanf("%f", &pib2);
    getchar();  // Limpar buffer

    // Cálculos
    if (area2 > 0) 
        densidadePopulacional2 = populacao2 / area2;
    if (populacao2 > 0) 
        pibPerCapita2 = pib2 / populacao2;

    // aqui o usuário vai escolher o atributo
    int opcao;
    printf("\nEscolha o atributo para comparar\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Densidade Populacional\n5 - PIB per capita\nEscolha: ");
    scanf("%d", &opcao);

    printf("\nResultado da comparação:\n");
    switch (opcao) {
        case 1:
            printf("População: %s (%d) vs %s (%d)\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
            printf("Vencedor: %s\n", (populacao1 > populacao2) ? nomeCidade1 : (populacao1 < populacao2) ? nomeCidade2 : "Empate!");
            break;
        case 2:
            printf("Área: %s (%.2f km²) vs %s (%.2f km²)\n", nomeCidade1, area1, nomeCidade2, area2);
            printf("Vencedor: %s\n", (area1 > area2) ? nomeCidade1 : (area1 < area2) ? nomeCidade2 : "Empate!");
            break;
        case 3:
            printf("PIB: %s (R$ %.2f) vs %s (R$ %.2f)\n", nomeCidade1, pib1, nomeCidade2, pib2);
            printf("Vencedor: %s\n", (pib1 > pib2) ? nomeCidade1 : (pib1 < pib2) ? nomeCidade2 : "Empate!");
            break;
        case 4:
            printf("Densidade Populacional: %s (%.2f hab/km²) vs %s (%.2f hab/km²)\n", nomeCidade1, densidadePopulacional1, nomeCidade2, densidadePopulacional2);
            printf("Vencedor: %s\n", (densidadePopulacional1 > densidadePopulacional2) ? nomeCidade1 : (densidadePopulacional1 < densidadePopulacional2) ? nomeCidade2 : "Empate!");
            break;
        case 5:
            printf("PIB per capita: %s (R$ %.2f) vs %s (R$ %.2f)\n", nomeCidade1, pibPerCapita1, nomeCidade2, pibPerCapita2);
            printf("Vencedor: %s\n", (pibPerCapita1 > pibPerCapita2) ? nomeCidade1 : (pibPerCapita1 < pibPerCapita2) ? nomeCidade2 : "Empate!");
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}

