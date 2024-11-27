#include <stdio.h>
#include <stdlib.h>

    int main(){
        int vetor[10];

        for(int i=0; i<10; i++){
            printf ("\n# Vetor[%d]: ", i+1);
            scanf ("%d", &vetor[i]);
        }

        printf ("\n%-15s %-15s %s\n", "ELEMENTO", "VALOR", "HISTOGRAMA");

        int cont = 0;
        for(int i=0; i<10; i++){
            printf ("%-15d %-15d", i, vetor[i]);

            while(cont < vetor[i]){
                printf ("*");
                cont ++;
            }
            
            printf ("\n");
            cont = 0;
        }

        system ("PAUSE");
        return 0;
    }