#include <stdio.h>

int main() {
    char codigo1[10], codigo2[10], cidade1[20], cidade2[20];
    char estado1[20], estado2[20];
    int PontosTuristicos1, PontosTuristicos2;
    float km2_1, km2_2;
    float populacao1, populacao2;
    float PIB1, PIB2;
    float DensidadePopulacional1, DensidadePopulacional2;
    float PIBperCapita1, PIBperCapita2; 
 
    printf("\n--- Preencha os dados das cartas usando ponto (.) no lugar de vírgula ---\n");

    // CARTA 1
    printf("\nDigite o estado 1: ");
    scanf("%s", estado1);

    printf("Digite a cidade 1: ");
    scanf("%s", cidade1);

    printf("Digite um codigo da carta 1: ");
    scanf("%s", codigo1);

    printf("Digite a populacao da carta 1: ");
    scanf("%f", &populacao1);

    printf("Digite os pontos turisticos da carta 1: ");
    scanf("%d", &PontosTuristicos1);

    printf("Digite o PIB da carta 1: ");
    scanf("%f", &PIB1);

    printf("Digite a km² da carta 1: ");
    scanf("%f", &km2_1);

    DensidadePopulacional1 = populacao1 / km2_1;
    PIBperCapita1 = PIB1 / populacao1;

    printf("\n--- Dados da Carta 01 ---\n");
    printf("Estado: %s - Cidade: %s - Codigo: %s\n", estado1, cidade1, codigo1);
    printf("Populacao: %.2f - km²: %.2f - Pontos Turisticos: %d\n", populacao1, km2_1, PontosTuristicos1);
    printf("PIB: %.2f\n", PIB1);
    printf("Densidade populacional: %.2f\n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f\n", PIBperCapita1);


    // CARTA 2
    printf("\nDigite o estado 2: ");
    scanf("%s", estado2);

    printf("Digite a cidade 2: ");
    scanf("%s", cidade2);

    printf("Digite um codigo da carta 2: ");
    scanf("%s", codigo2);

    printf("Digite a populacao da carta 2: ");
    scanf("%f", &populacao2);

    printf("Digite os pontos turisticos da carta 2: ");
    scanf("%d", &PontosTuristicos2);

    printf("Digite o PIB da carta 2: ");
    scanf("%f", &PIB2);

    printf("Digite a km² da carta 2: ");
    scanf("%f", &km2_2);

    DensidadePopulacional2 = populacao2 / km2_2;
    PIBperCapita2 = PIB2 / populacao2;

    printf("\n--- Dados da Carta 02 ---\n");
    printf("Estado: %s - Cidade: %s - Codigo: %s\n", estado2, cidade2, codigo2);
    printf("Populacao: %.2f - km²: %.2f - Pontos Turisticos: %d\n", populacao2, km2_2, PontosTuristicos2);
    printf("PIB: %.2f\n", PIB2);
    printf("Densidade populacional: %.2f\n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f\n", PIBperCapita2);

    return 0;
    
}