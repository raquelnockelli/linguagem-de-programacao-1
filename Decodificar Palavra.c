/*
Criar uma função que decodifique uma string:
Considerar apenas as letras minúsculas
A palavra estará na ordem inversa dentro da string.

Exemplo:
NoTApasCAL            :sapo
atEQUEatabELATERMINE  :batata
zoEIrrRRRRa           :arroz

No main solicitar a string codificada e mostrar a palavra decodificada.
Fazer um looping solicitando a qtde de strings para teste.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

char *DECODIFICADA (char *codificada);

int main()
{
    setlocale(LC_ALL,"Portuguese");

    char codificada[30];

    int qtdeteste, cont=0;
    char *recebe;


    printf("Quantas palavras serão decodificadas?\n");

    scanf("%d",&qtdeteste);

    while (cont <= qtdeteste){
        printf("Digite a palavra criptografada: ");
        fflush(stdin); // limpa buffer
        scanf("%[^\n]", codificada);

        recebe = DECODIFICADA (codificada);

        cont++;
        printf("Resultado: %s\n", recebe);
    }
    return 0;
}

char *DECODIFICADA (char *codificada)
{

    char *decodificada;
    char auxiliar;
    int i, j=0;

    decodificada = (char *) malloc(30);

    for (i=0; i<strlen(codificada); i++){
        if (islower(codificada[i])){
           decodificada[j] = codificada[i];
           j++;
        }
    }
    decodificada[j] = '\0';

    strrev(decodificada);
    return decodificada;
}
