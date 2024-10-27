/*
Desenvolver um programa para manipular, ordenar e pesquisar alunos de uma turma de 6 pessoas.

1)Estrutura Aluno: Define a estrutura Aluno com campos para RA, nome, faltas e nota.

2)Função OrdenaPorNome: Ordena o array de alunos em ordem alfabética com base no
nome usando o algoritmo de ordenação por bolha (bubble sort). //ordenação

3)Função Calcula Média: Calcula a média das notas dos alunos somando todas as notas
 e dividindo pelo número de alunos.

4)Função Pesquisa Binária: Realiza a pesquisa binária no array de alunos para
encontrar um  aluno  com  o  RA  especificado.  Retorna  o  índice
   do  aluno  se  encontrado,  ou -1  se não encontrado.
*/


#include <stdio.h>
#include <string.h>

// criando estrutura de dado aluno com apelido TipoAluno
typedef struct Aluno {
    int RA;
    char nome[51];
    int faltas;
    float nota;
} TipoAluno;


// Função ordenando alunos por nome:
void ordenaAlunos(TipoAluno *pVetAlunos, int n){

//ordenação buble
   TipoAluno Aux;
   int x, y;

	for (x=n-1;x>0;x--){ //n=6 então x=5 e vai descendo

		for (y=0;y<x;y++){ // indice vai subindo

			if (strcmp(pVetAlunos[y].nome, pVetAlunos[y+1].nome)>0) //compara inicialmente se o nome no indice 0 é maior que no indice 1
			{//troca
			   Aux=pVetAlunos[y]; //o dado no indice 0 é armazenado na auxiliar
			   pVetAlunos[y]=pVetAlunos[y+1];// o valor do indice 1 passa pro indice 0
			   pVetAlunos[y+1]=Aux; //o dado guardo na auxiliar volta pro vetor
			}
		}
	}

}


//função calcular media
//esta recebendo o vetor alunos e n
 calcularMedia(TipoAluno *Tab, int numAlunos){

    float media;
    float notas=0;

    for(int i=0; i<numAlunos; i++){

        notas = notas + Tab[i].nota;

    }

    media = notas/numAlunos;
    return media;

}

void ordenarPorRA(TipoAluno *pVetAlunos, int n){

   TipoAluno Aux;
   int x, y;
	for (x=n-1;x>0;x--){

		for (y=0;y<x;y++){

			if (pVetAlunos[y].RA > pVetAlunos[y+1].RA) //se for maior que o proximo, troca de lugar
			{
			   Aux=pVetAlunos[y];
			   pVetAlunos[y]=pVetAlunos[y+1];
			   pVetAlunos[y+1]=Aux;
			}
		}
	}
  //fazendo o print dentro da função
	printf("\n**Alunos ordenados por RA**");
	for (x=0;x<n;x++){
	   printf("\nRA: %i  Aluno: %-20s  Nota: %2.2f   Faltas: %2d",
	        pVetAlunos[x].RA,pVetAlunos[x].nome,pVetAlunos[x].nota,pVetAlunos[x].faltas);
	}
	printf("\n\n");
}


int pesquisaBinaria(TipoAluno *Tab,int Inicio, int Fim, int Valor)
{
  int Meio;


  if(Inicio>Fim)
    return -1; // Nesse caso o valor não foi encontrado (devolve -1)

  Meio = (Inicio + Fim) / 2; // Calcula o índice do elemento do meio

  if (Valor > Tab[Meio].RA )
     return(pesquisaBinaria(Tab,Meio + 1,Fim,Valor)); // chamada recursiva

  if(Valor < Tab[Meio].RA )
    return(pesquisaBinaria(Tab,Inicio,Meio-1,Valor)); // chamada recursiva

  return Meio;
}


int main() {
    // Armazenar dados de 6 alunos de forma fixa no vetor "alunos" com 6 posições
    TipoAluno alunos[6] = {
        {101, "Carlos", 2, 7.5},
        {102, "Ana", 1, 8.0},
        {103, "Pedro", 0, 6.0},
        {104, "Maria", 3, 9.0},
        {105, "Joao", 2, 7.0},
        {106, "Bianca", 4, 5.5}
    };

    int n = 6; //quantidade de alunos

    // Ordenar os alunos por nome
    // CHAMAR A FUNÇÃO QUE ORDENA POR NOME

    ordenaAlunos(alunos, n); //passou o vetor com os alunos e o numero de alunos para a funçao

    // Exibir alunos ordenados por nome
    printf("Alunos ordenados por nome:\n");
    for(int i = 0; i < n; i++) {
        printf("RA: %d, Nome: %s, Faltas: %d, Nota: %.2f\n", alunos[i].RA, alunos[i].nome, alunos[i].faltas, alunos[i].nota);
    }

    // Calcular a média das notas
    // CHAMAR A FUNÇÃO MÉDIA
    //cria uma variavel do tipo float para receber a media (tipo float), pois a função tem retorno
    //passou o vetor com os alunos e o numero de alunos para a funçao

    float resultadoMedia = calcularMedia(alunos,n);

    // Exibir a média das notas
    printf("\nMedia das notas dos alunos: %.2f\n", resultadoMedia);

    // Ordenar os alunos por RA para a pesquisa binária (NÃO DA PRA FAZER A PESQUISA SEM ORDENAR ANTES)
    ordenarPorRA(alunos, n);

    // Realizar a pesquisa binária pelo RA 105
    int Inicio = 0;
    int raBusca = 105;
    int resultado = pesquisaBinaria(alunos,Inicio, n-1, raBusca); //n=fim que é o ultimo indice
    //tambem poderia passar assim: pesquisaBinaria(alunos,0, 5, raBusca)

    printf("Resultado da pesquisa binaria");
    printf("\nRA: %i  Aluno: %-20s  Nota: %2.2f   Faltas: %2d \n",
	        alunos[resultado].RA,alunos[resultado].nome,alunos[resultado].nota,alunos[resultado].faltas);

    return 0;
    }














