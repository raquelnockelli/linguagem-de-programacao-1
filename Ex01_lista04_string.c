#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[21];
    char vogais[11] = "aeiouAEIOU";
    char caracter;
    int i, j,totalVogais = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for (i=0; i<strlen(palavra); i++){
        for (j=0; j<strlen(vogais); j++){
            if (palavra[i] == vogais[j]){
                totalVogais++;
                break;
            }
        }
    }

    printf("A palavra possui %d vogais.\n", totalVogais);

    printf("Digite um caracter para substituir as vogais: ");
    scanf(" %c", &caracter);

    for (i=0; i<strlen(palavra); i++){
        for (j=0; j<strlen(vogais); j++){
            if (palavra[i] == vogais[j]){
                palavra[i] = caracter;
                break;
            }
        }
    }

    printf("Resultado da palavra com substituicao: %s\n", palavra);

    return 0;
}
