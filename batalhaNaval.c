#include <stdio.h>

#define TAMANHO_TABULEIRO 10

// Função para posicionar navios
void posicionarNavios(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    // Posicionar navio vertical (5 posições)
    for (int i = 0; i < 5; i++) {
        tabuleiro[i][2] = 1;  // Coluna fixa em 2, linha variando
    }

    // Posicionar navio horizontal (3 posições)
    for (int i = 0; i < 3; i++) {
        tabuleiro[5][i] = 1;  // Linha fixa em 5, coluna variando
    }
}

// Função para exibir o tabuleiro
void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    printf("\nTabuleiro:\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            if (tabuleiro[i][j] == 1) {
                printf(" X ");
            } else {
                printf(" . ");
            }
        }
        printf("\n");
    }
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    // Posiciona os navios
    posicionarNavios(tabuleiro);

    // Exibe o tabuleiro
    exibirTabuleiro(tabuleiro);

    return 0;
}
