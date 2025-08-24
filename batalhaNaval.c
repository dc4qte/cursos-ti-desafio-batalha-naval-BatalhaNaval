#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int navio1[3] = {3, 3, 3};

    int navio2[3] = {3, 3, 3};

    int tabuleiro[10][10];


    // INICIANDO  O TABULEIRO
    for (int i = 0 ; i < 10; i++){
        for (int j = 0; j < 10 ; j++){
            tabuleiro[i][j] = 0;
        }
    }


    // POSICIONANDO O NAVIO 1 NA HORIZONTAL (COLUNA 0, CASAS 3 A 5)

    for (int j = 0; j < 3; j++){
        tabuleiro[0][3 + j] = navio1[j];
    }

    // POSICIONANDO O NAVIO 2 NA VERTICAL (COLUNAS 5, 6, 7, CASAS 0)

    for (int i = 0; i < 3; i++){
        tabuleiro[i + 4][0] = navio2[i];
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


