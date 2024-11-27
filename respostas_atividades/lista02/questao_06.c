#include <stdio.h>
#include <stdlib.h>

    int main(){
        int lin, col, i, j;

        printf ("\n# Quantidade de linhas da matriz: ");
        scanf ("%d", &lin);
        printf ("\n# Quantidade de colunas da matriz: ");
        scanf ("%d", &col);

        while(lin < 1 || col < 1){
            printf ("\n== [ERROR] Digite valores maiores que zero!");
            printf ("\n# Quantidade de linhas da matriz: ");
            scanf ("%d", &lin);
            printf ("\n# Quantidade de colunas da matriz: ");
            scanf ("%d", &col);
        }

        int matriz[lin][col];
        int ind, num;
        printf ("\n# Digite um indice de uma linha de 0 a %d: ", lin-1);
        scanf ("%d", &ind);

        while(ind < 0 || ind > (lin - 1)){
            printf ("\n== [ERROR] Digite um indice de uma linha de 0 a %d: ", lin-1);
            scanf ("%d", &ind);
        }

        printf ("\n# Digite um valor constante: ");
        scanf ("%d", &num);

        for(i=0; i<lin; i++){
            for(j=0; j<col; j++){
                printf ("\n- Matriz[%d][%d]: ", i+1, j+1);
                scanf ("%d", &matriz[i][j]);
            }

            if(i == ind){
                for(j=0; j<col; j++){
                matriz[ind][j] *= num;
            }
            }
        }

        printf ("\n");

        for(i=0; i<lin; i++){
            for(j=0; j<col; j++){
                printf ("%3d", matriz[i][j]);
            }
            printf ("\n");
        }   

        system ("PAUSE");
        return 0;
    }