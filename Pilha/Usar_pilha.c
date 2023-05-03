#include <stdio.h>
#include "pilha.h"

int main(){

    Pilha* fila;
    fila = pilha_cria();

    Pilha* novo;
    novo = pilha_cria();

    pilha_push(fila,5);
    pilha_push(fila,6);
    pilha_push(fila,8);
    pilha_push(fila,9);


    pilha_pop(fila);
    pilha_imprime(fila);


    pilha_fila(fila,novo);


    pilha_imprime(novo);

    pilha_pop(fila);
    pilha_pop(novo);

    pilha_imprime(fila);
    pilha_imprime(novo);

    pilha_libera(fila);
    pilha_libera(novo);

    return 0;
}

