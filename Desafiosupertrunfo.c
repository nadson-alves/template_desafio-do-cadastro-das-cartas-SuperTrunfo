#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Desafio Super Trunfo - Paíse
// Tema 1 - Cadastro das cartas
 int main(){
    char carta1[30] = "Brasil";
    char carta2[30] = "Argentina";
    int resultado1, resultado2;
    char primeiroatributo, segundoatributo;
    int ataque1, ataque2, defesa1, defesa2, recuo1, recuo2;
    //gerar numero aleatorio para o ataque, defesa e recuo de cada carta.
    srand(time(0));
    ataque1 = rand() % 100 + 1; // gera um numero aleatorio entre 50 e 100 para o ataque da carta1.
    defesa1 = rand() % 100 + 1; // gera um numero aleatorio entre 50 e 100 para a defesa da carta1.
    recuo1 = rand() % 100 + 1; // gera um numero aleatorio entre 50 e 100 para o recuo da carta1.
    ataque2 = rand() % 100 + 1; // gera um numero aleatorio entre 50 e 100 para o ataque da carta2.
    defesa2 = rand() % 100 + 1; // gera um numero aleatorio entre 50 e 100 para a defesa da carta2.
    recuo2 = rand() % 100 + 1; // gera um numero aleatorio entre 50 e 100 para o recuo da carta2.
 
    //BEM vindo ao jogo !!
    printf("Bem vindo ao jogo de Super Trunfo!\n");
    printf("Escolha o primeiro atributo para comparar as cartas \n");
    printf("carta 1: %s\n", carta1);
    printf("1 - Ataque: representado por 'A' ou 'a'\n");
    printf("2 - Defesa: representado por 'D' ou 'd'\n");
    printf("3 - Recuo: representado por 'R' ou 'r'\n");
    scanf("%c", &primeiroatributo);

    switch (primeiroatributo)
    {
    case 'A':
    case 'a':
    printf("Ataque escolhido\n");
      resultado1 = ataque1 > ataque2 ? 1 : 0;
      break;
   case 'D':
   case 'd':
   printf("Defesa escolhido\n");
      resultado1 = defesa1 > defesa2 ? 1 : 0;
      break;
   case 'R':
   case 'r':
   printf("Recuo escolhido\n");
      resultado1 = recuo1 > recuo2 ? 1 : 0;
    default:
    printf("Atributo invalido, por favor escolha um atributo valido");
   break;
    }

   printf("Escolha o segundo atributo para comparar as cartas \n");
   printf("carta 2: %s\n", carta2);
   printf("1 - Ataque: representado por 'A' ou 'a'\n");
   printf("2 - Defesa: representado por 'D' ou 'd'\n");
   printf("3 - Recuo: representado por 'R' ou 'r'\n");
   scanf(" %c", &segundoatributo);

   if (primeiroatributo == segundoatributo)
   {
   printf("os atributos escolhidos sao iguais, por favor escolha outro");
   }
   else {
   switch (segundoatributo)
   {  
   case 'A':
   case 'a':
   printf("Ataque escolhido\n");
      resultado2 = ataque2 > ataque1 ? 1 : 0;
      break;
   case 'D':
   case 'd':
   printf("Defesa escolhido\n");
      resultado2 = defesa2 > defesa1 ? 1 : 0;
      break;
   case 'R':
   case 'r':
   printf("Recuo escolhido\n");
      resultado2 = recuo2 > recuo1 ? 1 : 0;
   break;
    default:
    printf("Atributo invalido, por favor escolha um atributo valido");
   break;
   }

   if (resultado1 == 1 && resultado2 == 0)
   {
   printf("Parabens, voce venceu a carta do adversario!!\n");

   }
   else if (resultado1 == 0 && resultado2 == 1)
   {
   printf("Infelizmente voce perdeu para a carta do adversario!!\n");
}
   else if (resultado1 == 0 && resultado2 == 0)
   {
   printf("Empate!!\n");
   }
   else if (resultado1 == 1 && resultado2 == 1)
   {
   printf("Empate!!\n");
   }
   }
    return 0;
}