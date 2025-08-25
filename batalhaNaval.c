#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define LINHAS 10
#define COLUNAS 10


int main(){

    int navio[3] = {3, 3, 3};


    int tabuleiro[LINHAS][COLUNAS];


    // INICIANDO  O TABULEIRO
    for (int i = 0 ; i < LINHAS; i++){
        for (int j = 0; j < COLUNAS ; j++){
            tabuleiro[i][j] = 0;
        }
    }


    // POSICIONANDO O NAVIO 1 NA HORIZONTAL (LINHA 1, CASAS 3 A 5)

    for (int j = 0; j < 3; j++){
        tabuleiro[0][3 + j] = navio[j];
    }

    // POSICIONANDO O NAVIO 2 NA VERTICAL (LINHAS 5, 6, 7, CASAS 0)

    for (int i = 0; i < 3; i++){
        tabuleiro[i + 4][0] = navio[i];
    }


    // POSICIONANDO UM NAVIO NA DIAGONAL (LINHAS 1, 2, 3)

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 1; j++){
                tabuleiro[i][i] = navio[j];

        }
    }

    // POSICIONANDO O SEGUNDO NAVIO NA DIAGONAL (LINHAS 10, 9, 8)

    for (int i = 9 ; i > 6; i--){
        for (int j = 0; j < 1; j++){
            tabuleiro[i][i] = navio[j];
        }
    }


    //MOSTRANDO NA TELA
    for (int i = 0; i < 10 ; i++){
            for (int j = 0; j < 10; j++){
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }

    return 0;
}


