/*
Fa�a um programa que receba a linha digit�vel de um Boleto Banc�rio e extraia as informa��es referentes ao Banco e Valor do Boleto.
O programa deve ser desenvolvido considerando a orienta��o abaixo e desprezando os caracteres separadores de valores, tais como �.� ou
 �, � da linha digit�vel. Todas as orienta��es ser�o baseadas no seguinte exemplo de linha digit�vel:
34190.12345 12345.67890 12345.678901 1 12340000012345  ---- 3419012345123456789012345678901112340000012345
O c�digo que identifica o Banco � definido pelos tr�s primeiros caracteres da linha digit�vel. Para identificar o banco referente
 ao c�digo, utilize a tabela abaixo:
001 -Banco do Brasil
033 - Santander
104 - Caixa Econ�mica Federal
341 -Ita�
745 -Citibank
O valor do boleto � definido nos �ltimos 10 caracteres da linha digit�vel. � importante lembrar que os centavos s�o definidos nos �ltimos 2 caracteres, e os demais definem o valor em reais.
Considerar que seu programa est� lendo apenas boletos j� vencidos, portanto, dever� calcular o valor da multa, que � uma porcentagem fixa de 10%.
Ler v�rias linhas digit�veis e encerrar o programa quando o usu�rio digitar �FIM�.

*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(){

    setlocale(LC_ALL,"Portuguese");

    char boleto[100];
    char linhaDigitavel[47];
    char respostaFIM [4] = {"FIM"};
    char respostaUser [4];


     while (strcmp(respostaFIM, respostaUser) != 0)
   {
      fflush(stdin);
      printf("\nInsira o c�digo do boleto: ");

      scanf("%[^\n]", boleto); // formato que l� espa�o

      int cont=0, cont2=0;

       //corrigindo o boleto
        for (cont=0;cont<strlen(boleto);cont++){
        if(boleto[cont]=='1'||boleto[cont]=='2'||boleto[cont]=='3'||boleto[cont]=='4'||boleto[cont]=='5'||boleto[cont]=='6'||boleto[cont]=='7'||boleto[cont]=='8'||boleto[cont]=='9'||boleto[cont]=='0') {
        linhaDigitavel[cont2] = boleto[cont];
        cont2++;
       }
       }
      linhaDigitavel[cont2] = '\0';

      printf("%s", linhaDigitavel); //teste da corre��o
      printf("\n");

      IdentificarBancos(linhaDigitavel);

      ValorFinal(linhaDigitavel);


      printf("\nDigite SIM para continuar ou FIM para encerar: ");
       scanf("%s", respostaUser);
       printf("\n");
   }

}
   void IdentificarBancos(char linhaDigitavel[])
    {
    char bBrasil [4]= {'0', '0', '1', '\0'};
    char bSantander [4]= {'0', '3', '3', '0'};
    char bCaixa [4]= {'1', '0', '4', '\0'};
    char bItau [4]= {'3', '4', '1', '\0'};
    char bcitibank [4]= {'7', '4', '5', '\0'};


       if (strncmp(linhaDigitavel, bBrasil, 3) == 0 )
       {
        printf("O boleto � do Banco do Brasil.\n");
       }

       else if(strncmp(linhaDigitavel, bSantander, 3) == 0 )
       {
        printf("O boleto � do Banco Santander .\n");
       }

       else if(strncmp(linhaDigitavel, bCaixa, 3) == 0 )
       {
        printf("O boleto � do Banco Caixa Econ�mia Federal.\n");
       }

       else if(strncmp(linhaDigitavel, bItau, 3) == 0 )
       {
        printf("O boleto do Banco Ita� .\n");
       }

       else if(strncmp(linhaDigitavel, bcitibank, 3) == 0 )
       {
        printf("O boleto do Banco Citibank .\n");
       }

       else
       {
        printf("Banco n�o identificado\n");
       }
   }

   void ValorFinal(char linhaDigitavel[])
{
    char codigoValor[11];
    int i, j=0;
    int inicio = 36, fim = 47;
    float valorBoleto;

    for (i=inicio; i<fim;i++){
        codigoValor[j] = linhaDigitavel[i];
        j++;
    }
    codigoValor[j] = '\0';
    valorBoleto = atof(codigoValor);
    valorBoleto = (valorBoleto / 100) * 1.1;


    printf("Valor a pagar: %.2f\n", valorBoleto);

}
