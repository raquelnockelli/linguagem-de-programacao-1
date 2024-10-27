/*
Faça um programa para criptografar uma frase dada pelo usuário.

a) crie uma função que receba string, inverta a frase e troque as consoantes por #.
A propria string passada como argumento devera ser alterada. Use notação ponteiro.

b) Chame a função no main, criando as variaveis necessárias.

Exemplo: eu estou na escola
saida: a#o##e a# ou##e eu

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    char frase[100];

    printf("Digite uma frase: ");
    scanf("%[^\n]", frase);

    CONVERTER(frase);

    return 0;
}

void CONVERTER(char *frase)
    {
    char auxiliar;
    char consoantes[50] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    int i, j;

    //invertendo a frase
    for (i=0;i<strlen(frase)/2; i++){
        auxiliar = frase[i];
        frase[i] = frase[strlen(frase)-1-i];
        frase[strlen(frase)-1-i] = auxiliar;
    }

    //substituindo a consuante por #
    for (i=0; i<strlen(frase); i++){
        for (j=0; j<strlen(consoantes); j++){
            if (frase[i] == consoantes[j]){
                frase[i] = '#';
                break;
            }
        }
    }

    printf("Resultado: %s\n", frase);

    return 0;
    }
