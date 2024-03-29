// Copyright 2019 Luis Vinicius Capelletto
#include "../include/velha.h"

// testa se vencedor foi X na linha 0
TEST(Jogo_da_Velha, Vencedor_X_linha_0) {
    int Velha[3][3];
    int i = 0, j = 0;

    // zera matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Velha[i][j] = 0;
        }
    }

    // completa linha 0 com 1
    for (j = 0; j < 3; j++) {
        Velha[0][j] = 1;
    }

    // testa função com linha 0 preenchida com 1
    ASSERT_EQ(1, Verifica_Velha(Velha, 3));

    // muda linha 0
    Velha[0][1] = 2;

    // caso em que X nao deve vencer
    ASSERT_NE(1, Verifica_Velha(Velha, 3));
}

// testa se vencedor foi X na linha 1
TEST(Jogo_da_Velha, Vencedor_X_linha_1) {
    int Velha[3][3];
    int i = 0, j = 0;

    // zera matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Velha[i][j] = 0;
        }
    }

    // completa linha 1 com 1
    for (j = 0; j < 3; j++) {
        Velha[1][j] = 1;
    }

    // testa função com linha 1 preenchida com 1
    ASSERT_EQ(1, Verifica_Velha(Velha, 3));

    // muda linha 1
    Velha[1][1] = 2;

    // caso em que X nao deve vencer
    ASSERT_NE(1, Verifica_Velha(Velha, 3));
}

// testa se vencedor foi X na linha 2
TEST(Jogo_da_Velha, Vencedor_X_linha_2) {
    int Velha[3][3];
    int i = 0, j = 0;

    // zera matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Velha[i][j] = 0;
        }
    }

    // completa linha 2 com 1
    for (j = 0; j < 3; j++) {
        Velha[2][j] = 1;
    }

    // testa função com linha 2 preenchida com 1
    ASSERT_EQ(1, Verifica_Velha(Velha, 3));

    // muda linha 2
    Velha[2][1] = 2;

    // caso em que X nao deve vencer
    ASSERT_NE(1, Verifica_Velha(Velha, 3));
}

// testa se vencedor foi X na coluna 0
TEST(Jogo_da_Velha, Vencedor_X_coluna_0) {
    int Velha[3][3];
    int i = 0, j = 0;

    // zera matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Velha[i][j] = 0;
        }
    }

    // completa coluna 0 com 1
    for (j = 0; j < 3; j++) {
        Velha[j][0] = 1;
    }

    // testa função com coluna 0 preenchida com 1
    ASSERT_EQ(1, Verifica_Velha(Velha, 3));

    // muda coluna 0
    Velha[2][0] = 2;

    // caso em que X nao deve vencer
    ASSERT_NE(1, Verifica_Velha(Velha, 3));
}

// testa se vencedor foi X na coluna 1
TEST(Jogo_da_Velha, Vencedor_X_coluna_1) {
    int Velha[3][3];
    int i = 0, j = 0;

    // zera matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Velha[i][j] = 0;
        }
    }

    // completa coluna 1 com 1
    for (j = 0; j < 3; j++) {
        Velha[j][1] = 1;
    }

    // testa função com coluna 1 preenchida com 1
    ASSERT_EQ(1, Verifica_Velha(Velha, 3));

    // muda coluna 1
    Velha[2][1] = 2;

    // caso em que X nao deve vencer
    ASSERT_NE(1, Verifica_Velha(Velha, 3));
}

// testa se vencedor foi X na coluna 2
TEST(Jogo_da_Velha, Vencedor_X_coluna_2) {
    int Velha[3][3];
    int i = 0, j = 0;

    // zera matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Velha[i][j] = 0;
        }
    }

    // completa coluna 2 com 1
    for (j = 0; j < 3; j++) {
        Velha[j][2] = 1;
    }

    // testa função com coluna 2 preenchida com 1
    ASSERT_EQ(1, Verifica_Velha(Velha, 3));

    // muda coluna 2
    Velha[2][2] = 2;

    // caso em que X nao deve vencer
    ASSERT_NE(1, Verifica_Velha(Velha, 3));
}

