#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis para armazenar os dados da primeira carta
    char estado1[100], cidade1[100];
    int codigo_carta1;
    long populacao1;
    float area1;
    double pib1;
    int pontos_turisticos1;

    // Variáveis para armazenar os dados da segunda carta
    char estado2[100], cidade2[100];
    int codigo_carta2;
    long populacao2;
    float area2;
    double pib2;
    int pontos_turisticos2;

    // Cadastro da primeira carta
    printf("Digite o estado da primeira carta: ");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = '\0';  
    printf("Digite o código da carta da primeira cidade: ");
    scanf("%d", &codigo_carta1);
    getchar();  

    printf("Digite o nome da cidade da primeira carta: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';  

    printf("Digite a população da cidade %s: ", cidade1);
    scanf("%ld", &populacao1);

    printf("Digite a área da cidade %s (em km²): ", cidade1);
    scanf("%f", &area1);

    printf("Digite o PIB da cidade %s (em R$): ", cidade1);
    scanf("%lf", &pib1);

    printf("Digite o número de pontos turísticos da cidade %s: ", cidade1);
    scanf("%d", &pontos_turisticos1);
    getchar(); 

    // Cadastro da segunda carta
    printf("\nDigite o estado da segunda carta: ");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = '\0'; 
    printf("Digite o código da carta da segunda cidade: ");
    scanf("%d", &codigo_carta2);
    getchar();  

    printf("Digite o nome da cidade da segunda carta: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';  

    printf("Digite a população da cidade %s: ", cidade2);
    scanf("%ld", &populacao2);

    printf("Digite a área da cidade %s (em km²): ", cidade2);
    scanf("%f", &area2);

    printf("Digite o PIB da cidade %s (em R$): ", cidade2);
    scanf("%lf", &pib2);

    printf("Digite o número de pontos turísticos da cidade %s: ", cidade2);
    scanf("%d", &pontos_turisticos2);

    // Exibição dos dados da primeira carta
    printf("\nDados da primeira carta:\n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %d\n", codigo_carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);

    // Exibição dos dados da segunda carta
    printf("\nDados da segunda carta:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %d\n", codigo_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

    return 0;
}

