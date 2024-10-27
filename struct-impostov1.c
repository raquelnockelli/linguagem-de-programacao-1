// Suponha que temos os seguintes dados:
// Vr Inicial  VrFinal  Perc
// 0 		a 1000.00 	0.05
// 1000.01	a 2000.00   0.10
// 1000.01	a 5000.00   0.20
// 5000.00  a 999999.99 0.25

//Imovel
// NrImovel  VrImposto  Meses de Atraso
//123        1500.00    1

//Fazer um programa que calcule o valor da multa do imóvel
//  Verificar em qual faixa de imposto o imovel se encontra
// Achando a faixa, aplicar o percentual sobre o valor do imposto do imovel e multiplicar pela qtde de meses

#include <stdio.h>
struct IMOVEL 
   {
      int nrregistro;
	  float valorimposto;
	  int mesesatraso;
   };   
   
   struct TABELAIMPOSTO
   {
      float valorini;
      float valorfim;
	  float percentual;
      
   };
   
void carregatabimposto
          (struct TABELAIMPOSTO *tabimposto)
{
   
   printf("Informe a faixa inicial do imposto");
   scanf("%f",&tabimposto->valorini);
   
   printf("Informe a faixa final do imposto");
   scanf("%f",&tabimposto->valorfim);
   
   printf("Informe o percentual");
   scanf("%f",&tabimposto->percentual);
   
}

void carregaImovel(struct IMOVEL *im)
{
   printf("Informe o numero de registro");
   scanf("%i",&im->nrregistro);

   printf("Informe o valor do imposto");
   scanf("%f",&im->valorimposto);

   printf("Informe a qtde de meses em atraso");
   scanf("%i",&im->mesesatraso);
   
}
int main()
{
   
   float multa;
   struct TABELAIMPOSTO tabimposto[4];
   struct IMOVEL vImovel;
   int i,j;
   
   //tabimposto[0].valorini=0;
   
   for (i=0;i<4;i++)
   {
      carregatabimposto(tabimposto+i);
   }  
  
   carregaImovel(&vImovel);
   
	// verifica a faixa do imposto e aplica a multa
	  for (j=0;j<4;j++)
	  {
	     if (vImovel.valorimposto>=tabimposto[j].valorini && vImovel.valorimposto<=tabimposto[j].valorfim)
         {
		    multa=vImovel.valorimposto*tabimposto[j].percentual*vImovel.mesesatraso;
			printf("\n \n\t Registro: %i \n\tValor Imposto: %.2f \n\t Meses de Atraso: %i \n\tMulta: %.2f",
			              vImovel.nrregistro, vImovel.valorimposto, vImovel.mesesatraso, multa);
		    break;				  
         }		 
	  }	    
   
   return 0;
}
