#include <stdio.h>
#include <stdlib.h>

    int main(){
        int tam, imp = 0, par = 0;

        printf ("\n# Tamanho do vetor: ");
        scanf ("%d", &tam);

        int vetor[tam];

        for(int i=0; i<tam; i++){
            printf ("\n- Vetor[%d]: ", i+1);
            scanf ("%d", &vetor[i]);

            if(vetor[i] % 2 == 0) par++;
            else imp++;
        }

        printf ("\n# Quantidade de numeros impares inseridos: %d", imp);
        printf ("\n# Quantidade de numeros pares inseridos: %d\n", par);

        system ("PAUSE");
        return 0;
    }