#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    // variáveis das cartas
    char estado1, estado2;
    char codigoCarta1[5], codigoCarta2[5];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    float densidadePop1, densidadePop2;
    float pibCapita1, pibCapita2;

    //variáveis do menu

    int opcao, regra, atributos;

    // variáveis do jogo e escolha do modo de jogo
    int escolhaModo, escolhaCarta, escolhaRegras;
    int carta1, carta2;
    char *nomeJogador, *nomeJogador2, *nomeComputador;
    int popJogador, popJogador2, popComputador, ptJogador, ptJogador2, ptComputador;
    int atributoSorteado;
    float areaJogador, areaJogador2, areaComputador, pibJogador, pibJogador2, pibComputador, densJogador, densJogador2, densComputador, pcapJogador, pcapJogador2, pcapComputador;
    const char *nomeAtributos[] = {
        "População",
        "Área",
        "PIB",
        "Pontos turísticos",
        "Densidade populacional",
        "PIB per capita",
        "Aleatório"
    };

    srand(time(0));

    // Exibição do menu inicial
    printf("░░░░░░ Super Trunfo ░░░░░░\n");
    printf("\n");
    printf("▒▒▒▒Menu do jogo▒▒▒▒\n");
    printf("1 — Jogar\n");
    printf("2 — Regras\n");
    printf("3 — Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    printf("\n");

    switch (opcao) {
        case 1:
            // Início do jogo
            printf("Inicializando o jogo...\n");
            printf("Escolha o modo de jogo:\n");
            printf("1 — Jogador vs Jogador\n");
            printf("2 — Jogador vs Computador\n");
            printf("Escolha uma opção: ");
            scanf("%d", &escolhaModo);
            printf("\n");

            // Exibição da escolha do modo de jogo
            if (escolhaModo == 1) {
                printf("Modo de jogo: Jogador vs Jogador\n");
                printf("Carregando....\n");
                printf("\n");

                printf("Escolha das Cartas\n");
                printf("Jogador 1, escolha sua carta (1 ou 2) ");
                scanf("%d", &escolhaCarta);

                // Exibição da escolha da carta e resultado desta escolha
                if (escolhaCarta == 1) {
                    carta1 = 1;
                    carta2 = 2;
                    printf("Jogador 1 escolheu a Carta 1 e o Jogador 2 ficou com a Carta 2\n");
                    // jogador1 usa: estado1, codigoCarta1, nomeCidade1, populacao1, area1, pib1, pontosTuristicos1, densidadePop1, pibCapita1
                    // jogador2 usa: estado2, codigoCarta2, nomeCidade2, populacao2, area2, pib2, pontosTuristicos2, densidadePop2, pibCapita2
                } else if (escolhaCarta == 2) {
                    carta1 = 2;
                    carta2 = 1;
                    printf("Jogador 1 escolheu a Carta 2 e o Jogador 2 ficou com a Carta 1");
                    // jogador1 usa: estado2, codigoCarta2, nomeCidade2, populacao2, area2, pib2, pontosTuristicos2, densidadePop2, pibCapita2
                    // jogador2 usa: estado1, codigoCarta1, nomeCidade1, populacao1, area1, pib1, pontosTuristicos1, densidadePop1, pibCapita1
                } else {
                    printf("Opção inválida. Tente novamente.\n");
                    return 0;
                }
                printf("\n");

                // Cadastro dos dados das cartas para iniciar o jogo
                printf("Cadastro dos dados das cartas:\n");
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

                    // Cálculo da densidade populacional e PIB per capita
                    densidadePop1 = (float)populacao1 / area1;
                    densidadePop2 = (float)populacao2 / area2;

                    pibCapita1 = pib1 / populacao1;
                    pibCapita2 = pib2 / populacao2;

                // Exibição dos dados cadastrados
                printf("Dados cadastrados com sucesso! \n");
                printf("\n");
                printf("Assim ficaram as cartas:\n");
                printf("\n");

                printf("Carta 1: %c - %s (%s)\n", estado1, nomeCidade1, codigoCarta1);
                printf("População: %d\n", populacao1);
                printf("Área: %.2f km²\n", area1);
                printf("PIB: %.2f bilhões de reais\n", pib1);
                printf("Pontos turísticos: %d\n", pontosTuristicos1);
                printf("Densidade populacional: %.2f hab/km²\n", densidadePop1);
                printf("PIB per capita: %.5f reais\n", pibCapita1);
                printf("\n");

                printf("Carta 2: %c - %s (%s)\n", estado2, nomeCidade2, codigoCarta2);
                printf("População: %d\n", populacao2);
                printf("Área: %.2f km²\n", area2);
                printf("PIB: %.2f bilhões de reais\n", pib2);
                printf("Pontos turísticos: %d\n", pontosTuristicos2);
                printf("Densidade populacional: %.2f hab/km²\n", densidadePop2);
                printf("PIB per capita: %.5f reais\n", pibCapita2);
                printf("\n");

                // Definindo os nomes e atributos do jogador e do oponente de acordo com a carta escolhida
                if (carta1 == 1) {
                    nomeJogador = nomeCidade1;
                    nomeJogador2 = nomeCidade2;
                    popJogador = populacao1;
                    popJogador2 = populacao2;
                    areaJogador = area1;
                    areaJogador2 = area2;
                    pibJogador = pib1;
                    pibJogador2 = pib2;
                    ptJogador = pontosTuristicos1;
                    ptJogador2 = pontosTuristicos2;
                    densJogador = densidadePop1;
                    densJogador2 = densidadePop2;
                    pcapJogador = pibCapita1;
                    pcapJogador2 = pibCapita2;
                } else {
                    nomeJogador = nomeCidade2;
                    nomeJogador2 = nomeCidade1;
                    popJogador = populacao2;
                    popJogador2 = populacao1;
                    areaJogador = area2;
                    areaJogador2 = area1;
                    pibJogador = pib2;
                    pibJogador2 = pib1;
                    ptJogador = pontosTuristicos2;
                    ptJogador2 = pontosTuristicos1;
                    densJogador = densidadePop2;
                    densJogador2 = densidadePop1;
                    pcapJogador = pibCapita2;
                    pcapJogador2 = pibCapita1;
                }
                // Escolha do atributo para jogar
                printf("Escolha um atributo para jogar:\n");
                printf("1 — População\n");
                printf("2 — Área\n");
                printf("3 — PIB\n");
                printf("4 — Pontos turísticos\n");
                printf("5 — Densidade populacional\n");
                printf("6 — PIB per capita\n");
                printf("7 — Aleatório\n");
                printf("Escolha um atributo: ");
                scanf("%d", &atributos);
                printf("\n");

                // Verificação do atributo escolhido, comparação dos valores e resultado do jogo
                switch (atributos) {
                    case 1:
                        printf("Atributo escolhido: População\n");
                        printf("Jogador 1: Carta %d - %s - %d \n", carta1, nomeJogador, popJogador);
                        printf("Jogador 2: Carta %d - %s - %d\n",carta2, nomeJogador2, popJogador2);
                        if (popJogador > popJogador2) {
                            printf("Jogador 1 ganhou!\n");
                        } else if (popJogador < popJogador2) {
                            printf("Jogador 2 ganhou!\n");
                        } else {
                            printf("Empate!\n");
                        }
                    break;
                    case 2:
                        printf("Atributo escolhido: Área\n");
                        printf("Jogador 1: Carta %d - %s - %.2f km²\n", carta1, nomeJogador, areaJogador);
                        printf("Jogador 2: Carta %d - %s - %.2f km²\n", carta2, nomeJogador2, areaJogador2);
                        if (areaJogador > areaJogador2) {
                            printf("Jogador 1 ganhou!\n");
                        } else if (areaJogador < areaJogador2) {
                            printf("Jogador 2 ganhou!\n");
                        } else {
                            printf("Empate!\n");
                        }
                    break;
                    case 3:
                        printf("Atributo escolhido: PIB\n");
                        printf("Jogador 1: Carta %d - %s - %.2f bilhões de reais\n", carta1, nomeJogador, pibJogador);
                        printf("Jogador 2: Carta %d - %s - %.2f bilhões de reais\n", carta2, nomeJogador2, pibJogador2);
                        if (pibJogador > pibJogador2) {
                            printf("Jogador 1 ganhou!\n");
                        } else if (pibJogador < pibJogador2) {
                            printf("Jogador 2 ganhou!\n");
                        } else {
                            printf("Empate!\n");
                        }
                    break;
                    case 4:
                        printf("Atributo escolhido: Pontos turísticos\n");
                        printf("Jogador 1: Carta %d - %s - %d\n", carta1, nomeJogador, ptJogador);
                        printf("Jogador 2: Carta %d - %s - %d\n", carta2, nomeJogador2, ptJogador2);
                        if (ptJogador > ptJogador2) {
                            printf("Jogador 1 ganhou!\n");
                        } else if (ptJogador < ptJogador2) {
                            printf("Jogador 2 ganhou!\n");
                        } else {
                            printf("Empate!\n");
                        }
                    break;
                    case 5:
                        printf("Atributo escolhido: Densidade populacional\n");
                        printf("Jogador 1: Carta %d - %s - %.2f hab/km²\n", carta1, nomeJogador, densJogador);
                        printf("Jogador 2: Carta %d - %s - %.2f hab/km²\n", carta2, nomeJogador2, densJogador2);
                        if (densJogador < densJogador2) {
                            printf("Jogador 1 ganhou!\n");
                        } else if (densJogador > densJogador2) {
                            printf("Jogador 2 ganhou!\n");
                        } else {
                            printf("Empate!\n");
                        }
                    break;
                    case 6:
                        printf("Atributo escolhido: PIB per capita\n");
                        printf("Jogador 1: Carta %d - %s - %.5f reais\n", carta1, nomeJogador, pcapJogador);
                        printf("Jogador 2: Carta %d - %s = %.5f reais\n", carta2, nomeJogador2, pcapJogador2);
                        if (pcapJogador > pcapJogador2) {
                            printf("Jogador 1 ganhou!\n");
                        } else if (pcapJogador < pcapJogador2) {
                            printf("Jogador 2 ganhou!\n");
                        } else {
                            printf("Empate!\n");
                        }
                    break;
                    case 7:
                        if (atributos == 7) {
                            atributoSorteado = rand() % 6 + 1;
                            printf("Atributo escolhido aleatoriamente: %s\n", nomeAtributos[atributoSorteado - 1]);
                            switch (atributoSorteado) {
                                case 1:
                                    printf("Jogador 1: Carta %d - %s - %d\n", carta1, nomeJogador, popJogador);
                                    printf("Jogador 2: Carta %d - %s - %d\n", carta2, nomeJogador2, popJogador2);
                                    if (popJogador > popJogador2) {
                                        printf("Jogador 1 ganhou!\n");
                                    } else if (popJogador < popJogador2) {
                                        printf("Jogador 2 ganhou!\n");
                                    } else {
                                        printf("Empate!\n");
                                    }
                                break;
                                case 2:
                                    printf("Jogador 1: Carta %d - %s - %.2f km²\n", carta1, nomeJogador, areaJogador);
                                    printf("Jogador 2: Carta %d - %s - %.2f km²\n", carta2, nomeJogador2, areaJogador2);
                                    if (areaJogador > areaJogador2) {
                                        printf("Jogador 1 ganhou!\n");
                                    } else if (areaJogador < areaJogador2) {
                                        printf("Jogador 2 ganhou!\n");
                                    } else {
                                        printf("Empate!\n");
                                    }
                                break;
                                case 3:
                                    printf("Jogador 1: Carta %d - %s - %.2f bilhões de reais\n", carta1, nomeJogador, pibJogador);
                                    printf("Jogador 2: Carta %d - %s - %.2f bilhões de reais\n", carta2, nomeJogador2, pibJogador2);
                                    if (pibJogador > pibJogador2) {
                                        printf("Jogador 1 ganhou!\n");
                                    } else if (pibJogador< pibJogador2) {
                                        printf("Jogador 2 ganhou!\n");
                                    } else {
                                        printf("Empate!\n");
                                    }
                                break;
                                case 4:
                                    printf("Jogador 1: Carta %d - %s - %d\n", carta1, nomeJogador, ptJogador);
                                    printf("Jogador 2: Carta %d - %s - %d\n", carta2, nomeJogador2, ptJogador2);
                                    if (ptJogador > ptJogador2) {
                                        printf("Jogador 1 ganhou!\n");
                                    } else if (ptJogador < ptJogador2) {
                                        printf("Jogador 2 ganhou!\n");
                                    } else {
                                        printf("Empate!\n");
                                    }
                                break;
                                case 5:
                                    printf("Jogador 1: Carta %d - %s - %.2f hab/km²\n", carta1, nomeJogador, densJogador);
                                    printf("Jogador 2: Carta %d - %s - %.2f hab/km²\n", carta2, nomeJogador2, densJogador2);
                                    if (densJogador < densJogador2) {
                                        printf("Jogador 1 ganhou!\n");
                                    } else if (densJogador > densJogador2) {
                                        printf("Jogador 2 ganhou!\n");
                                    } else {
                                        printf("Empate!\n");
                                    }
                                break;
                                case 6:
                                    printf("Jogador 1: Carta %d - %s - %.3f reais\n", carta1, nomeJogador, pcapJogador);
                                    printf("Jogador 2: Carta %d - %s - %.3f reais\n", carta2, nomeJogador2, pcapJogador2);
                                    if (pcapJogador > pcapJogador2) {
                                        printf("Jogador 1 ganhou!\n");
                                    } else if (pcapJogador < pcapJogador2) {
                                        printf("Jogador 2 ganhou!\n");
                                    } else {
                                        printf("Empate!\n");
                                    }
                                break;
                                default:
                                    printf("Opção inválida!\n");
                                return 0;
                                }
                            }
                        }

                // Exibição da escolha do modo de jogo   
            }else if (escolhaModo == 2) {
                printf("Modo de jogo: Jogador vs Computador\n");
                printf("Carregando....\n");
                printf("\n");

                // Exibição da escolha da carta e resultado desta escolha
                printf("Escolha das Cartas\n");
                printf("Jogador, escolha sua carta (1 ou 2) ");
                scanf("%d", &escolhaCarta);

                if (escolhaCarta == 1) {
                    carta1 = 1;
                    carta2 = 2;
                    printf("Jogador escolheu a Carta 1 e o Computador ficou com a Carta 2\n");
                    // jogador1 usa: estado1, codigoCarta1, nomeCidade1, populacao1, area1, pib1, pontosTuristicos1, densidadePop1, pibCapita1
                    // jogador2 usa: estado2, codigoCarta2, nomeCidade2, populacao2, area2, pib2, pontosTuristicos2, densidadePop2, pibCapita2
                } else if (escolhaCarta == 2) {
                    carta1 = 2;
                    carta2 = 1;
                    printf("Jogador escolheu a Carta 2 e o Computador ficou com a Carta 1");
                    // jogador1 usa: estado2, codigoCarta2, nomeCidade2, populacao2, area2, pib2, pontosTuristicos2, densidadePop2, pibCapita2
                    // jogador2 usa: estado1, codigoCarta1, nomeCidade1, populacao1, area1, pib1, pontosTuristicos1, densidadePop1, pibCapita1
                } else {
                    printf("Opção inválida. Tente novamente.\n");
                    return 0;
                }
                printf("\n");

                // Cadastro dos dados das cartas para iniciar o jogo
                printf("Cadastro dos dados das cartas:\n");
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

                    // Cálculo da densidade populacional e PIB per capita
                    densidadePop1 = (float)populacao1 / area1;
                    densidadePop2 = (float)populacao2 / area2;

                    pibCapita1 = pib1 / populacao1;
                    pibCapita2 = pib2 / populacao2;

                // Exibição dos dados cadastrados
                printf("Dados cadastrados com sucesso! \n");
                printf("\n");
                printf("Assim ficaram as cartas:\n");
                printf("\n");

                printf("Carta 1: %c - %s (%s)\n", estado1, nomeCidade1, codigoCarta1);
                printf("População: %d\n", populacao1);
                printf("Área: %.2f km²\n", area1);
                printf("PIB: %.2f bilhões de reais\n", pib1);
                printf("Pontos turísticos: %d\n", pontosTuristicos1);
                printf("Densidade populacional: %.2f hab/km²\n", densidadePop1);
                printf("PIB per capita: %.3f reais\n", pibCapita1);
                printf("\n");

                printf("Carta 2: %c - %s (%s)\n", estado2, nomeCidade2, codigoCarta2);
                printf("População: %d\n", populacao2);
                printf("Área: %.2f km²\n", area2);
                printf("PIB: %.2f bilhões de reais\n", pib2);
                printf("Pontos turísticos: %d\n", pontosTuristicos2);
                printf("Densidade populacional: %.2f hab/km²\n", densidadePop2);
                printf("PIB per capita: %.3f reais\n", pibCapita2);
                printf("\n");

                // Definindo os nomes e atributos do jogador e do computador de acordo com a carta escolhida
                if (carta1 == 1) {
                    nomeJogador = nomeCidade1;
                    nomeComputador = nomeCidade2;
                    popJogador = populacao1;
                    popComputador = populacao2;
                    areaJogador = area1;
                    areaComputador = area2;
                    pibJogador = pib1;
                    pibComputador = pib2;
                    ptJogador = pontosTuristicos1;
                    ptComputador = pontosTuristicos2;
                    densJogador = densidadePop1;
                    densComputador = densidadePop2;
                    pcapJogador = pibCapita1;
                    pcapComputador = pibCapita2;
                } else {
                    nomeJogador = nomeCidade2;
                    nomeComputador = nomeCidade1;
                    popJogador = populacao2;
                    popComputador = populacao1;
                    areaJogador = area2;
                    areaComputador = area1;
                    pibJogador = pib2;
                    pibComputador = pib1;
                    ptJogador = pontosTuristicos2;
                    ptComputador = pontosTuristicos1;
                    densJogador = densidadePop2;
                    densComputador = densidadePop1;
                    pcapJogador = pibCapita2;
                    pcapComputador = pibCapita1;
                }

                // Escolha do atributo para jogar
                printf("Escolha um atributo para jogar:\n");
                printf("1 — População\n");
                printf("2 — Área\n");
                printf("3 — PIB\n");
                printf("4 — Pontos turísticos\n");
                printf("5 — Densidade populacional\n");
                printf("6 — PIB per capita\n");
                printf("7 — Aleatório\n");
                printf("Escolha um atributo: ");
                scanf("%d", &atributos);
                printf("\n");

                // Verificação do atributo escolhido, comparação dos valores e resultado do jogo
                switch (atributos) {
                    case 1:
                        printf("Atributo escolhido: População\n");
                        printf("Jogador: Carta %d - %s - %d \n", carta1, nomeJogador, popJogador);
                        printf("computador: Carta %d - %s - %d\n",carta2, nomeComputador, popComputador);
                        if (popJogador > popComputador) {
                            printf("Jogador ganhou!\n");
                        } else if (popJogador < popComputador) {
                            printf("Computador ganhou!\n");
                        } else {
                            printf("Empate!\n");
                        }
                    break;
                    case 2:
                        printf("Atributo escolhido: Área\n");
                        printf("Jogador: Carta %d - %s - %.2f km²\n", carta1, nomeJogador, areaJogador);
                        printf("Computador: Carta %d - %s - %.2f km²\n", carta2, nomeComputador, areaComputador);
                        if (areaJogador > areaComputador) {
                            printf("Jogador ganhou!\n");
                        } else if (areaJogador < areaComputador) {
                            printf("Computador ganhou!\n");
                        } else {
                            printf("Empate!\n");
                        }
                    break;
                    case 3:
                        printf("Atributo escolhido: PIB\n");
                        printf("Jogador: Carta %d - %s - %.2f bilhões de reais\n", carta1, nomeJogador, pibJogador);
                        printf("Computador: Carta %d - %s - %.2f bilhões de reais\n", carta2, nomeComputador, pibComputador);
                        if (pibJogador > pibComputador) {
                            printf("Jogador ganhou!\n");
                        } else if (pibJogador < pibComputador) {
                            printf("Computador ganhou!\n");
                        } else {
                            printf("Empate!\n");
                        }
                    break;
                    case 4:
                        printf("Atributo escolhido: Pontos turísticos\n");
                        printf("Jogador: Carta %d - %s - %d\n", carta1, nomeJogador, ptJogador);
                        printf("Computador: Carta %d - %s - %d\n", carta2, nomeComputador, ptComputador);
                        if (ptJogador > ptComputador) {
                            printf("Jogador ganhou!\n");
                        } else if (ptJogador < ptComputador) {
                            printf("Computador ganhou!\n");
                        } else {
                            printf("Empate!\n");
                        }
                    break;
                    case 5:
                        printf("Atributo escolhido: Densidade populacional\n");
                        printf("Jogador: Carta %d - %s - %.2f hab/km²\n", carta1, nomeJogador, densJogador);
                        printf("Computador: Carta %d - %s - %.2f hab/km²\n", carta2, nomeComputador, densComputador);
                        if (densJogador < densComputador) {
                            printf("Jogador ganhou!\n");
                        } else if (densJogador > densComputador) {
                            printf("Computador ganhou!\n");
                        } else {
                            printf("Empate!\n");
                        }
                    break;
                    case 6:
                        printf("Atributo escolhido: PIB per capita\n");
                        printf("Jogador: Carta %d - %s - %.5f reais\n", carta1, nomeJogador, pcapJogador);
                        printf("Computador: Carta %d - %s - %.5f reais\n", carta2, nomeComputador, pcapComputador);
                        if (pcapJogador > pcapComputador) {
                            printf("Jogador ganhou!\n");
                        } else if (pcapJogador < pcapComputador) {
                            printf("Computador ganhou!\n");
                        } else {
                            printf("Empate!\n");
                        }
                    break;
                    case 7:
                        if (atributos == 7) {
                            atributoSorteado = rand() % 6 + 1;
                            printf("Atributo escolhido aleatoriamente: %s\n", nomeAtributos[atributoSorteado - 1]);
                            switch (atributoSorteado) {
                                case 1:
                                    printf("Jogador: Carta %d - %s - %d\n", carta1, nomeJogador, popJogador);
                                    printf("Computador: Carta %d - %s - %d\n", carta2, nomeComputador, popComputador);
                                    if (popJogador > popComputador) {
                                        printf("Jogador ganhou!\n");
                                    } else if (popJogador < popComputador) {
                                        printf("Computador ganhou!\n");
                                    } else {
                                        printf("Empate!\n");
                                    }
                                break;
                                case 2:
                                    printf("Jogador: Carta %d - %s - %.2f km²\n", carta1, nomeJogador, areaJogador);
                                    printf("Computador: Carta %d - %s - %.2f km²\n", carta2, nomeComputador, areaComputador);
                                    if (areaJogador > areaComputador) {
                                        printf("Jogador ganhou!\n");
                                    } else if (areaJogador < areaComputador) {
                                        printf("Computador ganhou!\n");
                                    } else {
                                        printf("Empate!\n");
                                    }
                                break;
                                case 3:
                                    printf("Jogador: Carta %d - %s - %.2f bilhões de reais\n", carta1, nomeJogador, pibJogador);
                                    printf("Computador: Carta %d - %s - %.2f bilhões de reais\n", carta2, nomeComputador, pibComputador);
                                    if (pibJogador > pibComputador) {
                                        printf("Jogador ganhou!\n");
                                    } else if (pibJogador< pibComputador) {
                                        printf("Computador ganhou!\n");
                                    } else {
                                        printf("Empate!\n");
                                    }
                                break;
                                case 4:
                                    printf("Jogador: Carta %d - %s - %d\n", carta1, nomeJogador, ptJogador);
                                    printf("Computador: Carta %d - %s - %d\n", carta2, nomeComputador, ptComputador);
                                    if (ptJogador > ptComputador) {
                                        printf("Jogador ganhou!\n");
                                    } else if (ptJogador < ptComputador) {
                                        printf("Computador ganhou!\n");
                                    } else {
                                        printf("Empate!\n");
                                    }
                                break;
                                case 5:
                                    printf("Jogador: Carta %d - %s - %.2f hab/km²\n", carta1, nomeJogador, densJogador);
                                    printf("Computador: Carta %d - %s - %.2f hab/km²\n", carta2, nomeComputador, densComputador);
                                    if (densJogador < densComputador) {
                                        printf("Jogador ganhou!\n");
                                    } else if (densJogador > densComputador) {
                                        printf("Computador ganhou!\n");
                                    } else {
                                        printf("Empate!\n");
                                    }
                                break;
                                case 6:
                                    printf("Jogador: Carta %d - %s - %.3f reais\n", carta1, nomeJogador, pcapJogador);
                                    printf("Computador: Carta %d - %s - %.3f reais\n", carta2, nomeComputador, pcapComputador);
                                    if (pcapJogador > pcapComputador) {
                                        printf("Jogador ganhou!\n");
                                    } else if (pcapJogador < pcapComputador) {
                                        printf("Computador ganhou!\n");
                                    } else {
                                        printf("Empate!\n");
                                    }
                                break;
                                default:
                                    printf("Opção inválida!\n");
                                return 0;
                            }
                        }
                    break;
                    default:
                        printf("Opção inválida!\n");
                    return 0;
                }
            } else {
                printf("Opção inválida. Tente novamente.\n");
                return 0;
            }
        break;
        case 2:
            // Exibição das regras do jogo
            printf("Regras do jogo:\n");
            printf("Selecione a opção correspondente a regra que deseja consultar:\n");
            printf("1 — Como jogar\n");
            printf("2 — Atributos das cartas\n");
            printf("3 — Como é calculada a densidade populacional e o PIB per capita\n");
            printf("4 — sair\n");
            printf("Escolha uma opção: ");
            scanf("%d", &escolhaRegras);
            printf("\n");

            switch (escolhaRegras) {
                case 1:
                    printf("Como jogar:\n");
                    printf("1. Escolha o modo de jogo: Jogador vs Jogador ou Jogador vs Computador.\n");
                    printf("2. Escolha uma carta\n");
                    printf("3. Cadastre os dados das cartas, incluindo estado, código, nome da cidade, população, área, PIB e pontos turísticos.\n");
                    printf("4. Densidade populacional e PIB per capita serão calculados automaticamente.\n");
                    printf("5. Escolha um atributo para jogar: População, Área, PIB, Pontos turísticos, Densidade populacional, PIB per capita ou escolha aleatória.\n");
                    printf("6. O jogador com o maior valor do atributo escolhido vence a rodada, exceto em Densidade Populacional.\n");
                    printf("7. Ao escolher Densidade Populacional, o jogador com menor valor vence.\n");
                break;
                case 2:
                    printf("Atributos das cartas:\n");
                    printf("1. População: Número de habitantes da cidade. Vence quem tiver maior valor.\n");
                    printf("2. Área: Tamanho da cidade em km². Vence quem tiver maior valor.\n");
                    printf("3. PIB: Produto Interno Bruto da cidade em bilhões de reais. Vence quem tiver maior valor.\n");
                    printf("4. Pontos turísticos: Número de pontos turísticos na cidade. Vence quem tiver maior valor.\n");
                    printf("5. Densidade populacional: Número de habitantes por quilômetro quadrado (hab/km²). Vence quem tiver menor valor.\n");
                    printf("6. PIB per capita: Número de reais por pessoa. Vence quem tiver maior valor.\n");
                break;
                case 3:
                printf("Cálculo da Densidade Populacional e PIB per capita:\n");
                printf("1. A Densidade populacional é calculada utilizando o valor da população e dividindo pelo valor da área (população / área).\n");
                printf("2. O PIB per capita é calculado utilizando o valor do PIB e dividindo pelo valor da população (PIB / população).\n");
                break;
                case 4:
                    printf("Saindo das regras...\n");
                return 0;
            }
        break;
        case 3:
            printf("Saindo do jogo...\n");
            return 0;
        break;
        default:
            printf("Opção inválida. Tente novamente.\n");
        break;
    }

    return 0;
}