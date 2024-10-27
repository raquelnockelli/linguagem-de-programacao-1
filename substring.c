#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

     char RA[9]={"AN123456"};
     char curso[3];
     int inic = 0, fim = 2;


    Substring (RA, curso, inic,fim);
    printf( "Substring: %s",curso);
}

    Substring (char RA[], char curso[],int inic, int fim){
    int i, j=0;

    for (i= inic; i<fim; i++){
    curso[j] = RA[i];
    j++;
    }
    }




