//Questões: 1, 2 e 3 abaixo do código!


// Questão 4: Código reescrito e corrigido!
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct { 
	int idade;
	char nome[50]; 
	int *notas;
	
} aluno; //define o nome apenas no final

int main() {
	aluno a1, a2;
	a1.idade = 10;
	strcpy(a1.nome, "Pedro"); 
	a2.idade = 12;
	strcpy(a2.nome, "Maria"); 
	
	//Declarando o tamanho do espaço de memória do aluno a1 e a2:
	a1.notas = (int*)malloc(5*sizeof(int));
	a2.notas = (int*)malloc(4*sizeof(int));
	
	int i;
	for(i=0; i<4; i++){ //Condição i
		a2.notas[i] = 100;
	}
	
	for(i=0; i<5; i++){ //condição ii
		if(i<3){
		  a1.notas[i] = a2.notas[i]; 
		}	
	
		a1.notas[4] = 100;	//array das notas
	}
	double media = 0; //declarando a média 
	for(i=0; i<5; i++){
		media += a1.notas[i]; //contagem
	
	}
	
	media = media / 5; //divide a média anterior por 5.
	printf("Media de %s: %lf\n", a1.nome, media);
	
	media = 0; //condição para o a2
	for(i=0; i<4; i++){
		media += a2.notas[i];
	}
	
	media = media / 4;
	printf("Media de %s: %lf\n", a2.nome, media);
	
	free(a1.notas); //desalocando notas a1
	free(a2.notas); //desalocando notas a2
	
	return 0;
	
}

//***********************************QUESTÃO 1 *****************************************


//Questão 1: Qual a saida fornecida por esse programa? 

//Media do Pedro: 80.000000 
//Media da Maria: 100.000000

//*******************************************QUESTÃO 2 ******************************

//Questão 2: O que ocorre na linha 25? a atribuição irá dar erro, pois ao declarar ambos 
//na linha 18 e 19 o tamanho de espaço da memória é diferente. Já que o 
//o programa pede que as 4 notas do aluno a2 equivale às 4 primeiras notas do aluno a1.

//a1.nota = (int*) malloc (5*sizeof(int));//O tamanho do espaço de memória do aluno a1
//a2.nota = (int*) malloc (4*sizeof(int)));//O tamanho de espaço de memória do aluno a2

//Portanto, pode causar um erro de espaço de memória ao declarar as notas. 
 
//******************************************QUESTÃO 3**********************************

//Questão 3: O que ocorre nas linhas 43 e 44? 

//A função free ira desalocar, ou seja, avisa ao sistema que o bloco de bytes apontado por a1.notas e a2.
//notas e pk está disponível para reciclagem. 
//Neste caso as notas do a1 e a2.  

//Isso pode gerar algum erro? Sim, poderá gerar erro de alocação devido ao espaço insuficiente de memória. 
