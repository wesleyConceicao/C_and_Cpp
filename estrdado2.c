// QUESTÃO 1 

#include<stdio.h>
#include<stdlib.h>

typedef struct no{
    int valor;
    struct no *proximo;
}No;

// Função pra inserir ordenado
void inserir_ordenado(No **lista, int num){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        //Caso a lista esteja vazia?
        if(*lista == NULL){
            novo->proximo = NULL;
            *lista = novo;
        } // é o menor?
        else if(novo->valor < (*lista)->valor){
            novo->proximo = *lista;
            *lista = novo;
        }
        else{
            aux = *lista;
            while(aux->proximo && novo->valor > aux->proximo->valor)
                aux = aux->proximo;
            novo->proximo = aux->proximo;
            aux->proximo = novo;
        }
    }
    else
        printf("Erro!\n");
}

// função para remover um nó da lista
No* remover(No **lista, int num){
    No *aux, *remover = NULL;

    if(*lista){
        if((*lista)->valor == num){
            remover = *lista;
            *lista = remover->proximo;
        }
        else{
            aux = *lista;
            while(aux->proximo && aux->proximo->valor != num)
                aux = aux->proximo;
            if(aux->proximo){
                remover = aux->proximo;
                aux->proximo = remover->proximo;
            }
        }
    }
    return remover;
}

void imprimir(No *no){
    printf("\n\tLista: ");
    while(no){
        printf("%d ", no->valor);
        no = no->proximo;
    }
    printf("\n\n");
}

int main(){

    int opcao, valor, anterior;
    No *removido, *lista = NULL;
    do{
        printf("\n\t0 - Sair\n\t1 - Inserir_Ordenado\n\t2 - Remover\n\t3 - Imprimir\n");
        scanf("%d", &opcao);
        switch(opcao){
        //Insere os valores no ordenados 
        case 1:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_ordenado(&lista, valor);
            break;
        //Insere valores a serem removidos 
        case 2:
            printf("Digite um valor a ser removido: ");
            scanf("%d", &valor);
            removido = remover(&lista, valor);
            if(removido){
                printf("Elemento a ser removido: %d\n", removido->valor);
                free(removido);
            }
            else
                printf("Elemento Não existe !\n");
            break;
        case 3:
            imprimir(lista);
            break;
        default:
            if(opcao != 0)
                printf("Opcao invalida!\n");
        }

    }while(opcao != 0);

    return 0;
}

// QUESTÃO 2 
