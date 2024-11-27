#include <stdio.h>
#include <stdlib.h>

    int main(){
        int matriz[5][5];
        int ind_l = 0, ind_c = 0;

        int maior = 0;

        for(int i=0; i<5; i++){
            for(int j=0; j<5; j++){
                printf ("\n- Matriz[%d][%d]: ", i, j);
                scanf ("%d", &matriz[i][j]);

                if(i == 0 && j == 0){
                    maior = matriz[i][j];
                }

                if(matriz[i][j] > maior){
                    maior = matriz[i][j];
                    ind_l = i;
                    ind_c = j;
                }
            }
        }

        int cont = 0;
        for(int i=0; i<5; i++){
            for(int j=0; j<5; j++){
                if(maior == matriz[i][j]) cont ++;
            }
        }

        if(cont > 1){
            printf ("\n# O maior valor da matriz eh %d, localizado na linha %d e coluna %d, porem existem mais %d\nvalores iguais na matriz, os quais tambem sao os maiores.\n", maior, ind_l, ind_c, cont-1);
        }else{
            printf ("\n# O maior valor da matriz eh %d, localizado na linha %d e coluna %d.\n", maior, ind_l, ind_c); 
        }

        system ("PAUSE");
        return 0;
    }