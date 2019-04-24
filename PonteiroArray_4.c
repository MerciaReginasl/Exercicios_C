//QUESTÃO 4 
//ALUNA: MÉRCIA REGINA DA SILVA
//PARTE 2


#include<stdio.h>

#define SIZE 100



int main(){ //declarando as variavéis
	int mostra_num=0; 
	int i;
	scanf("%d", &mostra_num); //ler os valores
	int vet[mostra_num], vetor2[mostra_num]; //declarando duas nova variável para o novo vetor.
	
	for(i = 0; i < mostra_num; i++){  //i representa o valor inicial; condição final que controla o laço (loop); e incremento do laço.
		scanf("%d", &vet[i]);
	}
		
	for(i = 0; i < mostra_num; i++){ //gerando novo array de inteiros
								
		if(i == 0){ //penultimo elemento
			vetor2[0] = (vet[i] + vet[i + 1])/2; //media de 2 valores
		}
		
		else if(i == (mostra_num - 1)){ //ultimo elemento
			
			vetor2[i] = (vet[i] + vet[i - 1])/2; //media de 2 valores
		}
		else{ //caso geral
			vetor2[i] = ((vet[i] + vet[i + 1] + vet[i - 1]) / 3); //media de 3 valores 
		}
	}
	
		for(i = 0; i < mostra_num; i++){ //filtro da média 
			printf("%d", vetor2[i]); //saída do novo vetor
	}
	
	
		return 0;
}
