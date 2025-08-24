#include <stdio.h>

int main(){

 char estado1[20], estado2[20], codigo1[10], codigo2[10], cidade1[20], cidade2[20];
 int PontosTuristicos;
 float km², populacao, PIB;
 
  printf("\n--- preencha os dados das cartas usando somente pontos no lugar de virgulas---\n");


 printf("digite o estado 1: \n");
 scanf(" %s", estado1);

 printf("digite a cidade 1: \n");
 scanf(" %s", cidade1);

 printf("digite um codigo da carta 1: \n");
 scanf(" %s", codigo1);

 printf("digite a populacao da carta 1: \n");
 scanf(" %f", &populacao);

 printf("digite os pontos turisticos da carta 1: \n");
 scanf(" %d", &PontosTuristicos);

 printf("digite o PIB da carta 1: \n");
 scanf(" %f", &PIB);

 printf("digite a km² da carta 1: \n");
 scanf(" %f", &km²);

 printf("\n--- Dados da Carta 01---\n");

 printf("estado: %s - cidade: %s - codigo: %s\n", estado1, cidade1, codigo1);
 printf("populacao: %.2f - km²: %.2f - pontos turisticos: %d\n", populacao, km², PontosTuristicos);
 printf("PIB: %.2f\n", PIB);




     ////carta 02////




  printf("digite o estado 2: \n");
 scanf(" %s", estado2);

 printf("digite a cidade 2: \n");
 scanf(" %s", cidade2);

 printf("digite um codigo da carta 2: \n");
 scanf(" %s", codigo2);

 printf("digite a populacao da carta 2: \n");
 scanf(" %f", &populacao);

 printf("digite os pontos turisticos da carta 2: \n");
 scanf(" %d", &PontosTuristicos);

 printf("digite o PIB da carta 2: \n");
 scanf(" %f", &PIB);

 printf("digite a km² da carta 2: \n");
 scanf(" %f", &km²);



 printf("\n--- Dados da Carta 02---\n");

 printf("estado: %s - cidade: %s - codigo: %s\n", estado2, cidade2, codigo2);
 printf("populacao: %.2f - km²: %.2f - pontos turisticos: %d\n", populacao, km², PontosTuristicos);
 printf("PIB: %.2f\n", PIB);

 return 0;





}