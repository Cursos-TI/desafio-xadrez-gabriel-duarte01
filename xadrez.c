#include <stdio.h>

int main(){

    //array que representa as colunas do tabbuleiro ('a' a 'h')
    char *colunas [] = {"a","b","c","d","e","f","g","h",}; 
    //array de nomes das peças (apenas para exibição)
    char *pecas []= {"bispo", "rainha", "torre"};

    //mensagens iniciais
    printf("*** Bem-vindo ao jogo de xadrez ***\n");
    printf("Peças disponíveis: Torre, Rainha e Bispo\n");

    //-------------------------------------------------------------
    //Movimentação da Torre (Usando laço for)
    //Ela começa em a1
    int torre_col = 0; //posição inicial
    int torre_row = 1; //linha fixa

    printf("Movimentação da torre (5 casas para a direita):\n");

    for (int movimento = 1; movimento <= 5; movimento++ ){

        int nova_col = torre_col + movimento; //nova coluna é calculada 
        
        //verifica se a nova coluna está dentro dos índices do tabuleiro
        if (nova_col > 7){
            printf("\nMovimento %d não pode ser executado pela torre\n", movimento);
            break;
        }

        printf("\nMovimento %d: Torre foi de %s%d para %s%d", movimento, colunas[torre_col], torre_row, colunas[nova_col], torre_row);
       
        //No momento, ficará aparecendo sempre "Torre foi de 'a1' para...". Pra mudar isso precisa de loops aninhadas (eu acho)
    }
        //--------------------------------------------------------------------------------------------------------------------------------

        //A rainha começa em h5

        int rainha_col = 7;
        int rainha_row = 5;

        printf("\n A movimentação da rainha será 8 casas para a direita!\n");
        int mov_count = 0;
    
        
        while (mov_count < 8){

            int nova_col = rainha_col - 1;
            //verificando os limites              
            if (nova_col < 0){
                printf("\nMovimento inválido! Rainha não pode sair do limite do tabuleiro!\n");
                break;
            }

            printf("Movimento %d: A rainha foi de %s%d para %s%d\n", mov_count + 1, colunas[rainha_col], rainha_row, colunas[nova_col], rainha_row);
            //atualiza a posição para o próximo movimento
            rainha_col = nova_col;

            mov_count++;
        }

        //-------------------------------------------------------------------------------------------------------------------------------------------------------

        //Movimento Bispo
        //Ele está em c1
        //Move-se-rá na diagonal para a direita (uma casa para a direita e uma para cima)

        int bispo_col = 2;
        int bispo_row = 1;
        int movBispo = 0;

        printf("Bispo está em c1 e se moverá na diagonal!\n");

        
        do{
            
        int  nova_col = bispo_col + 1;
        int nova_row = bispo_row + 1;
            
        //verificar se está nos limites do tabuleiro   
                if (nova_col > 7 || nova_row > 8){
                printf("Movimento inválido! Excedeu os limites do tabuleiro.\n");
              break;
            }

            printf("Movimento %d: O bispo foi de %s%d para %s%d\n", movBispo + 1, colunas[bispo_col], bispo_row, colunas[nova_col], nova_row);
            bispo_col = nova_col;
            bispo_row = nova_row;

            movBispo++;
        }while(movBispo < 5);
        

        return 0;
    }








    
