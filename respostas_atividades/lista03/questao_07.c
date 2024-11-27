#include <stdio.h>
#include <stdlib.h>

    void preencher(float vet[3]);
    float maiorN(float vet[3]);
    float menorN(float vet[3]);

    int main(){
        float vet[3];

        preencher(vet);

        float maior = maiorN(vet);
        float menor = menorN(vet);
        printf ("O maior eh %.1f\n", maior);
        printf ("O menor eh %.1f\n", menor);


        system ("PAUSE");
        return 0;
    }

    void preencher(float vet[3]){
        for(int i=0; i<3; i++){
            printf ("Digite o %d numero: \n", i+1);
            scanf ("%f", &vet[i]);
        }
    }

    float maiorN(float vet[3]){
        float maior = vet[0];
        for(int i=0; i<3; i++){
            if(vet[i] > maior) maior = vet[i];
        }

        return maior;
    }

    float menorN(float vet[3]){
        float menor = vet[0];
        for(int i=0; i<3; i++){
            if(vet[i] < menor) menor = vet[i];
        }

        return menor;
    }
    