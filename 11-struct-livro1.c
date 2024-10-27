#include <stdio.h>

struct Livro
{
   int ano;
   char titulo[100];
   char autor[100];
   int nVolume; // Número de exemplares de um dado livro.
   float preco;
};

struct Livraria
{
   struct Livro V[100]; // Armazena a informação de n livros !!
   int nLivros; // Número de livros existentes na livraria.
};

struct Livro preencheLivro()
{
   // declarar var struct 
   // pedir dados em tela
   // retornar var
}

void preencheLivraria(struct Livraria *liv, int numLivros)
{

   int i;

   liv->nLivros = numLivros;

   for (i=0;i<numLivros;i++)
   {
      // *(v+i) ou v[i]
      //*(liv->V+i)=preencheLivro();
      liv->V[i]=preencheLivro();
   }

}

void mostraLivros(struct Livraria *liv, int numLivros){
	
}

int main()
{
   int qtlivros;
   struct Livraria livraria;

   printf("Informe a quantidade de livros");
   scanf("%i",&qtlivros);

   preencheLivraria(&livraria, qtlivros);
   // chamar aqui função para mostrar todos os livros

   // chamar aqui função que RETORNE o custo da Livraria (soma dos valores dos livros)
   //  e exiba em tela.
   return 0;

}
