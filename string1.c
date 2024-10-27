#include <stdio.h>

int main(){

   char vogais[5]={'A','E','I','O','U'};
   int num;
   char frase[50];
   char letra;

   //while (1){
     /*printf("\nInforme uma frase: ");
     scanf("%s", frase); //não lê o caracter espaço
     scanf("%[^\n]", frase); // formato que lê espaço
     fflush(stdin); // limpa buffer
     gets(frase);

     printf("\nInforme uma letra: ");
     scanf(" %c", &letra);

     */
    letra = 'X';
    num=10;
    //frase = "Teste da atribuição";
    strcpy(frase,"Teste");

    //if (frase == "Teste")
    if (strcmp(frase,"Teste")==0)
        printf("Eh igual a teste");
    strcat(frase," do sistema");
    printf("\nFrase: %s ",frase);
    printf("\n Tamanho da String: %i",
            strlen(frase));
    //for (int i=0;i<strlen(frase);i++){
    for (int i=0;frase[i]!='\0';i++){
       printf("\n%c -> %p",frase[i],frase+i);
    }

    frase[0]='T';
    frase[1]='e';
    frase[2]='s';
    frase[3]='t';
    frase[4]='e';
    frase[5]='\0';

    strupr(frase);
    strlwr(frase);
    printf("\nFrase: %s ",frase);

    toupper(frase[0]);
    tolower(letra);
   //}
}
