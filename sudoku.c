#include <stdio.h>
#include <stdlib.h>

int restantes = 81;
int tamanho = 9;

typedef struct Sudoku{
    int numero, linha, coluna;

} Sudoku;

void apresentacao();
int **criarTabuleiro();
int **escolhaDificuldade();
Sudoku ***criarJogo(int **tabuleiro);
void imprimaTabuleiro(Sudoku ***sudoku);
void insiraNumero(Sudoku ***sudoku);
void checarLinhaColuna(Sudoku ***sudoku, int linha, int coluna, int numero);
int checarQuadrante(Sudoku ***sudoku, int linha, int coluna, int numero);

int main () {

    apresentacao();
    int **tabuleiro;
    Sudoku ***sudoku;

    tabuleiro = criarTabuleiro();
    sudoku = criarJogo(tabuleiro);
    imprimaTabuleiro(sudoku);
    insiraNumero(sudoku);

    return 0;
}

void apresentacao() {
    printf("\nSimulador de Sudoku\n\n");
    printf("Objetivo do jogo:\nVoce deve completar o tabuleiro com valores de 1 a 9 sem que eles se repitam na mesma linha, coluna ou quadrante.\n\n");
    printf("Regras:\n - A entrada de linhas e colunas deve ser no formato linha-coluna e apenas valores de 0 a 8.\n - So sao permitidos numeros de 1 a 9.\n - A entrada da dificuldade deve ser F para facil, M para medio ou D para dificil Considera maiusculas.\n - O simulador nao permite que numeros ja inseridos sejam apagados e nao avisara quando nao houver mais solucao. Execute novamente para reiniciar.\n\n");

}

int **escolhaDificuldade(){
    char dificuldade;
    int **tabuleiro;
    int matrizf[9][9] = {
                        {0, 3, 1,    6, 0, 7,    0, 0, 0},
                        {6, 0, 0,    8, 0, 0,    2, 5, 7},
                        {8, 0, 0,    0, 9, 0,    6, 0, 3},

                        {4, 0, 0,    0, 0, 0,    8, 3, 2},
                        {0, 1, 0,    0, 6, 9,    0, 0, 0},
                        {7, 0, 3,    2, 4, 0,    0, 0, 6},

                        {9, 0, 2,    4, 0, 1,    0, 7, 8},
                        {0, 8, 5,    0, 0, 0,    0, 0, 9},
                        {3, 0, 4,    0, 0, 0,    0, 6, 1},
                        };
    int matrizm[9][9] = {
                        {0, 1, 0,    0, 0, 0,    4, 3, 0},
                        {7, 0, 0,    0, 0, 0,    0, 0, 0},
                        {0, 0, 0,    2, 5, 4,    9, 0, 0},

                        {1, 7, 0,    0, 4, 0,    2, 0, 6},
                        {0, 0, 0,    0, 9, 0,    0, 0, 3},
                        {0, 0, 3,    0, 0, 6,    0, 8, 0},

                        {0, 0, 1,    4, 7, 0,    0, 6, 0},
                        {0, 0, 0,    5, 0, 8,    1, 2, 0},
                        {0, 9, 0,    0, 6, 0,    3, 0, 4},
                        };
    int matrizd[9][9] = {
                        {5, 0, 0,    4, 2, 0,    0, 1, 0},
                        {0, 4, 2,    0, 0, 0,    7, 0, 0},
                        {0, 9, 7,    0, 8, 0,    4, 0, 2},

                        {4, 0, 3,    0, 5, 0,    0, 9, 0},
                        {0, 5, 0,    0, 0, 0,    0, 2, 0},
                        {9, 0, 0,    0, 0, 1,    0, 0, 0},

                        {0, 0, 0,    0, 0, 0,    8, 0, 5},
                        {7, 3, 0,    5, 9, 0,    0, 0, 0},
                        {0, 0, 0,    0, 0, 2,    0, 7, 0},
                        };
    int i, j;

    tabuleiro = (int**) malloc (9*sizeof(int*));
    
    for (i=0; i<tamanho; i++){
        tabuleiro[i] = (int*) malloc (9*sizeof(int));
    }

    printf("Digite a letra correspondente a dificuldade escolhida: ");
    scanf(" %c", &dificuldade);
    
    if (dificuldade == 'F'){
        for (i=0; i<tamanho; i++){
            for (j=0; j<tamanho; j++){
                tabuleiro[i][j] = matrizf[i][j];
            }
        }
    } else if (dificuldade == 'M'){
        for (i=0; i<tamanho; i++){
            for (j=0; j<tamanho; j++){
                tabuleiro[i][j] = matrizm[i][j];
            }
        }
    } else if (dificuldade == 'D'){
        for (i=0; i<tamanho; i++){
            for (j=0; j<tamanho; j++){
                tabuleiro[i][j] = matrizd[i][j];
            }
        }
    } else {
        printf("Dificuldade invalida.\n");
        escolhaDificuldade();
    }
    return tabuleiro;
}

