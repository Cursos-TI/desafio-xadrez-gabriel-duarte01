#include <stdio.h>

// Arrays auxiliares para exibição
char *colunas[] = {"a", "b", "c", "d", "e", "f", "g", "h"};

// Função recursiva genérica para movimentos lineares
// Parâmetros:
//   row, col: posição atual da peça
//   deltaRow, deltaCol: quanto a linha e coluna devem mudar a cada movimento
//   moves: número de movimentos/casas restantes
//   nomePeca: nome da peça para exibição
void moverRecursivo(int row, int col, int deltaRow, int deltaCol, int moves, char *nomePeca) {
    // Caso base: não há mais movimentos
    if (moves <= 0) return;

    int novaRow = row + deltaRow;
    int novaCol = col + deltaCol;
    
    // Verifica se os novos índices estão dentro dos limites do tabuleiro:
    // linhas entre 1 e 8 e colunas entre 0 e 7 (exibidas com "a" a "h")
    if (novaCol < 0 || novaCol > 7 || novaRow < 1 || novaRow > 8) {
        printf("Movimento inválido para %s: ultrapassa os limites do tabuleiro.\n", nomePeca);
        return;
    }
    
    // Exibe o movimento
    printf("%s move de %s%d para %s%d\n", nomePeca, colunas[col], row, colunas[novaCol], novaRow);
    
    // Chamada recursiva com a posição atualizada e um movimento a menos
    moverRecursivo(novaRow, novaCol, deltaRow, deltaCol, moves - 1, nomePeca);
}

int main() {
    printf("*** Bem-vindo ao jogo de xadrez ***\n");
    printf("Peças disponíveis: Torre, Rainha, Bispo e Cavalo.\n\n");

    // Exemplo de uso:
    // Torre em a1 se movendo 5 casas para a direita (linha fixa, coluna aumentando)
    printf("* Movimentação da Torre (5 casas para a direita): *\n");
    moverRecursivo(1, 0, 0, 1, 5, "Torre");

    // Rainha em h5 se movendo 3 casas para a esquerda (linha fixa, coluna decrescendo)
    printf("\n* Movimentação da Rainha (3 casas para a esquerda): *\n");
    moverRecursivo(5, 7, 0, -1, 3, "Rainha");

    // Bispo em c1 se movendo em diagonal para cima e para a direita (tanto a linha quanto a coluna aumentam)
    printf("\n* Movimentação do Bispo (4 casas na diagonal): *\n");
    moverRecursivo(1, 2, 1, 1, 4, "Bispo");

    // Como o movimento do cavalo não é linear, cria-se uma função ou chamada específica.
    // Por exemplo, para mover o cavalo de f3 para e5 (movimentação L: 2 casas para cima e 1 para a esquerda)
    printf("\n* Movimentação do Cavalo: *\n");
    // Aqui, não é recursiva (normalmente, um cavalo faz um único movimento "L")
    printf("Cavalo move de f3 para e5\n");

    return 0;
}













    
