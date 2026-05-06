#include <stdio.h>

int main() {

    // ==============================
    // Declaração das variáveis
    // ==============================
    // Cada conjunto de variáveis representa uma carta (cidade)
    
    // Carta 1
    char estado1[20], codigo1[10], cidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Carta 2
    char estado2[20], codigo2[10], cidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // ==============================
    // Cadastro da Carta 1
    // ==============================
    // Nesta etapa, o usuário insere os dados da primeira cidade

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // ==============================
    // Cadastro da Carta 2
    // ==============================
    // O mesmo processo é repetido para a segunda cidade

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // ==============================
    // Exibição dos dados cadastrados
    // ==============================
    // Mostra as informações das duas cartas para conferência

    printf("\n=== Dados da Carta 1 ===\n");
    printf("Cidade: %s\nPopulacao: %d\nArea: %.2f km²\nPIB: %.2f\nPontos Turisticos: %d\n",
           cidade1, populacao1, area1, pib1, pontosTuristicos1);

    printf("\n=== Dados da Carta 2 ===\n");
    printf("Cidade: %s\nPopulacao: %d\nArea: %.2f km²\nPIB: %.2f\nPontos Turisticos: %d\n",
           cidade2, populacao2, area2, pib2, pontosTuristicos2);

    // ==============================
    // Comparação das cartas
    // ==============================
    // Neste exemplo, a comparação será feita com base na população
    // Regra: vence a cidade com maior número de habitantes

    printf("\n=== Comparacao por Populacao ===\n");

    if (populacao1 > populacao2) {
        printf("Vencedora: Carta 1 (%s)\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Vencedora: Carta 2 (%s)\n", cidade2);
    } else {
        // Caso as duas cidades tenham a mesma população
        printf("Resultado: Empate!\n");
    }

    return 0;
}