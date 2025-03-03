#include <stdio.h>
 int main(){

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
    int opcao1, opcao2;
    float resultado1, resultado2, resultado1_1, resultado2_2;
    float opcao1_1, opcao2_2;



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


   printf("Carta 2:\n\n"); // exibição carta 2

   printf("Estado: %s\n", estado2);
   printf("Código: %s\n", codigo2);
   printf("Nome da cidade: %s\n", cidade2);
   printf("População: %d\n", populacao2);
   printf("Área: %.2f\n", area2);
   printf("PIB: %.2f\n", pib2);
   printf("Pontos turísticos: %d\n", pontos2);
   printf("Densidade populacional: %.2f\n", densidade2);
   printf("PIB per capita: %.2f\n\n", pibpercapita2);


   printf("Menu de comparação\n");
   printf("Escolha dois parâmetros a serem comparados\n");
   printf("1. População\n");
   printf("2. Área\n");
   printf("3. PIB\n");
   printf("4. Pontos turísticos\n");
   printf("5. Densidade populacional\n");
   printf("6. PIB per capita\n");
   printf("Primeiro parâmetro: ");
   scanf("%d", &opcao1);


   switch (opcao1)
   {
   case 1:
    resultado1 = populacao1;
    resultado2 = populacao2;
    break;

    case 2:
    resultado1 = area1;
    resultado2 = area2;

    case 3:
    resultado1 = pib1;
    resultado2 = pib2;
    break;

    case 4:
    resultado1 = pontos1;
    resultado2 = pontos2;
    break;

    case 5:
    resultado1 = densidade1;
    resultado2 = densidade2;
    break;

    case 6:
    resultado1 = pibpercapita1;
    resultado2 = pibpercapita2;
    break;

    default:
    printf("Opção inválida.\n");
    break;


   }

   printf("Segundo parâmetro\n");
   printf("1. População\n");
   printf("2. Área\n");
   printf("3. PIB\n");
   printf("4. Pontos turísticos\n");
   printf("5. Densidade populacional\n");
   printf("6. PIB per capita\n");
   scanf("%d", &opcao2);
   if (opcao2 == opcao1)
   {
    printf("Escolha um parâmetro diferente.\n");
   } else
   {    switch (opcao2)
    {
    case 1:
     resultado1_1 = populacao1;
     resultado2_2 = populacao2;
     break;
 
     case 2:
     resultado1_1 = area1;
     resultado2_2 = area2;
     break;
 
     case 3:
     resultado1_1 = pib1;
     resultado2_2 = pib2;
     break;
 
     case 4:
     resultado1_1 = pontos1;
     resultado2_2 = pontos2; 
     break;
 
     case 5:
     resultado1_1 = densidade1;
     resultado2_2 = densidade2;
     break;
 
     case 6:
     resultado1_1 = pibpercapita1; 
     resultado2_2 = pibpercapita2;
     break;
 
     default:
     printf("Opção inválida.\n");
     break;
 } }

     opcao1_1 = resultado1 + resultado2;
     opcao2_2 = resultado1_1 + resultado2_2;

    printf("As cidades são: %s e %s.\n", cidade1, cidade2);
    printf("Os atributos escolhidos foram: %d e %d.\n", opcao1, opcao2);
    printf("A soma dos atributos de cada carta foram: %.2f e %.2f.\n", opcao1_1, opcao2_2);

    if (opcao1_1 > opcao2_2)
    {
        printf("Carta 1 vence!\n");
    } else if (opcao2_2 > opcao1_1)
    {
        printf("Carta 2 vence!\n");
    } else
    {
        printf("Empate!\n");
    }
    
    
    
    return 0;


}