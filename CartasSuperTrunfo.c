#include <stdio.h>

// Desafio Super Trunfo - Paíse
// Tema 1 - Cadastro das cartas
// Objetivo: No nível MESTRE você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  //inicio do desafio no modo mestre.
  //introduçao das informacoes iniciais do primeiro e do segundo pais, utilizando int, char e float para entrada de dados.
  char carta[50], carta2[50];
  char nome[50], nome2[50];
  char codigo_da_carta[30], codigodacarta[30];
  char nome_da_cidade[50], nomedacidade[50];
  int populaçao, populacao2;
  float area_em_kms, areaemkms2;
  float PIB, PIB2;
  int numerodepontosturisticos, numerodepontosturisticos2;
  float densidade_populacional1, densidade_populacional2;
  float pib_percapita1, pib_percapita2;
  float SUPERPODER1, SUPERPODER2;

  //introducao dos conteudos das cartas do primeiro pais utilizando printf para exibir as informaçoes e scanf para entrada de dados.
  printf("digite o nome da carta: \n");
  scanf("%s", carta);
  printf("digite o nome do estado: \n");
  scanf("%s", nome);
  printf("digite o codigo da carta: \n");
  scanf("%s", codigo_da_carta);
  printf("digite o nome da cidade: \n");
  scanf("%s", nome_da_cidade);
  printf("digite a quantidade da populaçao: \n");
  scanf("%d", &populaçao);
  printf("digite a area em kms: \n");
  scanf("%f", &area_em_kms);
  printf("digite o PIB: \n");
  scanf("%f", &PIB);
  printf("digite o numero de pontos turisticos: \n");
  scanf("%d", &numerodepontosturisticos);
  
  //introducao do super poder do primeiro pais, utilizando a soma total dos atributos para gerar o super poder.
  SUPERPODER1 = populaçao + area_em_kms + PIB + numerodepontosturisticos + densidade_populacional1 + pib_percapita1;
  
  // Área para exibição dos dados da cidade1 em printfs.
  printf("carta01: %s\n estado: %s\n", carta, nome);
  printf("codigo da carta: %s\n nome da cidade: %s\n", codigo_da_carta, nome_da_cidade);
  printf("populacao: %d\n area em kms: %.5f\n PIB: %.5f\n numero de pontos turisticos: %.5f\n", populaçao, area_em_kms, PIB, (float)numerodepontosturisticos);
  densidade_populacional1 = (float)populaçao / area_em_kms;
  pib_percapita1 = PIB / (float)populaçao;
  printf("densidade populacional: %.5f\n PIB per capita: %.5f\n", densidade_populacional1, pib_percapita1);
  printf("super poder: %.5f\n", SUPERPODER1);

  //introduçao dos conteudos das cartas do segundo pais, utilizando printf para exibir as informaçoes e scanf para entrada de dados.
  printf("digite o nome da carta2: \n");
  scanf("%s", carta2);
  printf("digite o nome do estado2: \n");
  scanf("%s", nome2);
  printf("digite o codigo da carta2: \n");
  scanf("%s", codigodacarta);
  printf("digite o nome da cidade2: \n");
  scanf("%s", nomedacidade);
  printf("digite a quantidade da populaçao2: \n");
  scanf("%d", &populacao2);
  printf("digite a area em kms2: \n");
  scanf("%f", &areaemkms2);
  printf("digite o PIB2: \n");
  scanf("%f", &PIB2);
  printf("digite o numero de pontos turisticos2: \n");
  scanf("%d", &numerodepontosturisticos2);

  //introducao do super poder do segundo pais, utilizando a soma total dos atributos para gerar o super poder.
  SUPERPODER2 = populacao2 + areaemkms2 + PIB2 + numerodepontosturisticos2 + densidade_populacional2 + pib_percapita2;

  // Área para exibição dos dados da segundo pais em printfs.
  printf("carta02: %s\n estado: %s\n", carta2, nome2);
  printf("codigo da carta: %s\n nome da cidade: %s\n", codigodacarta, nomedacidade);
  printf("populacao: %d\n area em kms: %.5f\n PIB: %.5f\n numero de pontos turisticos: %.5f\n", populacao2, areaemkms2, PIB2, (float)numerodepontosturisticos2);
  densidade_populacional2 = (float)populacao2 / areaemkms2;
  pib_percapita2 = PIB2 / (float)populacao2;
  printf("densidade populacional2: %.5f\n PIB per capita2: %.5f\n", densidade_populacional2, pib_percapita2);
  printf("super poder2: %.5f\n", SUPERPODER2);

  //comparacao dos atributos das cartas para determinar qual carta tem o maior poder.
  printf("valor da carta1 (%.5f) é maior que da carta2 (%.5f)? %d \n", populaçao + area_em_kms + PIB + numerodepontosturisticos + densidade_populacional1 + pib_percapita1 + SUPERPODER1
    , populacao2 + areaemkms2 + PIB2 + numerodepontosturisticos2 + densidade_populacional2 + pib_percapita2 + SUPERPODER2,
                 (populaçao + area_em_kms + PIB + numerodepontosturisticos + densidade_populacional1 + pib_percapita1 + SUPERPODER1) > 
                 (populacao2 + areaemkms2 + PIB2 + numerodepontosturisticos2 + densidade_populacional2 + pib_percapita2 + SUPERPODER2)                                                                  
);

  return 0;
} 