// testa se vencedor foi X na diagonal 1
TEST(Jogo_da_Velha, Vencedor_X_diagonal_1) {
    int Velha[3][3];
    int i = 0, j = 0;

    // zera matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Velha[i][j] = 0;
        }
    }

    // completa diagonal com valor 1
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == j) {
                Velha[i][j] = 1;
            }
        }
    }

    // testa função com diagonal 1 preenchida com 1
    ASSERT_EQ(1, Verifica_Velha(Velha, 3));

    // muda diagonal 1
    Velha[0][0] = 2;

    // caso em que X nao deve vencer
    ASSERT_NE(1, Verifica_Velha(Velha, 3));
}

// testa se vencedor foi X na diagonal 2
TEST(Jogo_da_Velha, Vencedor_X_diagonal_2) {
    int Velha[3][3];
    int i = 0, j = 0;

    // zera matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Velha[i][j] = 0;
        }
    }

    // completa diagonal 2 com valor 1
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == 0 && j == 2) {
                Velha[i][j] = 1;
            }
            if (i == 1 && j == 1) {
                Velha[i][j] = 1;
            }
            if (i == 2 && j == 0) {
                Velha[i][j] = 1;
            }
        }
    }

    // testa função com diagonal 2 preenchida com 1
    ASSERT_EQ(1, Verifica_Velha(Velha, 3));

    // muda diagonal 2
    Velha[0][2] = 2;

    // caso em que X nao deve vencer
    ASSERT_NE(1, Verifica_Velha(Velha, 3));
}

// testa se vencedor foi O na linha 0
TEST(Jogo_da_Velha, Vencedor_O_linha_0) {
    int Velha[3][3];
    int i = 0, j = 0;

    // zera matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Velha[i][j] = 0;
        }
    }

    // completa linha 0 com 2
    for (j = 0; j < 3; j++) {
        Velha[0][j] = 2;
    }

    // testa função com linha 0 preenchida com 2
    ASSERT_EQ(2, Verifica_Velha(Velha, 3));

    // muda linha 0
    Velha[0][1] = 1;

    // caso em que O nao deve vencer
    ASSERT_NE(2, Verifica_Velha(Velha, 3));
}

// testa se vencedor foi O na linha 1
TEST(Jogo_da_Velha, Vencedor_O_linha_1) {
    int Velha[3][3];
    int i = 0, j = 0;

    // zera matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Velha[i][j] = 0;
        }
    }

    // completa linha 1 com 2
    for (j = 0; j < 3; j++) {
        Velha[1][j] = 2;
    }

    // testa função com linha 1 preenchida com 2
    ASSERT_EQ(2, Verifica_Velha(Velha, 3));

    // muda linha 1
    Velha[1][0] = 1;

    // caso em que O nao deve vencer
    ASSERT_NE(2, Verifica_Velha(Velha, 3));
}

// testa se vencedor foi O na linha 2
TEST(Jogo_da_Velha, Vencedor_O_linha_2) {
    int Velha[3][3];
    int i = 0, j = 0;

    // zera matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Velha[i][j] = 0;
        }
    }

    // completa linha 2 com 2
    for (j = 0; j < 3; j++) {
        Velha[2][j] = 2;
    }

    // testa função com linha 2 preenchida com 2
    ASSERT_EQ(2, Verifica_Velha(Velha, 3));

    // muda linha 2
    Velha[2][0] = 1;

    // caso em que O nao deve vencer
    ASSERT_NE(2, Verifica_Velha(Velha, 3));
}

