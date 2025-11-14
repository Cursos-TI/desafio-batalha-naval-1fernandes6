#include <stdio.h>

int main(){

    int tabuleiro[11][11] = {0};
    int linha_nav1 = 2, coluna_nav1 = 3;
    int linha_nav2 = 4, coluna_nav2 = 8;
    int linha_nav3 = 6, coluna_nav3 = 1;
    int linha_nav4 = 3, coluna_nav4 = 6;
    int navio[3] = {3, 3, 3};
    int base = 1;

   //HORIZONTAL
   for (int i = 0; i < 3; i++){
    tabuleiro[linha_nav1][coluna_nav1 + i] = navio[i];
   }

   //VERTICAL
   for (int j = 0; j < 3; j++){
    tabuleiro[linha_nav2 + j][coluna_nav2] = navio[j];
   }
   
   //DIAGONAIS
   for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      if (i == j)
      {
       tabuleiro[linha_nav3 + i][coluna_nav3 + j] = navio[i];
       tabuleiro[linha_nav4 + i][coluna_nav4 - j] = navio[i];
      }
    }
   }
   
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