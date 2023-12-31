#include <stdio.h>
#include <stdlib.h>

//Pilha - Metodo pop

typedef struct{
    int dia, mes, ano;
}Data;

typedef struct{
    char nome[50];
    Data data;
}Pessoa;

typedef struct no{
    Pessoa p;
    struct no *proximo;
}No;

Pessoa ler_pessoa(){
    Pessoa p;

    printf("\nDigite nome e data de nascimento dd mm aaaa:\n");
    scanf("%49[^\n]%d%d%d", p.nome, &p.data.dia, &p.data.mes, &p.data.ano);
    return p;
}

void imprimir_pessoa(Pessoa p){
    printf("\nNome: %a\nData: %2d/%d/%4d\n", p.nome, p.data.dia, p.data.mes, p.data.ano);
}

//Função push(empilhar)

No* push(No *topo){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->p = ler_pessoa();
        novo->proximo = topo;
        return novo;
    }else
        printf("\nErro ao alocar memória...\n");
        return NULL;
}

No* pop(No **topo){
    if(*topo != NULL){
        No *remover = *topo;
        *topo = remover->proximo;
        return remover;
    }else
        printf("\nPilha vazia!\n");
    return NULL;
}

int main(){
    No *remover, *topo = NULL;
    int opcao;

    do{
        printf("\n0 - Sair\n1 - Empilhar\n2 - Desempilhar\n3 - Imprimir\n");
        scanf("%d", &opcao);
        getchar();

        switch (opcao){
            case 1:
                topo = empilhar(topo);
                break;
            case 2:
                remover = pop(&topo);
                if(remover){
                    printf("\nElemento removido com sucesso\n");
                    imprimir_pessoa(remover->p);
                }else
                    printf("\nSem nó a remover!\n");
                break;
            case 3:
                break;
            default:
                if(opcao !=0)
                    prinf("\nOpcao invalida!!!\n");
        }
    }while(opcao !=0);
}