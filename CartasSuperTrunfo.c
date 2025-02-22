#include <stdio.h>
 int main() {

    // variáveis
    char estado1 [100], estado2 [100];
    char codigo1 [15], codigo2 [15];
    char cidade1 [100], cidade2 [100];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;
    float superpoder1, superpoder2;




    printf("Bem-vindo ao Super Trunfo de Países! Cadastre suas cartas.\n");
    printf("Carta 1 \n"); // entrada de dados da primeira carta
    printf("Digite uma letra de 'A' a 'H' para representar os estados.\n\n");

    printf("Digite o estado: \n");
    scanf("%s", estado1);
    
    printf("Digite o código da carta: \n");
    printf("Obs: o código possui o estado + o número da cidade. Ex: A01, B02.\n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    printf("Obs.: se o nome da cidade conter acentos, não os digite, e se houver espaços, troque-os por '_' \n");
    scanf("%s", cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em km2: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos1);

    densidade1 = (populacao1 / area1); 
    pibpercapita1 = (pib1 / populacao1);

    superpoder1 = (populacao1 + area1 + pib1 + pontos1 + densidade1 + pibpercapita1);

    printf("Carta 2 \n\n");

    // entrada de dados da segunda carta

    printf("Digite o estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    superpoder2 = (populacao2 + area2 + pib2 + pontos2 + densidade2 + pibpercapita2);

   printf("Informações das cartas\n");
   printf("Carta 1:\n\n"); // exibição carta 1

   printf("Estado: %s\n", estado1);
   printf("Código: %s\n", codigo1);
   printf("Nome da cidade: %s\n", cidade1);
   printf("População: %d\n", populacao1);
   printf("Área: %.2f\n", area1);
   printf("PIB: %.2f\n", pib1);
   printf("Pontos turísticos: %d\n", pontos1);
   printf("Densidade populacional: %.2f\n", densidade1);
   printf("PIB per capita: %.2f\n", pibpercapita1);
   printf("Superpoder: %.2f\n\n", superpoder1);

   printf("Carta 2:\n\n"); // exibição carta 2

   printf("Estado: %s\n", estado2);
   printf("Código: %s\n", codigo2);
   printf("Nome da cidade: %s\n", cidade2);
   printf("População: %d\n", populacao2);
   printf("Área: %.2f\n", area2);
   printf("PIB: %.2f\n", pib2);
   printf("Pontos turísticos: %d\n", pontos2);
   printf("Densidade populacional: %.2f\n", densidade2);
   printf("PIB per capita: %.2f\n", pibpercapita2);
   printf("Superpoder: %.2f\n\n", superpoder2);


   printf("Comparação das cartas! 1 = carta 1, 0 = carta 2\n\n");
   printf("População: carta %d venceu\n", (int)populacao1 > populacao2);
   printf("Área: carta %d venceu.\n", (int)area1 > area2);
   printf("PIB: carta %d venceu.\n", (int)pib1 > pib2);
   printf("Pontos turísticos: carta %d venceu.\n", (int) pontos1 > pontos2);
   printf("Densidade populacional: carta %d venceu.\n", (int)densidade1 < densidade2);
   printf("PIB per capita: carta %d venceu.\n", (int)pibpercapita1 > pibpercapita2);
   printf("Superpoder: carta %d venceu.\n", (int)superpoder1 > superpoder2);
   

    return 0;
 }