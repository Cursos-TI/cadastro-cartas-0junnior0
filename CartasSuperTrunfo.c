#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


int main () {

// Área para definição das variáveis para armazenar as propriedades das cidades

char estado[20], estado2[20];
char codigo[10], codigo2[10];
char cidade[20], cidade2[20];
int populacao, populacao2;
float area, area2;
float PIB , PIB2;
int turistico, turistico2;
float percapta, percapta2;
float densidade , densidade2;

  // Área para entrada de dados

printf("Vamos criar duas cartas de jogo do super trunfo de cidades e Estados.\n");

printf("Para isso preciso que digite os dados abaixo: \n Vamos lá? \n");

printf("Referente a carta 1, Digite o nome do Estado: \n");

scanf("%20s", estado );

printf("Referente a carta 1, Digite o código da carta: \n Ex: A01,A02...\n" );

scanf("%20s", codigo);

printf("Referente a carta 1, Digite o nome da cidade: \n");

scanf("%20s", cidade);

printf("Referente a carta 1, Digite a população da cidade: \n");

scanf("%d", &populacao);

printf("Referente a carta 1, Digite sua área: \n");

scanf("%f" , &area);

printf("Referente a carta 1, Digite o PIB do estado: \n");

scanf("%f", &PIB);

printf("Referente a carta 1, Digite quantos pontos turísticos tem na cidade: \n");

scanf("%d", &turistico);

percapta = (float) PIB / populacao;

densidade = (float) populacao / area;

// Agora sobre a carta 2 atualizada

printf("Referente a carta 2, Digite o nome do Estado: \n");

scanf("%20s", estado2 );

printf("Referente a carta 2, Digite o código da carta: \n Ex: A01,A02...\n" );

scanf("%20s", codigo2);

printf("Referente a carta 2, Digite o nome da cidade: \n");

scanf("%20s", cidade2);

printf("Referente a carta 2, Digite a população da cidade: \n");

scanf("%d", &populacao2);

printf("Referente a carta 2, Digite sua área: \n");

scanf("%f" , &area2);

printf("Referente a carta 2, Digite o PIB do estado: \n");

scanf("%f", &PIB2);

printf("Referente a carta 2, Digite quantos pontos turísticos tem na cidade: \n");

scanf("%d", &turistico2);

percapta2 = (float) PIB2 / populacao2;

densidade2 = (float) populacao2 / area2;

  // Área para exibição dos dados da cidade

  
printf("Carta 1 \n \n");

printf("Estado: %s\n", estado);

printf("codigo: %s\n", codigo);

printf("Cidade: %s\n", cidade);

printf("População: %d\n", populacao);

printf("area: %f\n", area);

printf("PIB: %f\n", PIB);

printf("PontoTuristico: %d\n", turistico);

printf("Renda percapta: %.2f \n", percapta);

printf("Densidade populacional: %.2f \n", densidade);

printf("\n\nCarta 2 \n \n");

printf("Estado: %s\n", estado2);

printf("codigo: %s\n", codigo2);

printf("Cidade: %s\n", cidade2);

printf("População: %d\n", populacao2);

printf("area: %f\n", area2);

printf("PIB: %f\n", PIB2);

printf("PontoTuristico: %d\n", turistico2);

printf("Renda percapta: %.2f \n", percapta2);

printf("Densidade populacional: %.2f \n", densidade2);


return 0;

}

