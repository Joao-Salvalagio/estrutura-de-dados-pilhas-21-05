#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct No{
    int dado;
    struct No *proximo;
} No;

typedef struct Pilha{
    No *topo;
} Pilha;

void inicializar(Pilha *pilha){
    pilha->topo = NULL;
}

bool estaVazia(Pilha *pilha){
    return pilha->topo == NULL;
}

void empilhar(int dado, Pilha *pilha){
    No *no = (No *) malloc(sizeof(No));
    novo->dado = dado;
    novo->proximo = pilha->topo;
    pilha->topo = novo;
}

int main(){

    Pilha p1;
    inicializar(&p1);

    if(estaVazia(&p1)){
        printf("Pilha vazia\n");
    } else {
        printf("Ha elementos na pilha\n");
    }

    return 0;
}