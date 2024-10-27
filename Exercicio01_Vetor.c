#include <stdio.h>
void main (void)
{
int VetorA[9];
int VetorB[9];
int i,j, iB=0;

//criando vetor a
    for(i=0; i<10; i++){
    printf("Digite o %d numero: ", i+1);
    scanf(" %i",&VetorA[i]);
 }
 for (j=9; j>=0; j--){
    VetorB[iB] = VetorA[j];
    iB++;
 }
  printf("***Mostrar Vetor B***\n");
  for(j=0; j<10; j++){
    printf("O %d numero e : %d \n",j+1, VetorB[j]);
  }

}
