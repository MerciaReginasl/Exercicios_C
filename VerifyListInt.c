#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int verifyListInt(const array[]){ //Para obter a quantidade de números contidos na string.
	int contar = 0;
	for (int i=0; array[i]) != '\0'; i++){ //compara caractere por caractere
		
		if(array[i] != ' ' && (array[i] < '0' || array[i] > '9'))  return 0; 
		//implementar uma função para testar se um caractere array é um digito (um dos caracteres entre 0 e 9)
		if(i == 0 && array[i] >= '0' && array[i] < '9') contar++;
		if(array[i] == ' ' && array[i + 1] >= '0' && array[i + 1] <= '9') contar++;
		
	}
	return contar;
	
}

int* splitint(const char array[], int *tamanho){ 
//aponta para um array de inteiro criado dinamicamente a partir dos valores contidos na string.

	char aux[strlen(array)]; //tamanho do array
	*tamanho=0; //ponteiro tamanho
	int contar=0;
	int contar_2=0;
	for(int i=0; i < strlen(array); i++) aux[i]='\0';
	if (verifyListInt(array)==0) {
		*tamanho=0;
		return NULL;
	}
	else{
		for(int i=0; i < strlen(array); i++){
			//
			if(array[i] >= '0' && array[i] <= '9' && (array[i + 1] == ' ' || array[i +1] == '\0')) ++*tamanho;
			int *intarray=(*int)malloc(*tamanho*sizeof(int));  // aloca  memoria  para um vetor de *tamanho inteiros.
			for(int i=0; i < strlen(array); i++){
				if(array[i] >= '0' && array[i] <= '9'){
					aux[contar]=array[i];
					contar++;
				}
				if(array[i] >= '0' && array[i] <='9' && (array[i + 1] == ' ' || array[i + 1] == '\0')){
					contar=0;
					intarray[contar_2]=atoi(aux); // atoi que converte strings em números inteiros.
					contar_2++; //incrementa uma unidade ao valor 
					for(int i=0; i < strlen(array); i++) aux[i] = '\0';
					
				}
			}
			return intarray;
		}	
	}	
}

int main(){
	char pos[28] = {" 1 2 3 4 5 8 159 56 "};
	int m = verifyListInt(pos);
	int n;
	int *inter=splitint(pos, &n); //passa o endereço de n.
	if(inter == NULL) {
		printf("String inválida\n");
		return -1; /
	}
	
	for(int i=0; i < n; i++);
	printf("%d\n", inter[i]);
	
	return 0;
}
