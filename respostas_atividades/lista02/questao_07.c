#include <stdio.h>
#include <stdlib.h>

    int main(){
        int matriz[3][3];
        int vetor[3];

        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                printf ("\n- Matriz[%d][%d]: ", i+1, j+1);
                scanf ("%d", &matriz[i][j]);
            }
        }

        printf ("\n");

        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                printf ("%3d", matriz[i][j]);
            }
            printf ("\n");
        }

        printf ("\n# Vetor soma: ");
        for(int j=0; j<3; j++){
            vetor[j] = 0;
            for(int i=0; i<3; i++){
                vetor[j] += matriz[i][j]; 
            }

            printf ("%d ", vetor[j]);
        }

        printf ("\n");

        system ("PAUSE");
        return 0;
    }