
#include <stdio.h>

// Arrays auxiliares para exibição
char *colunas[] = {"a", "b", "c", "d", "e", "f", "g", "h"};

// Função recursiva genérica para movimentos lineares
// Parâmetros:
//   row, col: posição atual da peça
//   deltaRow, deltaCol: quanto a linha e coluna devem mudar a cada movimento
//   moves: número de movimentos/casas restantes
//   nomePeca: nome da peça para exibição
void moverPecas(int row, int col, int deltaRow, int deltaCol, int moves, char nomePeca){

    if (moves <= 0) return;
    

    int novaCol = col + deltaCol;
    int novaRow = row + deltaRow;

    if (novaCol < 0 || novaCol > 7 || novaRow < 1 || novaRow > 8){

        printf("Movimento inválido! Excedeu os limites do tabuleiro.");
        return 0;
    }

    printf("%s move de %s%d para %s%d\n", nomePeca, colunas[col], row, colunas[novaCol], novaRow);
    
    moverPecas(novaRow, novaCol, deltaRow, deltaCol, moves - 1, nomePeca);
}
}

int main(){

    printf("*** Bem-vindo ao jogo de xadrez! ***\n");
    printf("Há apenas a torre, o bispo, a rainha e o cavalo.\n");


    printf("Vamos ver a movimentação da torre. Ela está em a1\n");
    moverPecas(1, 0, 0, 1, 5, "Torre");


    printf("Vamos ver a movimentação da rainha. Ela está em h2\n");
    moverPecas(2, 7, 0, -1, 5, "Rainha");

    printf("Vamos ver a movimentação da torre. Ela está em a3\n");
    moverPecas(3, 0, 1, 1, 5, "Bispo");

    return 0;
}













    
