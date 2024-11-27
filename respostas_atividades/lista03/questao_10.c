#include <stdio.h>
#include <stdlib.h>
#define MAX_LIN 100
#define MAX_COL 100

    int mat3[MAX_LIN][MAX_COL];

    void preencher(int mat1[MAX_LIN][MAX_COL], int mat2[MAX_LIN][MAX_COL], int linhas, int colunas);
    void somar(int mat1[MAX_LIN][MAX_COL], int mat2[MAX_LIN][MAX_COL], int linhas, int colunas);

    int main(){
        int linhas, colunas;
        int mat1[MAX_LIN][MAX_COL], mat2[MAX_LIN][MAX_COL];

        printf ("\n# Quantidade de linhas: ");
        scanf ("%d", &linhas);
        printf ("\n# Quantidade de colunas: ");
        scanf ("%d", &colunas);

        preencher(mat1, mat2, linhas, colunas);
        somar(mat1, mat2, linhas, colunas);


        system ("PAUSE");
        return 0;
    }
    
    void preencher(int mat1[MAX_LIN][MAX_COL], int mat2[MAX_LIN][MAX_COL], int linhas, int colunas){
        printf ("\n# Preencha a matriz 1 #");
        for(int i=0; i<linhas; i++){
            for(int j=0; j<colunas; j++){
                printf ("\nMatriz 1 [%d][%d]: ", i+1, j+1);
                scanf ("%d", &mat1[i][j]);
            }
        }

        printf ("\n# Preencha a matriz 2 #");
        for(int i=0; i<linhas; i++){
            for(int j=0; j<colunas; j++){
                printf ("\nMatriz 2 [%d][%d]: ", i+1, j+1);
                scanf ("%d", &mat2[i][j]);
            }
        }
    }

    void somar(int mat1[MAX_LIN][MAX_COL], int mat2[MAX_LIN][MAX_COL], int linhas, int colunas){
        int auxi;
        for(int i=0; i<linhas; i++){
            auxi = colunas - 1;
            for(int j=0; j<colunas; j++){
                mat3[i][j] = mat1[i][j] + mat2[i][auxi];
                auxi--;
            }
        }

        printf ("\n# Soma das matrizes 1 e 2 na matriz 3 #\n");
        for(int i=0; i<linhas; i++){
            for(int j=0; j<colunas; j++){
              printf (" - %d - ", mat3[i][j]);  
            }
            printf ("\n");
        }
    }
