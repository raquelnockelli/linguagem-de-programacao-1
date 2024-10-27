#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int TabXadrez[8][8] = {{6,0,0,5,0,0,1,0},
                           {0,1,0,2,0,3,0,2},
                           {0,1,1,1,0,1,0,0},
                           {0,0,2,0,3,4,4,3},
                           {1,0,1,1,0,1,0,0},
                           {0,0,1,3,0,4,0,1},
                           {1,0,0,0,2,2,2,1},
                           {1,5,0,6,0,1,1,0}};
    int QtdPecas[7] ={0};
    int i, j, Repeticoes;

    printf("Exibindo as pecas no tabuleiro:\n\n");
    for(i=0; i<8; i++){ //percorre todas as linhas
        for(j=0; j<8; j++){ //percorre todas as colunas
        printf("%d ", TabXadrez[i][j]);
        }
        printf("\n");
    }

   for(i=0; i<8; i++){
        for(j=0; j<8; j++){
        QtdPecas[TabXadrez[i][j]]++;
    }
}
    printf("\nAusencia de pecas: %d pecas\n", QtdPecas[0]);
    printf("Peoes: %d pecas.\n", QtdPecas[1]);
    printf("Cavalos: %d pecas.\n", QtdPecas[2]);
    printf("Torres: %d pecas.\n", QtdPecas[3]);
    printf("Bispos: %d pecas.\n", QtdPecas[4]);
    printf("Reis: %d pecas.\n", QtdPecas[5]);
    printf("Rainhas: %d pecas.\n", QtdPecas[6]);

    return 0;
}

