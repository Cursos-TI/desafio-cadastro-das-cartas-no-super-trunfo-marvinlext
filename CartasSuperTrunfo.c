#include <stdio.h>

int main(){
    // Declaração das variáveis para Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadepopulacional1;
    float pibpercapita1;

    // Declaração das variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadepopulacional2;
    float pibpercapita2;

    // Entrada de dados para a Carta 1
    printf("Digite os dados da Carta 1: \n");

    printf("Estado (letra de A a H): \n");
    scanf("%c", &estado1);

    printf("Código da Carta (ex: A01): \n");
    scanf("%s", codigo1);

    printf("Nome da Cidade: \n");
    scanf("%s", nomeCidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área (em km²): \n");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da Carta 2
    printf("Digite os dados da Carta 2: \n");

    printf("Estado (letra de A a H): \n");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): \n");
    scanf("%s", codigo2);

    printf("Nome da Cidade: \n");
    scanf("%s", nomeCidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área (em km²): \n");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);

   // Cálculos após entrada dos dados (evitando divisão por zero com +0.000001)
   densidadepopulacional1 = populacao1 / (area1 + 0.000001);
   pibpercapita1 = (pib1 * 1000000000) / (populacao1 + 0.000001);

   densidadepopulacional2 = populacao2 / (area2 + 0.000001);
   pibpercapita2 = (pib2 * 1000000000) / (populacao2 + 0.000001);
    
    // Exibição dos dados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f\n", pibpercapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);
    
    return 0;
}