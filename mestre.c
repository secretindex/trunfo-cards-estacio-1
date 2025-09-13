#include <stdio.h>

int main()
{
    char estado1;
    char estado2;
    char codigo1[5];
    char codigo2[5];
    char cidade1[50];
    char cidade2[50];
    unsigned long int populacao1;
    unsigned long int populacao2;
    float area1, pib1;
    float area2, pib2;
    int pontos1, pontos2;

    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;

    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (em km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 * 1e9 / populacao1;

    super_poder1 = (float)populacao1 + area1 + pib1 + pontos1 + pib_per_capita1 + (1 / densidade1);

    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (em km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 * 1e9 / populacao2;

    super_poder2 = (float)populacao2 + area2 + pib2 + pontos2 + pib_per_capita2 + (1 / densidade2);

    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade1 > densidade2);
    printf("PIB: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}