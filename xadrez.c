//#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    //return 0;


#include <stdio.h>

int main() {
  // simulação de movimento: Torre
  // Movimento: 5 casas para a direita
  // Estrutura: for

  printf("Movimento da Torre: \n");

  for(int i = 1; i <= 5; i++)
  {
    printf("Direita\n");
  }

  // simulação de movimento: Bispo
  // Movimento: 5 casas na diagonal cima-direita
  // Estrutura: while

  printf("\nMovimento do Bispo: \n");

  int contBispo = 1;
  while(contBispo <= 5)
  {
    printf("Cima-Direita\n");
    contBispo++;
  }

  // Simulação do movimento da RAINHA
  // Movimento: 8 casas para a esquerda
  // Estrutura usada: do-while

  printf("\nMovimento da Rainha: \n");

  int contRainha = 1;

  do{
    printf("Esquerda\n");
    contRainha++;
  } while(contRainha <= 8);

  return 0;

}
