#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    //Declaração das variáveis

    char estado1, estado2;
    char codigoCarta1[5], codigoCarta2[5];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    float densidadePop1, densidadePop2;
    float pibCapita1, pibCapita2;

    int cartaVencedora;
    char* nomeVencedora;

    // Cadastro das Cartas

    printf("   Cadastro das Cartas   \n");
    printf("\n");


    printf(" Carta 1\n");

    printf("Insira o Estado: ");
    scanf(" %c", &estado1);
    printf("Insira o código da carta: ");
    scanf("%s", codigoCarta1);
    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Insira a população da cidade: ");
    scanf("%d", &populacao1);
    printf("Insira a área da cidade: ");
    scanf("%f", &area1);
    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");


    printf(" Carta 2\n");

    printf("Insira o Estado: ");
    scanf(" %c", &estado2);
    printf("Insira o código da carta: ");
    scanf("%s", codigoCarta2);
    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Insira a população da cidade: ");
    scanf("%d", &populacao2);
    printf("Insira a área da cidade: ");
    scanf("%f", &area2);
    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // Cálculo da Densidade Populacional e PIB per Capita

    densidadePop1 = (float)populacao1 / area1;
    densidadePop2 = (float)populacao2 / area2;

    pibCapita1 = pib1 / populacao1;
    pibCapita2 = pib2 / populacao2;

    // Exibição das informações das cartas

    printf("-----Dados das Cartas-----\n");
    printf("\n");

    printf(" Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigoCarta1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidadePop1);
    printf("PIB per Capita: %.3f reais \n", pibCapita1);
    printf("\n");

    printf(" Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f habitantes/km²\n", densidadePop2);
    printf("PIB per Capita: %.3f reais \n", pibCapita2);
    printf("\n");

    // Lógica para a comparação e definição da carta vencedora

    cartaVencedora = (populacao1 > populacao2) ? 1 : 2;
    nomeVencedora = (cartaVencedora == 1) ? nomeCidade1 : nomeCidade2;

    // Comparação das cartas

    if (populacao1 > populacao2) {
        printf("Carta 1 - %c: população: %d\n", estado1, populacao1);
        printf("Carta 2 - %c: população: %d\n", estado2, populacao2);
        printf("Resultado: Carta 1 tem maior população.\n");
    }else {
        printf("Carta 1 - %c: população: %d\n", estado1, populacao1);
        printf("Carta 2 - %c: população: %d\n", estado2, populacao2);
        printf("Resultado: Carta 2 tem maior população.\n");
    }
    printf("\n");

    // Exibição dos resultados

    printf("A carta vencedora é: carta %d - %s\n", cartaVencedora, nomeVencedora);
    printf("\n");

    return 0;
}