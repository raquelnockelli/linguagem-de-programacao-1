#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  double M[12][12], Soma=0;
   int L, i, j;
   char T;

    scanf(" %d", &L);
    scanf(" %c", &T);

   for (i=0; i<12; i++){
    for (j=0; j<12; j++){
          scanf("%lf", &M[i][j]);
    }
   }

    for (j=0; j<12; j++){
         Soma += M[L][j];
    }

   if (T == 'M'){
      Soma = Soma /12.0;
        printf("%.1lf\n", Soma);
    }
return 0;
}
