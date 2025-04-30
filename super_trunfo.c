#include <stdio.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[100];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibperCapita1;
    float SuperPoder1;

    // Declaração de variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibperCapita2;
    float SuperPoder2;

    // Leitura dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Informe a População da Cidade: ");
    scanf("%d", &populacao1);

    printf("Informe a Área da Cidade (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB da Cidade: ");
    scanf("%f", &pib1);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("Informe a Densidade Populacional: ");
    scanf("%f", &densidadePopulacional1);

    printf("Informe o PIB per Capita :");
    scanf("%f", &pibperCapita1);

    // Leitura dos dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Informe a População da Cidade: ");
    scanf("%d", &populacao2);

    printf("Informe a Área da Cidade (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB da Cidade: ");
    scanf("%f", &pib2);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("Insira a Densidade Populacional: ");
    scanf("%f", &densidadePopulacional2);

    printf("Insira o PIB per Capita: ");
    scanf("%f", &pibperCapita2);

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", pibperCapita1);


    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibperCapita2);

     // Cálculos intermediários
     float densidade1 = populacao1 / area1;
     float densidade2 = populacao2 / area2;
 
     float pib_per_Capita1 = pib1 * 1000000000 / populacao1;  // Convertendo PIB para reais
     float pib_per_Capita2 = pib2 * 1000000000 / populacao2;
 
     // Super Poder = população + área + PIB + pontos + PIB per capita + (1 / densidade)
     float super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pib_per_Capita1 + (1.0f / densidade1);
     float super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pib_per_Capita2 + (1.0f / densidade2);

    // Comparação de Cartas
    printf("\nComparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_Capita1 > pib_per_Capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}
