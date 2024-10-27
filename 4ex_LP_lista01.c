#include <stdio.h>

int main(void)
{
   int QuantComodo, ContComodo=1, Classe, LampadaComodo, TotalLampada=0, Cont;
   float Largura, Comprimento, Area, PotenciaComodo, TotalPotencia=0;

     printf("Qual a quantidade total de comodos na residencia?\n");
     scanf(" %d", &QuantComodo);

   for(Cont=1; Cont<=QuantComodo; Cont++){

       printf("\nQual a largura do %d comodo?\n", ContComodo);
       scanf(" %f", &Largura);

       printf("Qual o Comprimento do %d comodo?\n", ContComodo);
       scanf(" %f", &Comprimento);

       Area = Largura * Comprimento;
       printf("A area do %d comodo é %.2f.\n", ContComodo, Area);

       printf("Qual é a classificacao de ultilizacao do %d comodo?\n", ContComodo);
       scanf(" %d",&Classe);

      switch(Classe)
      {
          case 1 :
          PotenciaComodo = Area * 10;
          TotalPotencia = TotalPotencia + PotenciaComodo;

          LampadaComodo = PotenciaComodo / 60;
          if (LampadaComodo <1)
          LampadaComodo = 1;

          TotalLampada = TotalLampada + LampadaComodo;

          printf("\nA potencia minima do %d comodo e de %.2f watts.\n", ContComodo, PotenciaComodo);
          printf("A quantidade de lampadas do %d comodo e  %d.\n", ContComodo, LampadaComodo);
          break;

          case 2 :
         PotenciaComodo = Area * 15;
          TotalPotencia = TotalPotencia + PotenciaComodo;

          LampadaComodo = PotenciaComodo / 60;
          if (LampadaComodo <1)
          LampadaComodo = 1;

          TotalLampada = TotalLampada + LampadaComodo;

          printf("\nA potencia minima do %d comodo e de %.2f watts.\n", ContComodo, PotenciaComodo);
          printf("A quantidade de lampadas do %d comodo e  %d.\n", ContComodo, LampadaComodo);
          break;

          case 3 :
          PotenciaComodo = Area * 18;
          TotalPotencia = TotalPotencia + PotenciaComodo;

          LampadaComodo = PotenciaComodo / 60;
          if (LampadaComodo <1)
          LampadaComodo = 1;

          TotalLampada = TotalLampada + LampadaComodo;

          printf("\nA potencia minima do %d comodo e de %.2f watts.\n", ContComodo, PotenciaComodo);
          printf("A quantidade de lampadas do %d comodo e  %d.\n", ContComodo, LampadaComodo);
          break;

          case 4 :
          PotenciaComodo = Area * 20;
          TotalPotencia = TotalPotencia + PotenciaComodo;

          LampadaComodo = PotenciaComodo / 60;
          if (LampadaComodo <1)
          LampadaComodo = 1;

          TotalLampada = TotalLampada + LampadaComodo;

          printf("\nA potencia minima do %d comodo e de %.2f watts.\n", ContComodo, PotenciaComodo);
          printf("A quantidade de lampadas do %d comodo e  %d.\n", ContComodo, LampadaComodo);
          break;

          case 5 :
         PotenciaComodo = Area * 25;
          TotalPotencia = TotalPotencia + PotenciaComodo;

          LampadaComodo = PotenciaComodo / 60;
          if (LampadaComodo <1)
          LampadaComodo = 1;

          TotalLampada = TotalLampada + LampadaComodo;

          printf("\nA potencia minima do %d comodo e de %.2f watts.\n", ContComodo, PotenciaComodo);
          printf("A quantidade de lampadas do %d comodo e  %d.\n", ContComodo, LampadaComodo);
          break;

          default :
          printf("Numero de classe invalido\n");
          break;

        }

         ContComodo++;
   }

   printf("\nO total de lampadas da residencia e %d.\n", TotalLampada);
   printf("O total da potencia de iluminação da residencia e %.2f watts.\n", TotalPotencia);

    return 0;
}
