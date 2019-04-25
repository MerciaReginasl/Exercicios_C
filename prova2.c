#include <stdio.h>

typedef struct {
    int numero;
    char nome[31];
    int qtd;
    float *valores;
} Conta;

Conta *criaConta(int n, char no[31], int q) {
    Conta *c = (Conta*)malloc(sizeof(Conta));
    if(c == NULL) return NULL;
    c->numero = n;
    c->qtd = q;
    strcpy(c->nome, no);
    c->valores = (float*)malloc(q*sizeof(float));
    return c;
}

void atribuiValor(Conta *c, int i, float v) {
    if(i >= 0 && i < c->qtd && v >= -1000 && v <= 1000) {
        c->valores[i] = v;
    }
}

float maior(Conta *c) {
    float maior = 0;
    int i;
    for(i = 0; i < c->qtd; i++) {
        if(c->valores[i] < 0) {
            if(-c->valores[i] > maior) {
                maior = -c->valores[i];
            }
        }
        else {
            if(c->valores[i] > maior) {
                maior = c->valores[i];
            }
        }
    }
    return maior;
}

void desalocaConta(Conta *c) {
    free(c->valores);
    free(c);
}

int main() {
    Conta *c = criaConta(100, "ruan", 2);
    atribuiValor(c, 0, 100);
    atribuiValor(c, 1, -200);
    printf("%f\n",maior(c));
    desalocaConta(c);
    return 0;
}
