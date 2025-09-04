#include <stdio.h>

int main(){

 char estado1[20], estado2[20], codigo1[10], codigo2[10], cidade1[20], cidade2[20];
 int PontosTuristicos1, PontosTuristicos2;
 float km²_1, populacao1, PIB1, DensidadePopulacional1, PIBperCapita1; 
 float km²_2, populacao2, PIB2, DensidadePopulacional2, PIBperCapita2; 
 
  printf("\n--- preencha os dados das cartas usando somente pontos no lugar de virgulas---\n");


 printf("digite o estado 1: \n");
 scanf("%s", estado1);

 printf("digite a cidade 1: \n");
 scanf("%s", cidade1);

 printf("digite um codigo da carta 1: \n");
 scanf("%s", codigo1);

 printf("digite a populacao da carta 1: \n");
 scanf("%f", &populacao1);

 printf("digite os pontos turisticos da carta 1: \n");
 scanf("%d", &PontosTuristicos1);

 printf("digite o PIB da carta 1: \n");
 scanf("%f", &PIB1);

 printf("digite a km² da carta 1: \n");
 scanf("%f", &km²_1);

 DensidadePopulacional1 = populacao1 / km²_1;
 PIBperCapita1 = PIB1 / populacao1;

 printf("\n--- Dados da Carta 01---\n");

 printf("estado: %s - cidade: %s - codigo: %s\n", estado1, cidade1, codigo1);
 printf("populacao: %.2f - km²: %.2f - pontos turisticos: %d\n", populacao1, km²_1, PontosTuristicos1);
 printf("PIB: %.2f\n", PIB1);
 printf("A densidade populacional é: %.2f\n", DensidadePopulacional1);
 printf("O PIBperCapita é: %f.2\n", PIBperCapita1);



     ////carta 02////




  printf("digite o estado 2: \n");
 scanf(" %s", estado2);

 printf("digite a cidade 2: \n");
 scanf(" %s", cidade2);

 printf("digite um codigo da carta 2: \n");
 scanf(" %s", codigo2);

 printf("digite a populacao da carta 2: \n");
 scanf(" %f", &populacao2);


 printf("digite os pontos turisticos da carta 2: \n");
 scanf(" %d", &PontosTuristicos2);

 printf("digite o PIB da carta 2: \n");
 scanf(" %f", &PIB2);

 printf("digite a km² da carta 2: \n");
 scanf(" %f", &km²_2);

 DensidadePopulacional2 = populacao2 / km²_2;
 PIBperCapita1 = PIB2 / populacao2;

 printf("\n--- Dados da Carta 02---\n");

 printf("estado: %s - cidade: %s - codigo: %s\n", estado2, cidade2, codigo2);
 printf("populacao: %.2f - km²: %.2f - pontos turisticos: %d\n", populacao2, km²_2, PontosTuristicos2);
 printf("PIB: %.2f\n", PIB2);
 printf("A densidade populacional é: %.2f\n", DensidadePopulacional2);
 printf("O PIBperCapita é: %.2f\n", PIBperCapita2);
 return 0;





}