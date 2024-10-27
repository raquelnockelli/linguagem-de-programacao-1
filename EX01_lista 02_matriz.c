/*
1) Escreva um programa que leia uma matriz 5 x 6 do usuário e a armazene os
valores em um vetor unidimensional de n posições.
Depois exibir o vetor e a diagonal principal da matriz 5x6.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
   int Matriz[5][6], Vetor[30];
   int i, j, h=0;

   for (i=0; i<5; i++){
    for (j=0; j<6; j++){
        Matriz[i][j]= rand() % 100 + 1; //gerando numeros de 0 a 100
    }
   }

   printf("1) Matriz:\n");
       for (i=0; i<5; i++){
        for (j=0; j<6; j++){
        printf(" %d\t", Matriz[i][j]); // o /t para organizar a tabulação
    }
    printf("\n");
   }

    printf("\n2) Vetor:\n");
        for (i=0; i<5; i++){
         for (j=0; j<6; j++){
           Vetor[h] = Matriz[i][j];
           h++;
         }
        }

        for (h=0; h<30; h++){
        printf("%d ", Vetor[h]);
        }


        // exibindo a diagonal
    printf("\n\n3) Diagonal Principal:\n");
        for (i=0; i<5; i++){
         for (j=0; j<6; j++){
                if (i==j)
                    printf("%d ", Matriz[i][j]);
                else
                    printf("  ");
         }
         printf("\n");
         }

    return 0;
}
