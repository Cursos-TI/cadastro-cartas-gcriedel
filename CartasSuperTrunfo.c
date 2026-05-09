// Desafio Super Trunfo - Países
// Tema 3
// Objetivo: Nível Mestre
#include <stdio.h>
int main()
{

    // ===== CARTA 1 =====

    // aqui eu criei as variáveis da carta 1
    // cada uma vai guardar uma informação da cidade
    char estado1;     // uma letra (A até H)
    char codigo1[4];  // tipo "A01" (3 caracteres + final da string)
    char cidade1[50]; // nome da cidade (até 49 letras + final)

    // agora a população é unsigned long int
    // isso permite guardar números maiores e sem negativos
    unsigned long int populacao1;

    float area1; // área da cidade
    float pib1;  // PIB da cidade
    int pontos1; // quantidade de pontos turísticos

    // novas variáveis para os cálculos
    float densidade1;    // vai guardar a densidade populacional
    float pibPerCapita1; // vai guardar o PIB per capita
    float superPoder1;   // vai guardar o super poder da carta

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

    // população (agora usando unsigned long int)
    printf("Digite a populacao (apenas numeros inteiros, ex: 1234567): ");
    scanf("%lu", &populacao1);

    // área (número com decimal)
    printf("Digite a area em km2 (use ponto, ex: 1234.56): ");
    scanf("%f", &area1);

    // PIB (também decimal)
    printf("Digite o PIB em bilhoes (use ponto, ex: 300.50): ");
    scanf("%f", &pib1);

    // pontos turísticos (inteiro)
    printf("Digite os pontos turisticos (numero inteiro): ");
    scanf("%d", &pontos1);

    // aqui eu faço os calculos da carta 1

    // densidade = população dividida pela área
    densidade1 = populacao1 / area1;

    // PIB per capita = PIB (em reais) dividido pela população
    // como o PIB está em bilhões, eu multiplico por 1 bilhão
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;

    // cálculo do super poder
    // estou somando todos os atributos numéricos
    // no caso da densidade, uso o inverso dela
    // porque menor densidade significa maior poder
    superPoder1 =
        (float)populacao1 +
        area1 +
        pib1 +
        pontos1 +
        pibPerCapita1 +
        (1 / densidade1);

    // ===== CARTA 2 =====

    // mesma lógica da carta 1
    char estado2;
    char codigo2[4];
    char cidade2[50];

    // população agora também é unsigned long int
    unsigned long int populacao2;

    float area2;
    float pib2;
    int pontos2;

    // variáveis de cálculo da carta 2
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o estado (uma letra de A a H, sem espaço): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo (exatamente 3 caracteres, ex: B02): ");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade (pode ter espacos): ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a populacao (apenas numeros inteiros, ex: 1234567): ");
    scanf("%lu", &populacao2);

    printf("Digite a area em km2 (use ponto, ex: 1234.56): ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhoes (use ponto, ex: 300.50): ");
    scanf("%f", &pib2);

    printf("Digite os pontos turisticos (numero inteiro): ");
    scanf("%d", &pontos2);

    // cálculos da carta 2
    densidade2 = populacao2 / area2;

    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    superPoder2 =
        (float)populacao2 +
        area2 +
        pib2 +
        pontos2 +
        pibPerCapita2 +
        (1 / densidade2);

    // ===== MOSTRANDO OS DADOS =====

    printf("\n\n--- CARTAS CADASTRADAS ---\n");

    // mostrando a carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);

    // para unsigned long int uso %lu
    printf("Populacao: %lu\n", populacao1);

    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);

    // mostrando os cálculos da carta 1
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // mostrando a carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);

    // mostrando os cálculos da carta 2
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // ===== COMPARAÇÃO DAS CARTAS =====

    // aqui eu faço as comparações
    // o resultado será:
    // 1 = carta 1 venceu
    // 0 = carta 2 venceu

    printf("\n\n=== Comparacao de Cartas ===\n");

    // população -> maior vence
    printf("Populacao: Carta 1 venceu (%d)\n",
           populacao1 > populacao2);

    // área -> maior vence
    printf("Area: Carta 1 venceu (%d)\n",
           area1 > area2);

    // PIB -> maior vence
    printf("PIB: Carta 1 venceu (%d)\n",
           pib1 > pib2);

    // pontos turísticos -> maior vence
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n",
           pontos1 > pontos2);

    // densidade populacional -> menor vence
    // aqui a lógica é invertida
    printf("Densidade Populacional: Carta 1 venceu (%d)\n",
           densidade1 < densidade2);

    // PIB per capita -> maior vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n",
           pibPerCapita1 > pibPerCapita2);

    // super poder -> maior vence
    printf("Super Poder: Carta 1 venceu (%d)\n",
           superPoder1 > superPoder2);

    // finalizando o programa
    return 0;
}