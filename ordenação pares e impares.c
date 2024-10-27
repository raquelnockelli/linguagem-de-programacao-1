#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <locale.h>

/*
Considerando a entrada de valores inteiros não negativos, ordene estes valores segundo o seguinte critério:
 Primeiro os Pares
 Depois os Ímpares
Sendo que deverão ser apresentados os pares em ordem crescente e depois os ímpares em ordem decrescente.

Entrada
A primeira linha de entrada contém um único inteiro positivo N (1 < N < 200) Este é o número de
linhas de entrada que vem logo a seguir. As próximas N linhas conterão, cada uma delas, um valor
inteiro não negativo.
Saída

Apresente todos os valores lidos na entrada segundo a or
*/


int main()
{
   setlocale(LC_ALL,"Portuguese");


   int quantNumeros;

  printf("Informe a quantidade de numeros a serem ordenados (de 2 ate 199):");
  scanf(" %d", &quantNumeros);

  int numeros[quantNumeros];
  int i =0;

   printf("Digite os numeros positivos a serem ordenados:\n");

  for (i=0; i<quantNumeros; i++)
    {
       scanf("%d", &numeros[i]);
    }


    int j=1, k=0, auxiliar = 0;

    for (j=1;j<quantNumeros;j++)
    {
        auxiliar = numeros[j];
        k = j-1;

        while (k>=0 && numeros[k] > auxiliar)
            {
                numeros[k+1] = numeros[k];
                k--;

            }
    }

    int l=0;
    for (l=0; l<quantNumeros; l++)
    {
       printf("%d", numeros[l]);
    }


    return 0;
}