// testa se vencedor foi O na coluna 0
TEST(Jogo_da_Velha, Vencedor_O_coluna_0) {
    int Velha[3][3];
    int i = 0, j = 0;

    // zera matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Velha[i][j] = 0;
        }
    }

    // completa coluna 0 com 2
    for (j = 0; j < 3; j++) {
        Velha[j][0] = 2;
    }

    // testa função com coluna 0 preenchida com 1
    ASSERT_EQ(2, Verifica_Velha(Velha, 3));

    // muda coluna 0
    Velha[2][0] = 1;

    // caso em que X nao deve vencer
    ASSERT_NE(2, Verifica_Velha(Velha, 3));
}

// testa se vencedor foi O na coluna 1
TEST(Jogo_da_Velha, Vencedor_O_coluna_1) {
    int Velha[3][3];
    int i = 0, j = 0;

    // zera matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Velha[i][j] = 0;
        }
    }

    // completa coluna 1 com 2
    for (j = 0; j < 3; j++) {
        Velha[j][1] = 2;
    }

    // testa função com coluna 1 preenchida com 2
    ASSERT_EQ(2, Verifica_Velha(Velha, 3));

    // muda coluna 1
    Velha[2][1] = 1;

    // caso em que O nao deve vencer
    ASSERT_NE(2, Verifica_Velha(Velha, 3));
}

// testa se vencedor foi O na coluna 2
TEST(Jogo_da_Velha, Vencedor_O_coluna_2) {
    int Velha[3][3];
    int i = 0, j = 0;

    // zera matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Velha[i][j] = 0;
        }
    }

    // completa coluna 2 com 2
    for (j = 0; j < 3; j++) {
        Velha[j][2] = 2;
    }

    // testa função com coluna 2 preenchida com 2
    ASSERT_EQ(2, Verifica_Velha(Velha, 3));

    // muda coluna 2
    Velha[2][2] = 1;

    // caso em que O nao deve vencer
    ASSERT_NE(2, Verifica_Velha(Velha, 3));
}

// testa se vencedor foi O na diagonal 1
TEST(Jogo_da_Velha, Vencedor_O_diagonal_1) {
    int Velha[3][3];
    int i = 0, j = 0;

    // zera matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Velha[i][j] = 0;
        }
    }

    // completa diagonal com valor 2
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == j) {
                Velha[i][j] = 2;
            }
        }
    }

    // testa função com diagonal 1 preenchida com 2
    ASSERT_EQ(2, Verifica_Velha(Velha, 3));

    // muda diagonal 1
    Velha[0][0] = 1;

    // caso em que O nao deve vencer
    ASSERT_NE(2, Verifica_Velha(Velha, 3));
}

// testa se vencedor foi O na diagonal 2
TEST(Jogo_da_Velha, Vencedor_O_diagonal_2) {
    int Velha[3][3];
    int i = 0, j = 0;

    // zera matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Velha[i][j] = 0;
        }
    }

    // completa diagonal 2 com valor 2
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == 0 && j == 2) {
                Velha[i][j] = 2;
            }
            if (i == 1 && j == 1) {
                Velha[i][j] = 2;
            }
            if (i == 2 && j == 0) {
                Velha[i][j] = 2;
            }
        }
    }

    // testa função com diagonal 2 preenchida com 2
    ASSERT_EQ(2, Verifica_Velha(Velha, 3));

    // muda diagonal 2
    Velha[0][2] = 1;

    // caso em que O nao deve vencer
    ASSERT_NE(1, Verifica_Velha(Velha, 3));
}

// testa se jogo terminou empatado com 2 linhas completas com X ou O
TEST(Jogo_da_Velha, Empatado_linha) {
    int Velha[3][3];
    int i = 0, j = 0;

    // zera matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Velha[i][j] = 0;
        }
    }

    // completa linha 0 com 1
    for (j = 0; j < 3; j++) {
        Velha[0][j] = 1;
    }

    // completa linha 1 com 2
    for (j = 0; j < 3; j++) {
        Velha[1][j] = 2;
    }

    // testa função com 2 linhas preenchidas com X e O - possivel empate
    ASSERT_EQ(0, Verifica_Velha(Velha, 3));

    // muda linha 0
    Velha[0][2] = 0;

    // caso em que nao deve empatar - O vence
    ASSERT_NE(0, Verifica_Velha(Velha, 3));
    ASSERT_EQ(2, Verifica_Velha(Velha, 3));

    // muda linha 0 para estado inicial
    Velha[0][2] = 1;

    // muda linha 1
    Velha[1][2] = 0;

    // caso em que nao deve empatar - X vence
    ASSERT_NE(0, Verifica_Velha(Velha, 3));
    ASSERT_EQ(1, Verifica_Velha(Velha, 3));
}

