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
    No *novo =(No *)malloc(sizeof(No));
    novo->dado = dado;
    novo->proximo = pilha->topo;
    pilha->topo = novo;
}

void imprimir(Pilha *pilha){
    No *atual = pilha->topo;
    while (atual->proximo != NULL){
        printf("%d", atual->dado);
        atual = atual->proximo;
        printf("\n");
    }
    
}

int main(){

    Pilha p1;
    inicializar(&p1);

    empilhar(5, &p1);

    if(estaVazia(&p1)){
        printf("Pilha vazia\n");
    } else {
        printf("Ha elementos na pilha\n");
    }

    return 0;
}