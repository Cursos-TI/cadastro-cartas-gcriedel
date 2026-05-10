// Desafio Super Trunfo - Países
// Tema 6
// Objetivo: Nível Mestre - Modulo 3

#include <stdio.h>

int main() {

    // ===== CARTA 1 =====
    // aqui eu criei as variáveis da carta 1
    // cada uma vai guardar uma informação da cidade/país

    char estado1;                 // uma letra (A até H)
    char codigo1[4];              // tipo "A01"
    char cidade1[50];             // nome da cidade/país
    unsigned long int populacao1; // população
    float area1;                  // área
    float pib1;                   // PIB
    int pontos1;                  // pontos turísticos

    // variáveis calculadas
    float densidade1;
    float pibPerCapita1;

    // ===== CARTA 2 =====

    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;

    float densidade2;
    float pibPerCapita2;

    // ===== CADASTRO CARTA 1 =====

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite o estado (uma letra de A a H, sem espaço): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo (exatamente 3 caracteres, ex: A01): ");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade/país: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a populacao (ex: 1234567): ");
    scanf("%lu", &populacao1);

    printf("Digite a area (ex: 1234.56): ");
    scanf("%f", &area1);

    printf("Digite o PIB (ex: 300.50): ");
    scanf("%f", &pib1);

    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontos1);

    // cálculos da carta 1

    densidade1 = populacao1 / area1;

    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;

    // ===== CADASTRO CARTA 2 =====

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o estado (uma letra de A a H, sem espaço): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo (exatamente 3 caracteres, ex: B02): ");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade/país: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a populacao (ex: 1234567): ");
    scanf("%lu", &populacao2);

    printf("Digite a area (ex: 1234.56): ");
    scanf("%f", &area2);

    printf("Digite o PIB (ex: 300.50): ");
    scanf("%f", &pib2);

    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontos2);

    // cálculos da carta 2

    densidade2 = populacao2 / area2;

    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    // =========================================================
    // MENU DE COMPARAÇÃO
    // agora o jogador poderá escolher DOIS atributos
    // =========================================================

    int atributo1;
    int atributo2;

    // variáveis que vão guardar os valores dos atributos escolhidos

    float valor1Carta1 = 0;
    float valor1Carta2 = 0;

    float valor2Carta1 = 0;
    float valor2Carta2 = 0;

    // variáveis para guardar os nomes dos atributos

    char nomeAtributo1[50];
    char nomeAtributo2[50];

    // ===== ESCOLHA DO PRIMEIRO ATRIBUTO =====

    printf("\n\n=== MENU DE COMPARACAO ===\n");

    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");

    printf("Opcao: ");
    scanf("%d", &atributo1);

    // =========================================================
    // MENU DINÂMICO DO SEGUNDO ATRIBUTO
    // o atributo escolhido antes não aparece novamente
    // =========================================================

    printf("\nEscolha o SEGUNDO atributo:\n");

    switch (atributo1) {

        case 1:
            printf("2 - Area\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turisticos\n");
            printf("5 - Densidade Demografica\n");
            break;

        case 2:
            printf("1 - Populacao\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turisticos\n");
            printf("5 - Densidade Demografica\n");
            break;

        case 3:
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("4 - Pontos Turisticos\n");
            printf("5 - Densidade Demografica\n");
            break;

        case 4:
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("3 - PIB\n");
            printf("5 - Densidade Demografica\n");
            break;

        case 5:
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turisticos\n");
            break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    printf("Opcao: ");
    scanf("%d", &atributo2);

    // aqui estou validando se o jogador tentou repetir o atributo

    if (atributo1 == atributo2) {

        printf("\nErro: voce nao pode escolher o mesmo atributo duas vezes!\n");

        return 0;
    }

    // =========================================================
    // CAPTURANDO O VALOR DO PRIMEIRO ATRIBUTO
    // =========================================================

    switch (atributo1) {

        case 1:
            valor1Carta1 = populacao1;
            valor1Carta2 = populacao2;

            sprintf(nomeAtributo1, "Populacao");
            break;

        case 2:
            valor1Carta1 = area1;
            valor1Carta2 = area2;

            sprintf(nomeAtributo1, "Area");
            break;

        case 3:
            valor1Carta1 = pib1;
            valor1Carta2 = pib2;

            sprintf(nomeAtributo1, "PIB");
            break;

        case 4:
            valor1Carta1 = pontos1;
            valor1Carta2 = pontos2;

            sprintf(nomeAtributo1, "Pontos Turisticos");
            break;

        case 5:
            valor1Carta1 = densidade1;
            valor1Carta2 = densidade2;

            sprintf(nomeAtributo1, "Densidade Demografica");
            break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // =========================================================
    // CAPTURANDO O VALOR DO SEGUNDO ATRIBUTO
    // =========================================================

    switch (atributo2) {

        case 1:
            valor2Carta1 = populacao1;
            valor2Carta2 = populacao2;

            sprintf(nomeAtributo2, "Populacao");
            break;

        case 2:
            valor2Carta1 = area1;
            valor2Carta2 = area2;

            sprintf(nomeAtributo2, "Area");
            break;

        case 3:
            valor2Carta1 = pib1;
            valor2Carta2 = pib2;

            sprintf(nomeAtributo2, "PIB");
            break;

        case 4:
            valor2Carta1 = pontos1;
            valor2Carta2 = pontos2;

            sprintf(nomeAtributo2, "Pontos Turisticos");
            break;

        case 5:
            valor2Carta1 = densidade1;
            valor2Carta2 = densidade2;

            sprintf(nomeAtributo2, "Densidade Demografica");
            break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // =========================================================
    // COMPARAÇÃO DOS ATRIBUTOS
    // densidade é a exceção: menor valor vence
    // =========================================================

    float somaCarta1 = 0;
    float somaCarta2 = 0;

    // comparação atributo 1

    if (atributo1 == 5) {

        // densidade: menor vence

        somaCarta1 += (valor1Carta1 < valor1Carta2) ? 1 : 0;
        somaCarta2 += (valor1Carta2 < valor1Carta1) ? 1 : 0;

    } else {

        // regra normal: maior vence

        somaCarta1 += valor1Carta1;
        somaCarta2 += valor1Carta2;
    }

    // comparação atributo 2

    if (atributo2 == 5) {

        somaCarta1 += (valor2Carta1 < valor2Carta2) ? 1 : 0;
        somaCarta2 += (valor2Carta2 < valor2Carta1) ? 1 : 0;

    } else {

        somaCarta1 += valor2Carta1;
        somaCarta2 += valor2Carta2;
    }

    // =========================================================
    // RESULTADO FINAL
    // =========================================================

    printf("\n\n=== RESULTADO DA COMPARACAO ===\n");

    printf("\nCarta 1: %s\n", cidade1);
    printf("Carta 2: %s\n", cidade2);

    printf("\nAtributos escolhidos:\n");
    printf("- %s\n", nomeAtributo1);
    printf("- %s\n", nomeAtributo2);

    // mostrando os valores do atributo 1

    printf("\n%s:\n", nomeAtributo1);

    printf("%s: %.2f\n", cidade1, valor1Carta1);
    printf("%s: %.2f\n", cidade2, valor1Carta2);

    // mostrando os valores do atributo 2

    printf("\n%s:\n", nomeAtributo2);

    printf("%s: %.2f\n", cidade1, valor2Carta1);
    printf("%s: %.2f\n", cidade2, valor2Carta2);

    // mostrando a soma final

    printf("\n=== SOMA DOS ATRIBUTOS ===\n");

    printf("%s: %.2f\n", cidade1, somaCarta1);
    printf("%s: %.2f\n", cidade2, somaCarta2);

    // operador ternário para decidir vencedor

    printf("\n=== VENCEDOR ===\n");

    (somaCarta1 > somaCarta2)

        ? printf("Carta 1 venceu!\n")

        : (somaCarta2 > somaCarta1)

            ? printf("Carta 2 venceu!\n")

            : printf("Empate!\n");

    return 0;
}