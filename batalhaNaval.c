#include <stdio.h>

int main() {
    char tabuleiro[10][10] = { {0}, {0}};
    char navio1[3] = {3};
    char navio2[3] = {3};
    int posicaoNavio1 = 4;
    int posicaoNavio2 = 6;

    for (int i=0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (j % 10 == 0) {
                printf("\n");
            }

            for (int k=0; k < 3; k++) {
                tabuleiro[posicaoNavio1][k] = navio1[0];
            }

            for (int l=0; l < 3; l++) {
                tabuleiro[l][posicaoNavio2] = navio2[0];
            }

            printf("%d ", tabuleiro[i][j]);
        }
    }

    return 0;
}
