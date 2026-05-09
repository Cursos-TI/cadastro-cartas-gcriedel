// Desafio Super Trunfo - Países
// Tema 4
// Objetivo: Nível Novato - Modulo 3
#include <stdio.h>
int main()
{

    // ===== CARTA 1 =====

    // aqui eu criei as variáveis da carta 1
    // cada uma vai guardar uma informação da cidade
    char estado1;     // uma letra (A até H)
    char codigo1[4];  // tipo "A01" (3 caracteres + final da string)
    char cidade1[50]; // nome da cidade (até 49 letras + final)

    // população (agora usando unsigned long int)
    unsigned long int populacao1;

    float area1; // área da cidade
    float pib1;  // PIB da cidade
    int pontos1; // quantidade de pontos turísticos

    // variáveis de cálculo
    float densidade1;    // vai guardar a densidade populacional
    float pibPerCapita1; // vai guardar o PIB per capita

    // começando o cadastro da primeira carta
    printf("=== Cadastro da Carta 1 ===\n");

    // pede o estado (só uma letra)
    printf("Digite o estado (uma letra de A a H, sem espaço): ");
    scanf(" %c", &estado1);

    // pede o código tipo A01
    printf("Digite o codigo (exatamente 3 caracteres, ex: A01): ");
    scanf("%3s", codigo1);

    // pede o nome da cidade
    printf("Digite o nome da cidade (pode ter espacos): ");
    scanf(" %[^\n]", cidade1);

    // população
    printf("Digite a populacao (apenas numeros inteiros, ex: 1234567): ");
    scanf("%lu", &populacao1);

    // área
    printf("Digite a area em km2 (use ponto, ex: 1234.56): ");
    scanf("%f", &area1);

    // PIB
    printf("Digite o PIB em bilhoes (use ponto, ex: 300.50): ");
    scanf("%f", &pib1);

    // pontos turísticos
    printf("Digite os pontos turisticos (numero inteiro): ");
    scanf("%d", &pontos1);

    // aqui eu faço os calculos da carta 1

    // densidade = população dividida pela área
    densidade1 = populacao1 / area1;

    // PIB per capita
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;

    // ===== CARTA 2 =====

    // aqui eu criei as variáveis da carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];

    // população da carta 2
    unsigned long int populacao2;

    float area2;
    float pib2;
    int pontos2;

    // variáveis de cálculo da carta 2
    float densidade2;
    float pibPerCapita2;

    // começando o cadastro da segunda carta
    printf("\n=== Cadastro da Carta 2 ===\n");

    // estado
    printf("Digite o estado (uma letra de A a H, sem espaço): ");
    scanf(" %c", &estado2);

    // código
    printf("Digite o codigo (exatamente 3 caracteres, ex: B02): ");
    scanf("%3s", codigo2);

    // cidade
    printf("Digite o nome da cidade (pode ter espacos): ");
    scanf(" %[^\n]", cidade2);

    // população
    printf("Digite a populacao (apenas numeros inteiros, ex: 1234567): ");
    scanf("%lu", &populacao2);

    // área
    printf("Digite a area em km2 (use ponto, ex: 1234.56): ");
    scanf("%f", &area2);

    // PIB
    printf("Digite o PIB em bilhoes (use ponto, ex: 300.50): ");
    scanf("%f", &pib2);

    // pontos turísticos
    printf("Digite os pontos turisticos (numero inteiro): ");
    scanf("%d", &pontos2);

    // aqui eu faço os calculos da carta 2

    // densidade populacional
    densidade2 = populacao2 / area2;

    // PIB per capita
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    // ===== ESCOLHA DO ATRIBUTO PARA COMPARAÇÃO =====

    printf("\n\n=== Comparacao de Cartas ===\n");
    printf("Atributo escolhido: PIB per Capita\n\n");

    // mostrando os valores que serão comparados
    printf("Carta 1 - %s: %.2f\n", cidade1, pibPerCapita1);
    printf("Carta 2 - %s: %.2f\n", cidade2, pibPerCapita2);

    // ===== LÓGICA DE COMPARAÇÃO =====

    if (pibPerCapita1 > pibPerCapita2)
    {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    }
    else if (pibPerCapita2 > pibPerCapita1)
    {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    else
    {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}