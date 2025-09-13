#include <stdio.h>

int main()
{
  // card 1 and 2
  char estado1;
  char codigo1[5];
  char cidade1[50];
  int populacao1;
  float area1, pib1;
  int pontos1;

  char estado2;
  char codigo2[5];
  char cidade2[50];
  int populacao2;
  float area2, pib2;
  int pontos2;

  // Card one data
  printf("Digite os dados da Carta 1:\n");
  printf("Estado (A-H): ");
  scanf(" %c", &estado1);
  printf("Codigo da Carta (ex: A01): ");
  scanf("%s", codigo1);
  printf("Nome da Cidade: ");
  scanf(" %[^\n]", cidade1);
  printf("Populacao: ");
  scanf("%d", &populacao1);
  printf("Area (em km²): ");
  scanf("%f", &area1);
  printf("PIB (em bilhões de reais): ");
  scanf("%f", &pib1);
  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &pontos1);

  printf("\nDigite os dados da Carta 2:\n");
  printf("Estado (A-H): ");
  scanf(" %c", &estado2);
  printf("Codigo da Carta (ex: A01): ");
  scanf("%s", codigo2);
  printf("Nome da Cidade: ");
  scanf(" %[^\n]", cidade2);
  printf("Populacao: ");
  scanf("%d", &populacao2);
  printf("Area (em km²): ");
  scanf("%f", &area2);
  printf("PIB (em bilhões de reais): ");
  scanf("%f", &pib2);
  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &pontos2);

  // Card number one
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontos1);

  // Card number two
  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", pontos2);

  return 0;
}
