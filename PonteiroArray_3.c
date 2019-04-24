//EXERCÍCIOS - PONTEIROS E ARRAYS 
//ALUNA: MÉRCIA REGINA DA SILVA - 201811250047 
// PARTE 1

#include<stdio.h>


int main(){
	//declarando as variáveis 
	int notas [10]; 
	float soma = 0; //valor inicial
	float media;
	int quantidade=0; //valor inicial
	int i;
	
	for(i = 0; i < 10; i ++){ //i representa o valor inicial; condição final que controla o laço (loop); e incremento do laço.
		scanf("%d", &notas[i]); //notas serão lidas.
		soma+=notas[i]; //equivale a soma = soma + notas[i]
	}
	
	media = soma / 10.0; //média aritmética da turma 
		
	for(i=0; i<10; i++){ //i representa o valor inicial; condição final que controla o laço (loop); e incremento do laço.
		if(notas[i]>media) { //se notas lidas for maior que a média ira incrementar a quantidade 
			quantidade++; //quantidade de alunos que ficaram com a nota acima de média da turma.
		}
			
	}
	
	//permite exibir os valores encontrados.
	printf("%.1f\n", media);
	printf("%d\n", quantidade);
	
	return 0;
	
}
	

	
