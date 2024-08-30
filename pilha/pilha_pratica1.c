#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int pilha[TAM];
int posicaoAtual = 0;

void empilhar(int x) {
    if (posicaoAtual >= TAM) {
        printf("Pilha está cheia. %d\n", x);
        return;
    }
    pilha[posicaoAtual] = x;
    posicaoAtual++;
}

int desempilhar() {
    if (posicaoAtual == 0) {
        printf("Pilha vazia.\n");
        return -1;
    }
    return pilha[--posicaoAtual];
}

int isEmpty() {
    return posicaoAtual == 0;
}

int isFull() {
    return posicaoAtual >= TAM;
}

int verTopo() {
    if (posicaoAtual == 0) {
        printf("Não há topo.\n");
        return -1;
    }
    return pilha[posicaoAtual - 1];
}

int main() {
    empilhar(5);
    empilhar(10);
    empilhar(15);

    /*desempilhar(); encrementa e decrementa, ficando sem nada empilhada, sem topo
    desempilhar();
    desempilhar();*/

    printf("Topo da pilha: %d\n", verTopo());

    printf("Desempilhado: %d\n", desempilhar());

    printf("Topo da pilha: %d\n", verTopo());

    if (isEmpty()) {
        printf("A pilha está vazia.\n");
    } else {
        printf("A pilha não está vazia.\n");
    }

    if (isFull()) {
        printf("A pilha está cheia.\n");
    } else {
        printf("A pilha não está cheia.\n");
    }

    return 0;
}
