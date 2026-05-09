// Desafio Super Trunfo - Países
// Tema 5
// Objetivo: Nível Aventureiro - Modulo 3
#include <stdio.h>
int main()
{

    // ===== CARTA 1 =====

    // aqui eu criei as variáveis da carta 1
    // cada uma vai guardar uma informação da cidade/país
    char estado1;     // uma letra (A até H)
    char codigo1[4];  // tipo "A01" (3 caracteres + final da string)
    char cidade1[50]; // nome da cidade/país

    unsigned long int populacao1; // população grande (sem negativos)

    float area1; // área do território
    float pib1;  // PIB do país
    int pontos1; // pontos turísticos

    // variáveis calculadas
    float densidade1;    // densidade populacional
    float pibPerCapita1; // PIB per capita

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

    // calculos carta 1
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

    // calculos carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    // ===== MENU INTERATIVO =====

    int opcao;

    printf("\n\n=== MENU DE COMPARACAO ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO DA COMPARACAO ===\n");

    // ===== SWITCH DO MENU =====

    switch (opcao)
    {
        case 1:
            // POPULAÇÃO (maior vence)

            printf("Atributo: Populacao\n\n");

            printf("%s: %lu\n", cidade1, populacao1);
            printf("%s: %lu\n", cidade2, populacao2);

            if (populacao1 > populacao2)
            {
                printf("\nResultado: Carta 1 venceu!\n");
            }
            else if (populacao2 > populacao1)
            {
                printf("\nResultado: Carta 2 venceu!\n");
            }
            else
            {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 2:
            // ÁREA (maior vence)

            printf("Atributo: Area\n\n");

            printf("%s: %.2f\n", cidade1, area1);
            printf("%s: %.2f\n", cidade2, area2);

            if (area1 > area2)
            {
                printf("\nResultado: Carta 1 venceu!\n");
            }
            else if (area2 > area1)
            {
                printf("\nResultado: Carta 2 venceu!\n");
            }
            else
            {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 3:
            // PIB (maior vence)

            printf("Atributo: PIB\n\n");

            printf("%s: %.2f\n", cidade1, pib1);
            printf("%s: %.2f\n", cidade2, pib2);

            if (pib1 > pib2)
            {
                printf("\nResultado: Carta 1 venceu!\n");
            }
            else if (pib2 > pib1)
            {
                printf("\nResultado: Carta 2 venceu!\n");
            }
            else
            {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 4:
            // PONTOS TURÍSTICOS (maior vence)

            printf("Atributo: Pontos Turisticos\n\n");

            printf("%s: %d\n", cidade1, pontos1);
            printf("%s: %d\n", cidade2, pontos2);

            if (pontos1 > pontos2)
            {
                printf("\nResultado: Carta 1 venceu!\n");
            }
            else if (pontos2 > pontos1)
            {
                printf("\nResultado: Carta 2 venceu!\n");
            }
            else
            {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 5:
            // DENSIDADE (MENOR vence)

            printf("Atributo: Densidade Demografica\n\n");

            printf("%s: %.2f\n", cidade1, densidade1);
            printf("%s: %.2f\n", cidade2, densidade2);

            if (densidade1 < densidade2)
            {
                printf("\nResultado: Carta 1 venceu!\n");
            }
            else if (densidade2 < densidade1)
            {
                printf("\nResultado: Carta 2 venceu!\n");
            }
            else
            {
                printf("\nResultado: Empate!\n");
            }
            break;

        default:
            // caso o usuário digite opção inválida

            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}