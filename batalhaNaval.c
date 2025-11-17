#include <stdio.h>

#define linha 3
#define coluna 5

void matrizFinal(int tabu[11][11], int obstaculo[linha][coluna], int lin, int colu){
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++)
        {
            tabu[lin + i][colu + j] = obstaculo[i][j];
        }
    }
    
}

int main(){

    int tabuleiro[11][11] = {0};
    int base = 1;
    int cone[linha][coluna] = {0};
    int cruz[linha][coluna] = {0};
    int losango[linha][coluna] = {0};
    int centro = coluna/2;
    
    for (int i = 0; i < linha; i++){
        int inicio = linha - 1 - i;
        int fim    = linha - 1 + i;
        for (int j = inicio; j <= fim; j++){
            cone[i][j] = 3;
        }
    }

    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
                if (i == linha/2)
                {
                    cruz[i][j] = 3;

                } if (j == coluna/2)
                {
                    cruz[i][j] = 3;
                }
        }
    }

    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
                if (i == linha/2 && j < coluna - 2)
                {
                    losango[i][j + 1] = 3;

                } if (j == coluna/2)
                {
                    losango[i][j] = 3;
                }
        }
    }

    matrizFinal(tabuleiro, cone, 1, 1);
    matrizFinal(tabuleiro, cruz, 4, 5);
    matrizFinal(tabuleiro, losango, 6, 1);

    printf(" TABULEIRO BATALHA NAVAL\n");
    printf("   A B C D E F G H I J  \n");

    for (int i = 1; i < 11; i++){
        if (base < 10) {
          printf(" %d ", base);
          base++;
        } else {
          printf("%d ", base);
        }
        for (int j = 1; j < 11; j++){
            tabuleiro[i][j];
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;

}