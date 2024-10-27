/* strstr.c */
#include <stdio.h>
#include <string.h>

int main(void)
{
   char *psResultado;
   char sFrase[] = "isto e um teste";

   printf("\nEndere�o Inicial do vetor sFrase= %d", sFrase );

   /* A fun��o retornar� o endere�o correspondente � localiza��o do "to" */
   psResultado = strstr(sFrase, "to");
   //pesquisou o local do to e apontou para ele

   printf("\nEndere�o inicial para a pesquisa psresultado = %d\n", psResultado );

   printf("\nEndere�o inicial para a pesquisa do "to"= %s\n", psResultado );
   return 0;
}

/*
Sintaxe:

char * strstr( const char * endere�oStrOrigem, char * endere�oStrChave);

A fun��o strstr devolve um ponteiro para a primeira ocorr�ncia da string apontada
por endere�oStrChave na string apontada por endere�oStrOrigem.
Ela devolve um ponteiro nulo de n�o for encontrada nenhuma coincid�ncia.
*/
