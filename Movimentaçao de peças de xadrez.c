#include <stdio.h>

void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverTorre(casas - 1);
}

void moverBispo(int linhas, int colunas) {
    if (linhas == 0) return;
    for (int i = 0; i < 1; i++) {
        printf("Cima\n");
        for (int j = 0; j < colunas; j++) {
            printf("Direita\n");
        }
    }
    moverBispo(linhas - 1, colunas);
}

void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverRainha(casas - 1);
}

void moverCavalo(int movimentos) {
    int i, j;
    printf("Movimentos do Cavalo:\n");
    for (i = 1; i <= movimentos; i++) {
        for (j = 1; j <= movimentos; j++) {
            if (i == j) continue;
            if (i + j > movimentos + 1) break;
            printf("Movimento %d: Cima (2 casas) e Direita (1 casa)\n", i);
        }
    }
}

int main() {
    int casasTorre = 3;
    int linhasBispo = 2;
    int colunasBispo = 2;
    int casasRainha = 3;
    int movimentosCavalo = 3;

    printf("=== Movimentos da Torre ===\n");
    moverTorre(casasTorre);
    printf("\n");

    printf("=== Movimentos do Bispo ===\n");
    moverBispo(linhasBispo, colunasBispo);
    printf("\n");

    printf("=== Movimentos da Rainha ===\n");
    moverRainha(casasRainha);
    printf("\n");

    printf("=== Movimentos do Cavalo ===\n");
    moverCavalo(movimentosCavalo);
    printf("\n");

    return 0;
}
