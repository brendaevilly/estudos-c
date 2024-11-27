#include <stdio.h>
#include <stdlib.h>

    int main(){
        int tam;

        printf ("\n# Tamanho do vetor: ");
        scanf ("%d", &tam);

        int vetor[tam];

        for(int i=0; i<tam; i++){
            printf ("\n- Vetor[%d]: ", i+1);
            scanf ("%d", &vetor[i]);
        }

        int i, j, cont = 0, n_existem = 0;

        printf ("\n# Elementos unicos do vetor: ");
        for(i=0; i<tam; i++){
            for(j=0; j<tam; j++){
                if(vetor[i] == vetor[j]) cont ++;
            }

            if(cont == 1){
                printf ("%d ", vetor[i]);
                n_existem = 1;
            }

            cont = 0;
        }

        printf ("\n");

        if(n_existem == 0){
            printf ("Nao existe nenhum elemento unico no vetor!\n");
        }

        system ("PAUSE");
        return 0;
    }