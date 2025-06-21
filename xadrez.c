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
    int opcao;

    do {
        // Exibição do menu
        printf("\n=== Menu de Movimento de Peças de Xadrez ===\n");
        printf("1 - Mover Torre (5 casas para a Direita)\n");
        printf("2 - Mover Bispo (5 casas Cima Direita)\n");
        printf("3 - Mover Rainha (8 casas para a Esquerda)\n");
        printf("4 - Mover Cavalo (2 Baixo, 1 Esquerda)\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {

            case 1:
                // Movimento da Torre: For
                printf("\nMovimento da Torre:\n");
                for (int i = 1; i <= 5; i++) {
                    printf("Direita\n");
                }
                break;

            case 2:
                // Movimento do Bispo: While
                printf("\nMovimento do Bispo:\n");
                {
                    int contBispo = 1;
                    while (contBispo <= 5) {
                        printf("Cima Direita\n");
                        contBispo++;
                    }
                }
                break;

            case 3:
                // Movimento da Rainha: Do-While
                printf("\nMovimento da Rainha:\n");
                {
                    int contRainha = 1;
                    do {
                        printf("Esquerda\n");
                        contRainha++;
                    } while (contRainha <= 8);
                }
                break;

            case 4:
                // Movimento do Cavalo: For + While
                printf("\nMovimento do Cavalo:\n");
                {
                    int movimentoCavalo = 1;
                    for (int i = 0; i < movimentoCavalo; i++) {
                        int passo = 0;
                        while (passo < 2) {
                            printf("Baixo\n");
                            passo++;
                        }
                        printf("Esquerda\n");
                    }
                }
                break;

            case 0:
                printf("Encerrando o Programa...\n");
                break;

            default:
                printf("Opção inválida.\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}
