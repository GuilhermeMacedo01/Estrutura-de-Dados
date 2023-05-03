#include<stdio.h>
#include<stdlib.h>

struct avr_bi{
    float info;
    struct avr_bi* left;
    struct avr_bi* right;
};
typedef struct avr_bi Avr_bi;

Avr_bi* avr_cria(void){
    return NULL;
}

Avr_bi* avr_insere(float c,Avr_bi* n){
    Avr_bi* p = (Avr_bi*)malloc(sizeof(Avr_bi));
    if(n==NULL){
        p->info = c;
    }
    else if(c<n->info){
        avr_insere(c,p->left);
    }
    else
        avr_insere(c,p->right);

    return p;
}

Avr_bi* avr_libera(Avr_bi* n){

    if(!avr_vazia(n)){ /* Verifica se "n" nao eh vazio*/
        avr_libera(n->left);
        avr_libera(n->right);
        free(n);
    }
    return NULL;
}

int avr_vazia(Avr_bi* n){

    return n == NULL; /* Retorna 1 ou 0 */
}

int avr_pertence(Avr_bi* n,float c){

    if(avr_vazia(n)){ /*verifica se "n" e vazio*/
        return 0; /* �rvore vazia: nao encontrou*/
    }
    else{
        return n->info == c || avr_pertence(n->left,c) || avr_pertence(n->right,c); /* Recursiva da funcao "pertence" para os ramos*/
    }
}

void avr_imprime(Avr_bi* n){
    printf("<");
    if(!avr_vazia(n)){
        printf("%c",n->info); /* Mostra raiz*/
        avr_imprime(n->left); /* Mostra ramo a esquerda*/
        avr_imprime(n->right); /* Mostra ramo a direita*/
    }
    printf(">");
}

int main(){

    Avr_bi *teste = avr_cria();
    avr_insere(5.5,teste);
    avr_insere(6.0,teste);
    avr_insere(7.2,teste);

    avr_imprime(teste);

}

