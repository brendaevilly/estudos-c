#include <stdio.h>
#include <stdlib.h>

    void somar_matriz(int matriz[3][3]);

    int soma;

    int main(){
        int matriz[3][3];

        somar_matriz(matriz);

        system ("PAUSE");
        return 0;
    }

    void somar_matriz(int matriz[3][3]){
        soma = 0;

        printf ("# PREENCHA A MATRIZ #\n");

        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                printf ("\nMatriz[%d][%d]: ", i+1, j+1);
                scanf ("%d", &matriz[i][j]);
                soma += matriz[i][j];
            }
        }

        printf ("\n# SOMA DOS ELEMENTOS DA MATRIZ: %d\n", soma);
    }