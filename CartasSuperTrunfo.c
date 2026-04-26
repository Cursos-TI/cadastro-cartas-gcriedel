#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{

    // ===== CARTA 1 =====

    // aqui eu criei as variáveis da carta 1
    // cada uma vai guardar uma informação da cidade
    char estado1;     // uma letra (A até H)
    char codigo1[4];  // tipo "A01" (3 caracteres + final da string)
    char cidade1[50]; // nome da cidade (até 49 letras + final)
    int populacao1;   // número de habitantes
    float area1;      // área da cidade
    float pib1;       // PIB da cidade
    int pontos1;      // quantidade de pontos turísticos

    // começando o cadastro da primeira carta
    printf("=== Cadastro da Carta 1 ===\n");

    // pede o estado (só uma letra)
    printf("Digite o estado (uma letra de A a H, sem espaço): ");
    scanf(" %c", &estado1);
    // esse espaço antes do %c é importante, senão ele pode pegar um ENTER perdido

    // pede o código tipo A01
    printf("Digite o codigo (exatamente 3 caracteres, ex: A01): ");
    scanf("%3s", codigo1);
    // o 3 aqui limita a quantidade de caracteres pra não dar problema no vetor

    // pede o nome da cidade
    printf("Digite o nome da cidade (pode ter espacos): ");
    scanf(" %[^\n]", cidade1);
    // esse formato lê até apertar ENTER, então dá pra escrever nome com espaço

    // população (número inteiro)
    printf("Digite a populacao (apenas numeros inteiros, ex: 1234567): ");
    scanf("%d", &populacao1);

    // área (número com decimal)
    printf("Digite a area em km2 (use ponto, ex: 1234.56): ");
    scanf("%f", &area1);

    // PIB (também decimal)
    printf("Digite o PIB em bilhoes (use ponto, ex: 300.50): ");
    scanf("%f", &pib1);

    // pontos turísticos (inteiro)
    printf("Digite os pontos turisticos (numero inteiro): ");
    scanf("%d", &pontos1);

    // ===== CARTA 2 =====

    // basicamente a mesma coisa da carta 1, só que com outras variáveis
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o estado (uma letra de A a H, sem espaço): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo (exatamente 3 caracteres, ex: B02): ");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade (pode ter espacos): ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a populacao (apenas numeros inteiros): ");
    scanf("%d", &populacao2);

    printf("Digite a area em km2 (use ponto para decimal): ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhoes (use ponto): ");
    scanf("%f", &pib2);

    printf("Digite os pontos turisticos (numero inteiro): ");
    scanf("%d", &pontos2);

    // ===== MOSTRANDO OS DADOS =====

    // agora é só mostrar tudo que foi digitado
    printf("\n\n--- CARTAS CADASTRADAS ---\n");

    // mostrando a carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    // %.2f serve pra mostrar só 2 casas depois da vírgula
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);

    // mostrando a carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);

    // finalizando o programa
    return 0;
}
