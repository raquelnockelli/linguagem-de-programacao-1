/*
Construir um programa que conte e imprima o n�mero de ocorr�ncias de uma
*letra, fornecida pelo usu�rio, em uma dada string, tamb�m digitada pelo usu�rio.
Informe um palavra: arara
Informe uma letra: a
Qtde:3
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[51];
    char letra;
    int i,totalLetra = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    for (i=0; i<strlen(palavra); i++){
                if (palavra[i] == letra){
                totalLetra++;

            }
        }

    printf("Existe %d letra  %c na palavra.\n",totalLetra, letra);

    return 0;
}
