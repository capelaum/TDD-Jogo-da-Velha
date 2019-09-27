// Copyright 2019 Luis Vinicius Capelletto
#include "../include/velha.h"

int Verifica_Velha(int Velha[][3], int linhas) {
    int i = 0, j = 0;

    // conta os valores 1 das linhas e colunas da matriz
    int conta_x = 0;

    // verifica linhas
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (Velha[i][j] == 1) {
                conta_x++;
            }
        }

        // se na linha tiverem tres x
        if (conta_x == 3) {
            // cout << "X venceu!" << endl;
            return 1;
        }

        // apos verificar uma linha, zera contador
        conta_x = 0;
    }

    // verifica colunas
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (Velha[j][i] == 1) {
                conta_x++;
            }
        }

        // se na coluna tiverem tres x
        if (conta_x == 3) {
            // cout << "X venceu!" << endl;
            return 1;
        }

        // apos verificar uma coluna, zera contador
        conta_x = 0;
    }

    // conta os valores 1 das diagonais da matriz
    int conta_diagonal_x = 0;

    // verifica diagonais
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == j) {
                if (Velha[i][j] == 1) {
                    conta_diagonal_x++;
                }
            }
        }
    }

    // se na diagonal 1 tiverem tres x
    if (conta_diagonal_x == 3) {
        // cout << "X venceu!" << endl;
        return 1;
    }

    // apos verificar diagonal 1, zera contador
    conta_diagonal_x = 0;

    return -1;
}