int **criarTabuleiro() {
    int **tabuleiro;
    int i, j;
    
    tabuleiro = (int**) malloc (9*sizeof(int*));
    
    for (i=0; i<tamanho; i++){
        tabuleiro[i] = (int*) malloc (9*sizeof(int));
    }

    tabuleiro = escolhaDificuldade();

    for (i=0; i<tamanho; i++){
        for(j=0; j<tamanho; j++){
            if (tabuleiro[i][j] != 0){
                restantes--;
            }
        }
    }

    return tabuleiro;
}

Sudoku ***criarJogo(int **tabuleiro) {
    Sudoku ***sudoku;
    int i, j;

    sudoku = (Sudoku***) malloc (9*sizeof(Sudoku**));

    for (i=0; i<tamanho; i++){
        sudoku[i] = (Sudoku**) malloc (9*sizeof(Sudoku*));
        for (j=0; j<tamanho; j++){
            sudoku[i][j] = (Sudoku*) malloc (9*sizeof(Sudoku));
            sudoku[i][j]->numero = tabuleiro[i][j];
            sudoku[i][j]->linha = i;
            sudoku[i][j]->coluna = j;
        }
    }

    return sudoku;
}
    
void imprimaTabuleiro(Sudoku ***sudoku){
    int i, j;

        printf("-------------------------------\n");
    for (i=0; i<tamanho; i++){
        printf("|");
        for (j=0; j<tamanho; j++){
            printf(" %d ", sudoku[i][j]->numero);
            if (((j+1)%3) == 0){
                printf("|");
            }
        }
        printf("\n");

        if (((i+1)%3) == 0){
            printf("-------------------------------\n");
        }
    }
}

void insiraNumero(Sudoku ***sudoku) {
    int linha, coluna, numero;

    do {
        printf("Digite a linha e a coluna desejada: ");
        scanf("%d-%d", &linha, &coluna);

        if ((linha<0 || linha>8) || (coluna<0 || coluna>8)){
            
            printf("Linha ou coluna invalida.\n");

        } else if (sudoku[linha][coluna]->numero == 0){
            
            printf("Digite o numero: ");
            scanf("%d", &numero);
            
            if (numero<1 || numero>9){
                printf("Numero invalido.\n");
            }
            else {
            checarLinhaColuna(sudoku, linha, coluna, numero);    
            }

        } else {
            printf("Ja existe numero nesse espaco. Insira novamente.\n");
        }
    } while (restantes != 0);
    printf("Parabens! Voce solucionou o Sudoku.\n");
}

void checarLinhaColuna(Sudoku ***sudoku, int linha, int coluna, int numero){
    int i;
    int existe = 0, possivel;

    for (i=0; i<tamanho; i++){
        if ((numero == sudoku[linha][i]->numero) || (numero == sudoku[i][coluna]->numero)){
            existe++;
        }
    }    
    if (existe == 0){
        possivel = checarQuadrante(sudoku, linha, coluna, numero);
        if (possivel == 0) {
            sudoku[linha][coluna]->numero = numero;
            imprimaTabuleiro(sudoku);
            restantes--;
        } else {
            printf("Ja existe esse numero no mesmo quadrante.\n");
        }
    }
    else {
        printf("Ja existe esse numero na mesma linha ou coluna.\n");
    }
}

int checarQuadrante(Sudoku ***sudoku, int linha, int coluna, int numero){
    int i, j;
    int existe = 0;
    int contLinha = linha - (linha % 3);
    int contColuna = coluna - (coluna % 3);

    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            if (numero == sudoku[i+contLinha][j+contColuna]->numero){
                existe++;
            }
        }
    }

    if (existe == 0){
        return existe;
    } else {
        return 1;
    }

}
