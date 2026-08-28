#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades  
  char estado[50], estado2[50], cod_carta[04], cod_carta2[04], cidade[50], cidade2[50]; 
  //cod_carta é o código da carta, que deve ter uma letra (referente ao estado) e dois números. Ex: A01
  int pop, pop2, pttur, pttur2; //pop: população - pttur: pontos turísticos
  float area, area2, PIB, PIB2, dp, dp2, pibperc, pibperc2; //dp: densidade populacional - pibperc: PIB per capita

  // Área para entrada de dados
    printf("DIGITE OS DADOS DA SUA PRIMEIRA CARTA\n");
    printf("ESTADO: ");
    scanf("%s", &estado);
    printf("CÓDIGO: ");
    scanf("%s", cod_carta);
    printf("CIDADE: ");
    scanf(" %49[^\n]", cidade); //FORMA COMO ADICIONA FRASES OU NOMES COMPOSTOS NA STRING
    printf("POPULAÇÃO: ");
    scanf("%d", &pop);
    printf("ÁREA: ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &PIB);
    printf("NÚMERO DE PONTOS TURÍSTICOS: ");
    scanf("%d", &pttur);
    
    printf("\nDIGITE OS DADOS DA SUA SEGUNDA CARTA\n");
    printf("ESTADO: ");
    scanf(" %s", &estado2);
    printf("CÓDIGO: ");
    scanf(" %s", cod_carta2);
    printf("CIDADE: ");
    scanf(" %49[^\n]", cidade2);
    printf("POPULAÇÃO: ");
    scanf("%d", &pop2);
    printf("ÁREA: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &PIB2);
    printf("NÚMERO DE PONTOS TURÍSTICOS: ");
    scanf("%d", &pttur2);

  // Área para cálculos necessários
    dp = (float) pop / area;
    dp2 = (float) pop2 / area;

    pibperc = (float) PIB / pop;
    pibperc2 = (float) PIB2 / pop2;

  // Área para exibição dos dados da carta
    printf("\n*** CARTAS ***\n\n");
    printf("CARTA 1:\n");
    printf("ESTADO: %s\n", estado);
    printf("CÓDIGO: %s\n", cod_carta);
    printf("CIDADE: %s\n", cidade);
    printf("POPULAÇÃO: %d\n", pop);
    printf("ÁREA: %f\n",area);
    printf("PIB: %f\n", PIB);
    printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", pttur);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", dp);
    printf("PIB PER CAPITA: R$ %.2f\n\n", pibperc);
   
    printf("CARTA 2:\n");
    printf("ESTADO: %s\n", estado2);
    printf("CÓDIGO: %s\n", cod_carta2);
    printf("CIDADE: %s\n", cidade2);
    printf("POPULAÇÃO: %d\n", pop2);
    printf("ÁREA: %f\n", area2);
    printf("PIB: %f\n", PIB2);
    printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", pttur2);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", dp2);
    printf("PIB PER CAPITA: R$ %.2f\n", pibperc2);

return 0;
} 
