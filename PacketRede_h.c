#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h> //Tipos inteiros de tamanho fixo

#define DATA 10
#define ACK  20

typedef struct { //O comando é muito usados em TADs, de forma a simplificar a criação de estruturas já definidas. 
	//Declarando tipos de cada pacote de rede
	uint8_t ID; //pacote: valor inteiro de 8 bits
	int type; //valor inteiro tipo
	uint32_t hadress;//pacote: valor inteiro de 32 bits
	uint32_t dadress;
	uint8_t *carga_Util; //array alocado dinamicamente
	uint8_t tamanho; //um valor inteiro de 8 bits que contém a quantidade de bytes que a carga útil do pacote possui. 
}Packet;

Packet* createDataPacket(uint8_t id, uint32_t h_adress, uint32_t d_adress, uint8_t tamanho){
	
	Packet *pk=(Packet*) malloc(sizeof(Packet));//Gerenciamento Dinâmico de Memória malloc() que recebe 
                                              //como parãmetro a quantidade de bytes a serem alocados.
	pk->ID=id;
	pk->type=DATA;
	pk->hadress=h_adress;
	pk->dadress=d_adress;
	pk->tamanho=tamanho;
	pk->carga_Util=(uint8_t*)malloc(pk->tamanho*sizeof(uint8_t));//aloca memoria para um vetor de tamanho inteiros.
	
	return pk;

}

Packet* createACKPacket(uint8_t id, uint32_t h_adress, uint32_t d_adress){
//Tipo de pacote de dados e pacote de reconhecimento ACK

	Packet *pk=(Packet*) malloc(sizeof(Packet));
	pk->ID=id;
	pk->type=ACK;
	pk->hadress=h_adress;
	pk->dadress=d_adress;
	pk->carga_Util=NULL; //Recebe NULL caso não seja possível realizar a alocação.
	pk->tamanho=0;
	
	return pk;
}
int i;
void writeData(Packet *pk, uint8_t array[], int m){
	for(i=0; i < pk->tamanho && i < m; i++){
		pk->carga_Util[i]=array[i];
	}
	for(i=m; i < pk->tamanho; i++) {
	   pk->carga_Util[i]=0;
    }
}
Packet *clonePacket(Packet *pk){
	Packet *pk2 = (Packet*) malloc(sizeof(Packet));
	pk2->ID=pk->ID;
	pk2->type=pk->type;
	pk2->dadress=pk->dadress;
	pk2->hadress=pk->hadress;
	pk2->tamanho=pk->tamanho;
	pk2->carga_Util = (uint8_t*) malloc(pk2->tamanho*sizeof(uint8_t));
	for(i = 0; i < pk->tamanho; i++){
		pk2->carga_Util[i] = pk->carga_Util[i];
	}
	return pk2;
}
	
void printPacketInformation(Packet *pk){
	if(pk->type==ACK){
		printf("Packet type: ACK\n");
		printf("ID: %d\n", pk->ID);
		printf("Source Address: %d\n", pk->hadress);
		printf("Destination Address: %d\n", pk->dadress);
		printf("\n");
   
	}
	else{
		printf("Packet type: DATA\n");
		printf("ID: %d\n", pk->ID);
		printf("Source Address: %d\n", pk->hadress);
		printf("Destination Address: %d\n", pk->dadress);
		printf("Payload size: %d\n", pk->tamanho);
		printf("Payload: ");
		printf("\n\n");
		
	}
}

void deletePacket(Packet *pk){ //desalocar pacote: desalocar a memória utilizada para armazenar este pacote.
	free(pk->carga_Util); //avisa ao sistema que o bloco de bytes apontado por carga_Util e pk está disponível para reciclagem. 
	free(pk); 
	pk = NULL;
}


