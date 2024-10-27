#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void ALTERARNOME(char *nome) // recebendo o vetorno como ponteiro
{
    int tamNome = strlen(nome);
    char primeiroNome[20];
    char sobrenome[20];
    int i, j=0, k=0, l=tamNome, m, n=0;
    int fimPrim =0;

    for (i=0; i< tamNome; i++){
        primeiroNome[j] = nome[i];
        j++;
        fimPrim = i;
        if (nome[i] == ' '){
        break;
            }
    }
    primeiroNome[fimPrim] = '\0';

    for(k=tamNome-1; k>fimPrim; k--){
        l--;
        if (nome[k] == ' '){
        break;
        }
    }

    for(m=l+1; m<tamNome; m++){
    sobrenome[n] = nome[m];
    n++;
    }
    sobrenome[n] = ',';
    sobrenome[n+1] = '\0';

    strcat(sobrenome,primeiroNome);
    printf("%s\n", sobrenome);

    return 0;
}


int main(){

    setlocale(LC_ALL,"Portuguese");

    char nome[50];
    printf("Digite um nome: ");
    fflush(stdin);
    scanf("%[^\n]", nome);

    ALTERARNOME(nome); //enviando o vetor nome para a função

    return 0;
}

