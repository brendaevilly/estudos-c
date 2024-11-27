#include <stdio.h>
#include <stdlib.h>

    int main(){
        int matriz[4][4];

        for(int i=0; i<4; i++){
            for(int j=0; j<4; j++){
                printf ("\n- Matriz[%d][%d]: ", i+1, j+1);
                scanf ("%d", &matriz[i][j]);
            }
        }

        printf ("\n");

        for(int i=0; i<4; i++){
            for(int j=0; j<4; j++){
                if(j >= i){
                    printf ("%3d\t", matriz[i][j]);
                }else{
                    printf ("\t");
                }
            }

            printf ("\n");
        }        

        system ("PAUSE");
        return 0;
    }