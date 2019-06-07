#include <stdio.h>


int busca(int *v, int i, int f, int p, int qtp) {

    int soma = 0, k, vm, r=-1, m;


    while(i<=f) {

        soma = 0;
        m= (i + f)/2;

        for (k = 0; k < qtp; k = k + 1) {
            vm = v[k] / m;
            soma = soma + vm;
        }

        if(soma>=p) {
            r = m;
            i = m + 1;
        }

        else if(soma<p) {
            f = m - 1;
        }
    }
    return r;
}

int main(){
    int p, qtd;
    scanf("%i", &p);
    scanf("%i", &qtd);
    
    int vet[qtd];
    int i;
    int j;
    int maior=0;
    
    for(i=0; i<qtd; i=i+1){
        scanf("%i", &vet[i]);
    }
    
    for(j=0; j<qtd; j=j+1){
        if(vet[j]>maior){
            maior=vet[j];
        }
    }
    
    int x;
    x=busca(vet, 0, maior, p, qtd);
    printf("%i\n", x);
    
    return 0;
    
}
