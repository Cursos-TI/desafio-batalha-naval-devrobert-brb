#include <stdio.h>

int main() {
    char tabuleiro[10][10] = { {0}, {0}};
    int navio1 = 3, navio2 = 3, navio3 = 3, navio4 = 3;
    int cone = 1, cruz = 1, octa = 1;
    int posicaoNavio1 = 4, posicaoNavio2 = 7, posicaoNavio3 = 9, posicaoNavio4 = 1;
    int posicaoCone = 4, posicaoCruz = 6, posicaoOcta = 1;

    // Navios
    for (int k=0; k < 3; k++) {
        tabuleiro[posicaoNavio1][k] = navio1;
    }

    for (int l=0; l < 3; l++) {
        tabuleiro[l][posicaoNavio2] = navio2;
    }

    for (int m=0; m < 3; m++) {
        tabuleiro[posicaoNavio3][m] = navio3;
        posicaoNavio3 = posicaoNavio3 - 1;
    }

    for (int n=6; n > 3; n--) {
        tabuleiro[n][posicaoNavio4] = navio4;
        posicaoNavio4 = posicaoNavio4 + 1;
    }

    // Habilidades
    //Cruz
    for (int t = 0; t < 3; t++) {
        for (int u = 2 - 0; u <= 5+ t; u++) {
            if (t == 1) {
                tabuleiro[t][u] = 1;
            }else {
                tabuleiro[t][4] = 1;
            }
        }
    }

    
    //Agua
    for (int i=0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
