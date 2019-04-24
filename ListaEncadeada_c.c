#include <stdlib.h>
#include <stdio.h>
#include "listaencadeada.h" 
void createlist(lista *l){
    l->inicio=NULL;
}

void add(lista *l,int v){
    no *novo=(no*)malloc(sizeof(no));
    novo->valor=v;
    novo->prox=NULL;
    if(l->inicio==NULL)l->inicio=novo;
    else{
        no *p=l->inicio;
        while(p->prox!=NULL){
            p=p->prox;
        }
        p->prox=novo;
    }
}

void printlist(lista l){
    no *aux=(no*)malloc(sizeof(no));
    aux=l.inicio;
    if(l.inicio==NULL) printf("a lista esta vazia");
    else{
        while(aux!=NULL) {
            printf("%d\n",aux->valor);
            aux=aux->prox;
        }
    }
}

int isEmpty(lista *l){
    if(l->inicio==NULL) return 1;
    else return 0;
}

void removeBack(lista *l){
    no *aux=(no*)malloc(sizeof(no));
    aux=l->inicio;
    while(aux->prox!=NULL){
        if(aux->prox->prox==NULL){
            aux->prox=NULL;
        }
        else aux=aux->prox;
    }
}

int size(lista l){
    no *aux=(no*)malloc(sizeof(no));
    aux=l.inicio;
    int contador=0;
    while(aux!=NULL){
        contador++;
        aux=aux->prox;
    }
    return contador; 
}

int hasElement(lista l, int v){
	for(i=0;i<l.valor;i++){
        if(l.prox[i]==v) return i;
    }
    return -1;
}

int insertPosition(lista *l, int v, int pos){
	if(pos< 0 || pos>l->valor) return -1;
    else{
        if(l->valor==l->valor){
            int *p= (int*) realloc(l->valor,2*l->valor*sizeof(int));
            if(p==NULL){
             printf("não alocou\n");
             return -1;
            }
            else{
                printf("alocou\n");
                l->prox=p;
                l->valor*=2;
            }
        }
        for(int k = l->valor; k > pos; k--) {
            l->valor[k] = l->valor[k-1];
        }
        l->prox[pos]=v;
        l->valor++;
        
    }
    return 0;
	
}

int removePosition(lista *l, int pos){
	if(pos >= l->valor || pos < 0) return -1);
	else{
		int k;
		for(k = pos+1; k < l -> valor; k++){
			l -> valor[k-1] = l -> valor[k];
		}
		l->valor--;
		return 0;
	}
}

int removeElement(lista *l, int v){
	int p;
	no* ant = NULL;
	no* p = l->inicio;
	
	while(p != NULL && p->valor != v){
		ant=p;
		p = p->prox;
	}
	
	if(p != NULL){ //verifica se achou o elemento
		//retira o elemento
		if(ant == NULL){ //retira o elemento do inicio
			l->inicio=p->prox;
		}
		else{
			ant->prox = p->prox; //retira o elemento do meio da lista
		}
		free(p); //libera elemento (nó)
	}
	
}

int get(lista l, int pos, int *vret){
	if(pos >= 0 && pos < l.valor)
    	return l.valor[pos];
    }
    return -1;
}

