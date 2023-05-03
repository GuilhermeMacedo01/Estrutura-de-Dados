#include <stdio.h>
#include <stdlib.h>

struct pilha{
};
typedef struct pilha Pilha;

Pilha* pilha_cria(void);

void pilha_push(Pilha* p, float n);

float pilha_pop(Pilha* p);

int pilha_vazia(Pilha* p);

void pilha_libera(Pilha* p);
