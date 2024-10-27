/* strstr.c */
#include <stdio.h>
#include <string.h>

int main(void)
{
   char *psResultado;
   char sFrase[] = "isto e um teste";

   printf("\nEndereço Inicial do vetor sFrase= %d", sFrase );

   /* A função retornará o endereço correspondente à localização do "to" */
   psResultado = strstr(sFrase, "to");
   //pesquisou o local do to e apontou para ele

   printf("\nEndereço inicial para a pesquisa psresultado = %d\n", psResultado );

   printf("\nEndereço inicial para a pesquisa do "to"= %s\n", psResultado );
   return 0;
}

/*
Sintaxe:

char * strstr( const char * endereçoStrOrigem, char * endereçoStrChave);

A função strstr devolve um ponteiro para a primeira ocorrência da string apontada
por endereçoStrChave na string apontada por endereçoStrOrigem.
Ela devolve um ponteiro nulo de não for encontrada nenhuma coincidência.
*/
