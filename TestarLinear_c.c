#include <stdio.h>
#include "listaencadeada.h"

int main(){
    lista inicio;
    lista testevazio;
    createlist(&testevazio);
    createlist(&inicio);
    add(&inicio,10);
    add(&inicio,20);
    add(&inicio,45);
    add(&inicio,95);
    printlist(inicio);
    printf("estou testando %d\n",inicio.inicio->prox->prox->prox->valor);
    printf("%d\n",isEmpty(&inicio));
    printf("%d\n",isEmpty(&testevazio));
    removeBack(&inicio);
    add(&inicio,11);
    removeBack(&inicio);
    printlist(inicio);
    add(&inicio,78);
    printf("%d",size(inicio));
    hasElement(l, 23);
    printf("o elemento %d\n", 23);
	insertPosition(l, 25, 2);
	printf(*l);
	removePosition(l, 3);
	printLista(*l);
	removeElement(&inicio,15);
	printLista(inicio);
	get(list l, int pos, int *vret);
	printf("Elemento pos %d = %d\n", 6, get(*l,6));
	
    return 0;
}
