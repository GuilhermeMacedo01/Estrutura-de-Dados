#include <stdio.h>
#include <stdlib.h>

struct elemento{
    int info;
    struct elemento* prox;
};
typedef struct elemento Elemento;

struct pilha{
    Elemento* prim;
};
typedef struct pilha Pilha;

Pilha* pilha_cria(void){
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->prim=NULL;
    return p;
}
int pilha_vazia(Pilha* p){
    if(p->prim==NULL)
        return 1;
    return 0;
}

void pilha_push(Pilha* p, float n){
    Elemento* v = (Elemento*)malloc(sizeof(Elemento));
    v->info = n;
    v->prox = p->prim;
    p->prim = v;
}

float pilha_pop(Pilha* p){
    Elemento* x;
    float v;
    if(pilha_vazia(p))
        exit (1);
    x=p->prim;
    v=x->info;
    p->prim = x->prox;
    free(x);
    return v;
}

void pilha_libera(Pilha* p){
    Elemento *t, *q = p->prim;
    while (q!=NULL){
        t = q->prox;
        free(q);
        q = t;
    }
    free(q);
}
void pilha_imprime(Pilha* p){
        Elemento *q = p->prim;
    while (q!=NULL){
        printf("%d\n",q->info);
        q=q->prox;
    }
    printf("\n\n");
}
Pilha* pilha_fila(Pilha* a,Pilha* b){

    Elemento *q = a->prim;
    while(q!=NULL){
        pilha_push(b,q->info);
        q=q->prox;
    }
    return b;

}


