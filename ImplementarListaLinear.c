//Questão 4

//Na complexidade O(N) o tempo cresce linearmente (na mesma proporção) com o tamanho da entrada.

//Na complexidade O(1) o tamanho da entrada não influencia no tempo de execução.


...

//Complexidade O(1)

//Verificar a quantidade de elementos na lista encadeada
//Parâmetros: o ponteiro que representa "a cabeça " da lista (por valor)

int size(lista l){
   int tamanho = 0;
   while(lista != NULL){
   		lista = lista->inicio;
   		tamanho++;
   }
   return tamanho;
}

//A modificação causaria impacto apenas na função size >> Teria um acesso rápido! Verificando os elementos contidos na lista.

