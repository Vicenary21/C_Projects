#include <stdio.h>

int main() {
    // Declaração das variáveis para os atributos das cidades
    char estado;
    char codigo[4];
    char cidade[50];
    int populacao;
    int pontos_turisticos;
    float area;
    float PIB;

    // Cadastro da Primeira Carta:
    printf("Cadastro da Primeira Carta:\n");
    printf("Digite o código do estado (Ex: A): ");
    scanf(" %c", &estado);  // Captura o estado (A, B, C...)
    
    printf("Digite o código da carta (Ex: A01): ");
    scanf("%s", codigo);    // Captura o código da carta

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", cidade); // Captura o nome da cidade (permitindo espaços)

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);  // Captura a população da cidade

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos);  // Captura o número de pontos turísticos

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area);   // Captura a área da cidade

    printf("Digite o PIB da cidade em bilhões de dólares: ");
    scanf("%f", &PIB);    // Captura o PIB da cidade

    // Exibição dos Dados da Primeira Carta:
    printf("\nDados da Primeira Carta:\n");
    printf("Estado: %c\n", estado);  // Exibe o estado
    printf("Código da Carta: %s\n", codigo);  // Exibe o código da carta
    printf("Nome da Cidade: %s\n", cidade);  // Exibe o nome da cidade
    printf("População: %d\n", populacao);  // Exibe a população
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);  // Exibe o número de pontos turísticos
    printf("Área: %.2f km²\n", area);  // Exibe a área
    printf("PIB: %.2f bilhões de dólares\n", PIB);  // Exibe o PIB

    // Cadastro da Segunda Carta:
    printf("\nCadastro da Segunda Carta:\n");
    printf("Digite o código do estado (Ex: B): ");
    scanf(" %c", &estado);  // Captura o estado (A, B, C...)
    
    printf("Digite o código da carta (Ex: B02): ");
    scanf("%s", codigo);    // Captura o código da carta

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", cidade); // Captura o nome da cidade (permitindo espaços)

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);  // Captura a população da cidade

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos);  // Captura o número de pontos turísticos

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area);   // Captura a área da cidade

    printf("Digite o PIB da cidade em bilhões de dólares: ");
    scanf("%f", &PIB);    // Captura o PIB da cidade

    // Exibição dos Dados da Segunda Carta:
    printf("\nDados da Segunda Carta:\n");
    printf("Estado: %c\n", estado);  // Exibe o estado
    printf("Código da Carta: %s\n", codigo);  // Exibe o código da carta
    printf("Nome da Cidade: %s\n", cidade);  // Exibe o nome da cidade
    printf("População: %d\n", populacao);  // Exibe a população
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);  // Exibe o número de pontos turísticos
    printf("Área: %.2f km²\n", area);  // Exibe a área
    printf("PIB: %.2f bilhões de dólares\n", PIB);  // Exibe o PIB

    return 0;
}

