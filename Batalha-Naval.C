#include <stdio.h>

#define TAM 10
#define TAM_NAVIO 3
#define TAM_HAB 5

void exibirTabuleiro(int tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

void aplicarHabilidade(int tabuleiro[TAM][TAM], int hab[TAM_HAB][TAM_HAB], int origem_linha, int origem_coluna) {
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            int linha = origem_linha - TAM_HAB / 2 + i;
            int coluna = origem_coluna - TAM_HAB / 2 + j;
            if (linha >= 0 && linha < TAM && coluna >= 0 && coluna < TAM && hab[i][j] == 1) {
                if (tabuleiro[linha][coluna] == 0)
                    tabuleiro[linha][coluna] = 5;
            }
        }
    }
}

int main() {
    int tabuleiro[TAM][TAM] = {0};

    int navios[4][2] = {
        {1, 1},
        {3, 5},
        {0, 0},
        {0, 9}
    };

    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[navios[0][0] + i][navios[0][1]] = 3;
        tabuleiro[navios[1][0]][navios[1][1] + i] = 3;
    }

    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[navios[2][0] + i][navios[2][1] + i] = 3;
        tabuleiro[navios[3][0] + i][navios[3][1] - i] = 3;
    }

    int cone[TAM_HAB][TAM_HAB] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    int cruz[TAM_HAB][TAM_HAB] = {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}
    };

    int octaedro[TAM_HAB][TAM_HAB] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    aplicarHabilidade(tabuleiro, cone, 2, 2);
    aplicarHabilidade(tabuleiro, cruz, 5, 5);
    aplicarHabilidade(tabuleiro, octaedro, 7, 7);

    exibirTabuleiro(tabuleiro);

    return 0;
}