// testa se jogo terminou empatado com 2 colunas completas com X ou O
TEST(Jogo_da_Velha, Empatado_coluna) {
    int Velha[3][3];
    int i = 0, j = 0;

    // zera matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Velha[i][j] = 0;
        }
    }

    // completa coluna 0 com 1
    for (j = 0; j < 3; j++) {
        Velha[j][0] = 1;
    }

    // completa coluna 1 com 2
    for (j = 0; j < 3; j++) {
        Velha[j][1] = 2;
    }

    // testa função com 2 colunas preenchidas com X e O - possivel empate
    ASSERT_EQ(0, Verifica_Velha(Velha, 3));

    // muda coluna 0
    Velha[0][0] = 0;

    // caso em que nao deve empatar - O vence
    ASSERT_NE(0, Verifica_Velha(Velha, 3));
    ASSERT_EQ(2, Verifica_Velha(Velha, 3));

    // muda coluna 0 para estado inicial
    Velha[0][0] = 1;

    // muda coluna 1
    Velha[1][1] = 0;

    // caso em que nao deve empatar - X vence
    ASSERT_NE(0, Verifica_Velha(Velha, 3));
    ASSERT_EQ(1, Verifica_Velha(Velha, 3));
}

// testa se jogo terminou indefinido
TEST(Jogo_da_Velha, Indefinido) {
    int Velha[3][3];
    int i = 0, j = 0;

    // zera matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Velha[i][j] = 0;
        }
    }

    ASSERT_EQ(-1, Verifica_Velha(Velha, 3));

    // modifica alguns valores
    Velha[0][0] = 1;
    Velha[0][0] = 2;

    // testa novamente se esta indefinido ainda
    ASSERT_EQ(-1, Verifica_Velha(Velha, 3));

    // completa coluna 1 com 2
    for (j = 0; j < 3; j++) {
        Velha[j][1] = 2;
    }

    // caso em que jogo nao esta indefinido
    ASSERT_NE(-1, Verifica_Velha(Velha, 3));
}

// testa se jogo eh impossivel segundo as regras
TEST(Jogo_da_Velha, Impossivel) {
    int Velha[3][3];
    int i = 0, j = 0;

    // zera matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            Velha[i][j] = 0;
        }
    }

    // completa linha 0 com 1
    for (j = 0; j < 3; j++) {
        Velha[0][j] = 1;
    }

    // completa linha 1 e 2 com 2
    for (j = 0; j < 3; j++) {
        Velha[1][j] = 2;
        Velha[2][j] = 2;
    }

    // caso do jogo ser com certeza impossivel
    ASSERT_EQ(-2, Verifica_Velha(Velha, 3));

    // modifica uma linha, agora jogo eh possivel
    Velha[2][2] = 1;

    // testa caso nao seja impossivel
    ASSERT_NE(-2, Verifica_Velha(Velha, 3));

    // jogo entao esta empatado
    ASSERT_EQ(0, Verifica_Velha(Velha, 3));

    // modifica linha 1
    Velha[1][0] = 1;

    // entao X venceu
    ASSERT_EQ(1, Verifica_Velha(Velha, 3));

    // modifica linha 0
    Velha[0][0] = 2;

    // jogo entao esta indefinido
    ASSERT_EQ(-1, Verifica_Velha(Velha, 3));
}

int main(int argc, char** argv) {
    // Inicializa os testes
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

    return 0;
}
