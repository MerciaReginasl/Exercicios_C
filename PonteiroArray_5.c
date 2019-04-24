//questão 5 
//Aluna: Mércia Regina da Silva - 201811250047
//PARTE 3

#include<stdio.h>
#include<string.h>

int main(void){
	char entrada[100]; //declarando tamanho da entrada vetor
	
	gets(entrada); //get string armazena tudo que foi digitado, inclusive
	              //os espaços até que a tecla ENTER seja PRECIONADA!
	              
	int n; //declarando a variável inteiro n para analise da função for (loop)
	int cont_N; //declarando a variável inteiro contar números
	int cont_C; //declarando a variável inteiro contar caracteres
	
	cont_C = strlen(entrada); //strlen é a função que conta a quantidade de caractere.
	
	//laço de repetição ra variável n controla a contagem do loop e o incremento 
	
	for(n = 0; n < cont_C; n++){
		if(entrada[n] >= '0' && entrada[n] <= '9') cont_N++;  //Considerar a implementação de uma função para testar se um
		                                                      //caracter n é um digito (um dos caracteres entre 0 e 9). Caso sim irá imcrementar.
		
	}
	
	//condições para analisar números e caracteres existentes na senha.
	if(cont_N >= 2 && cont_C >= 6) //se a condição da
		printf("SIM");
	
	else if(cont_N < 2 || cont_C < 6) //caso contrário
		printf("NAO");
	
	return 0;
	
}
