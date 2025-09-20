
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define LINHAS 10
#define COLUNAS 10


int main(){

    int tabuleiro[LINHAS][COLUNAS]; // tabuleiro do jogo

    int navio[3] = {3, 3, 3}; // tamanho dos navios

    int cone[3][5] = {{0}}; // forma do cone

    int cruz[3][5] = {{0}}; // forma a cruz

    int octaedro[3][5] = {{0}}; // forma do octaedro

    int i, j;



    //ADICIONANDO A CRUZ COM O VALOR 5

    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 5; ++j)
        {
            if (i % 2 != 0)
            {
                cruz[i][j] = 5;
            }
            else
            {
                cruz[i][2] = 5;
            }
        }
    }

    // OCTAEDRO

    //ADICIONANDO O OCTAEDRO COM O VALOR 1

    for (i = 0; i < 3; ++i)
    {
        for (j = 1; j < 4; ++j)
        {
            if (i % 2 == 0)
            {
                octaedro[i][2] = 1;
            }
            else
            {
                octaedro[i][j] = 1;
            }
        }
    }


    //CRIANDO O CONE COM O VALOR 1


    for (i = 0; i < 3; ++i)
    {
        int inicio = 5 / 2 - i;
        int fim = 5 / 2 + i;
        for (j = inicio; j <= fim; ++j)
        {
            cone[i][j] = 1;
        }
    }


    // INICIANDO  O TABULEIRO

    for (i = 0 ; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS ; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }

    // POSICIONANDO O NAVIO 1 NA HORIZONTAL (LINHA 1, CASAS 3 A 5)

    for (j = 0; j < 3; j++)
    {
        tabuleiro[0][3 + j] = navio[j];
    }

    // POSICIONANDO O NAVIO 2 NA VERTICAL (LINHAS 5, 6, 7, CASAS 0)

    for (i = 0; i < 3; i++)
    {
        tabuleiro[i + 4][0] = navio[i];
    }


    // POSICIONANDO UM NAVIO NA DIAGONAL (LINHAS 1, 2, 3)

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            tabuleiro[i][i] = navio[j];
        }
    }

    // POSICIONANDO O SEGUNDO NAVIO NA DIAGONAL (LINHAS 10, 9, 8)

    for (i = 9 ; i > 6; i--)
    {
        for (j = 0; j < 1; j++)
        {
            tabuleiro[i][i] = navio[j];
        }
    }

    // ADICIONANDO A CRUZ

    for (i = 0; i < 3; ++i)
    {
        int linha = 5;
        int coluna = 5;
        for (j = 0; j < 5; ++j)
        {
            tabuleiro[linha + i][coluna + j] = cruz[i][j];
        }
        ++linha;
    }

    // ADICIONANDO O CONE

    for (i = 0; i < 3; ++i)
    {
        int linha = 3;
        int coluna = 1;
        for (j = 0; j < 5; ++j)
        {
            tabuleiro[linha + i][coluna + j] = cone[i][j];
        }
    }

    // ADICIONANDO O OCTAEDRO

    for (i = 0; i < 3; ++i)
    {
        int linha = 7;
        int coluna = 1;

        for (j = 0; j < 5; ++j)
        {
            tabuleiro[linha + i][coluna + j] = octaedro[i][j];
        }
    }

    //MOSTRANDO NA TELA
    for (i = 0; i < 10 ; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}


