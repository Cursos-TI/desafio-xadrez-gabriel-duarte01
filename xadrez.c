#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    //usando um array para simular as linhas
    #include <stdio.h>

    int main(void) {
        int linha = 1; // A linha permanece fixa em 1
    
        // Array de ponteiros para as peças disponíveis
        char *pecas[] = {"bispo", "rainha", "torre"};
    
        // Array de colunas do tabuleiro (da coluna "a" até "h")
        char *colunas[] = {"a", "b", "c", "d", "e", "f", "g", "h"};
    
        printf("*** Bem-vindo ao jogo de xadrez! ***\n");
        printf("Só tem o bispo, a rainha e a torre\n");
        printf("A torre se encontra na posição %s%d do tabuleiro\n\n", colunas[0], linha);
    
        // Simula o movimento horizontal da torre: cinco movimentos para a direita
        // Começamos na coluna "a" (índice 0) e, em cada iteração, avançamos para a próxima coluna.
        for (int movimento = 1; movimento <= 5; movimento++) {
            // Em cada movimento, imprimimos a nova posição da torre:
            // A torre (pecas[2]) se move para a coluna colunas[movimento] na linha fixa.
            printf("Movimento %d: A %s foi para %s%d\n", movimento, pecas[2], colunas[movimento], linha);
        }
    
        return 0;
    }
    

    

    























    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    
