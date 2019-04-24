#include "PacketRede.h"
#include <stdio.h>

int main(){
	Packet *data=createDataPacket(1, 10, 20, 10);
	Packet *ack=createACKPacket(1, 20, 10);
	uint8_t ID[8]={1, 2, 3, 4, 5, 6, 7, 8};
	writeData(pk, array, 8);
	Packet *pk = clonePacket(pk);
	uint8_t tamanho2[8] = {8, 7, 6, 5, 4, 3, 2, 1};
	writeData(pk, array, 8);
	printPacketInformation(clone);
	printPacketInformation(data);
    printPacketInformation(ack);
    deletePacket(data);
    deletePacket(ack);
    deletePacket(clone);
    
    return 0;
	
	
}
