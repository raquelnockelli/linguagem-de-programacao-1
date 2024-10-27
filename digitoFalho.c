/*
1)Considere valores, onde há um dígito “falho”, ou seja, esse dígito não deveria aparecer no valor.
 Por  exemplo,  se  a  falha  no  dígito  5,  o  valor  1500  seria  100,  pois  o  5  não  seria  impresso.
  Considere ainda que queremos saber o valor numérico representado, ou seja, se considerarmos o mesmo dígito falho 5,
   o número 5000 corresponde ao valor numérico 0, e não 000.EntradaA  entrada  consiste  de  diversos  casos  de  teste,
     cada  um  em  uma  linha.  Cada  linha  contém  dois inteirosDeN(1 ≤D≤ 9, 1 ≤N<  10100),  representando,  respectivamente,
      o  dígito  que  está apresentando problema na máquina e o número. SaídaPara cada caso de teste da entrada o seu programa
       deve imprimir uma linha contendo um único inteiroV, o valor numérico representado sem o dígito falho.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


MontaVetor(char D[],char N[]){
    int QtdNumeros;
    int j =0;
    char BuscaNumero[1];

    QtdNumeros = strlen(N);

    char Vetor[QtdNumeros];
    int ContaVetor = 0;

    for(int i =0; i < QtdNumeros; i++){
            BuscaNumero[0] = N[i];
         if(BuscaNumero[0] != D[0]){
        ContaVetor = ContaVetor + 1;
        Vetor[j] = N[i];
        j= j+1;
        }
    }
    int inteiro = atoi(Vetor);
    printf("\nValor numérico representado sem o dígito falho : %d\n", inteiro);
}

int main(){

    setlocale(LC_ALL,"Portuguese");

    char D[1];
    char N[20];

    setbuf(stdin, NULL); //limpar o buffer (quando não tinha digito a subrair, estava lendo sujeira"

    printf("Informe o dígito falho entra 1 e 9: ");
    scanf("%c", D);

    printf("Informe o número: ");
    scanf("%s", N);

    MontaVetor(D,N);
}

    





