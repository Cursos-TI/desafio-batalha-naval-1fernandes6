#include <stdio.h>

int main(){

    int tabuleiro[10][10] = {0};
    int linha_nav1 = 2;
    int coluna_inicial_nav1 = 3;
    int coluna_nav2 = 8;
    int linha_inicial_Nav2 = 4;
    int navio1[3] = {3, 3, 3};
    int navio2[3] = {3, 3, 3};
    int base = 1;


   for (int i = 0; i < 3; i++){
    tabuleiro[linha_nav1][coluna_inicial_nav1 + i] = navio1[i];
   }

   for (int j = 0; j < 3; j++){
    tabuleiro[linha_inicial_Nav2 + j][coluna_nav2] = navio2[j];
   }
   
   
    printf(" TABULEIRO BATALHA NAVAL\n");
    printf("   A B C D E F G H I J  \n");

    for (int i = 0; i < 10; i++){
        if (base < 10) {
          printf(" %d ", base);
          base++;
        } else {
          printf("%d ", base);
        }
        for (int j = 0; j < 10; j++){
            tabuleiro[i][j];
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;

}