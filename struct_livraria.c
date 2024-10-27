#include <stdio.h>
#include <locale.h>


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

void preencheLivro(struct Livro *varLivro)
{

    setlocale(LC_ALL, "Portuguese");
    // declarar var struct


   // pedir dados em tela

    printf("Informe o ano: ");
    scanf("%i", &varLivro->ano);

    printf("Informe o título: ");
    scanf(" %[^\n]",&varLivro->titulo);

    printf("Informe o autor: ");
    scanf(" %[^\n]",&varLivro->autor);

    printf("Informe o volume: ");
    scanf("%i", &varLivro->nVolume);

    printf("Informe o preço: ");
    scanf("%f", &varLivro->preco);

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
      preencheLivro(&liv->V[i]);
   }

}

void mostraLivros(struct Livraria *liv, int numLivros){

     for(int i=0; i<numLivros; i++){

        printf("Ano: %i\n", liv->V[i].ano);
        printf("Titulo %s\n", liv->V[i].titulo);
        printf("Autor: %s \n", liv->V[i].autor);
        printf("Volume: %i \n", liv->V[i].nVolume);
        printf("Preco: %.2f \n", liv->V[i].preco);
     }


}

float custoLivraria (struct Livraria *liv, int numLivros){

    float valorTotal =0;
    float valor =0;

    for(int i =0; i < numLivros; i++){

        valor = liv->V[i].preco;
        valorTotal = valorTotal+valor;
    }

    return valorTotal;
}

int main()
{
setlocale(LC_ALL, "Portuguese");

    int qtlivros;
    float vTotal =0;
    struct Livraria livraria;

   printf("Informe a quantidade de livros: ");
   scanf("%i",&qtlivros);

   preencheLivraria(&livraria, qtlivros);
   // chamar aqui função para mostrar todos os livros
    mostraLivros(&livraria, qtlivros);
   // chamar aqui função que RETORNE o custo da Livraria (soma dos valores dos livros)
   //  e exiba em tela.
   vTotal = custoLivraria(&livraria, qtlivros);

   printf("O valor total da livraria: R$ %.2f",vTotal );
   return 0;

}
