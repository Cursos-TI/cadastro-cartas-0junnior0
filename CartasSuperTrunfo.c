#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado;
  char codigo;
  char cidade;
  int população;
  float area;
  float PIB;
  int turistico;
  

  // Área para entrada de dados

  printf("Vamos criar duas cartas do jogo super trunfo de paises\n");

  printf("Para isso preciso que digite os dados abaixo\n Vamos lá? \n");

  printf("Digite o nome do Estado: \n");

  scanf("%s", &estado);

  printf("Digite o código da carta \n Ex A01, A02... \n");

  scanf("%s", &codigo);
  
  printf("Digite o nome da cidade \n");

  scanf("%s", &cidade);

  printf ("Digite a população da cidade: \n");

  scanf("%d", &população);
  
  printf("Digite a área da cidade \n");

  scanf("%f", &area);

  printf("Digite o PIB do estado \n");

  scanf("%f", &PIB);

  printf("Digite quantos pontos turísticos tem na cidade \n");

  scanf("%d", &turistico);

  // Área para exibição dos dados da cidade

return 0;
} 
