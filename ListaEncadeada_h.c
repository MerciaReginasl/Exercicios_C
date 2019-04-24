 typedef struct no{
    int valor;
    int ant;
    struct no *prox;
} no;

typedef struct{
    no *inicio;
}lista;

void createlist(lista*l);
void add(lista *l,int v);
void printlist(lista l);
int isEmpty(lista *l);
void removeBack(lista *l);
int size(lista l);
int hasElement(lista l, int v);
int insertPosition(lista *l, int v, int pos);
int removePosition(lista *l, int pos);
int removeElement(lista *l, int v);
int get(lista l, int pos, int *vret);
