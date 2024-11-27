#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#define TAM 10

    void preencher_vet (float vet[TAM]);
    void ordenar_vet (float vet[TAM]);
    float mediana_vet (float vet[TAM]);

    int main(){
        float vet[TAM];
        preencher_vet(vet);
        ordenar_vet (vet);
        float mediana = mediana_vet (vet);
        printf (" \n");
        printf ("# MEDIANA DO VETOR #\n");
        printf ("-- %.2f\n", mediana);


        system ("PAUSE");
        return 0;
    }

    void preencher_vet (float vet[TAM]){
        printf ("# PREENCHA O VETOR #\n");
        for(int i=0; i<TAM; i++){
            printf ("\nVetor[%d]: ", i+1);
            scanf ("%f", &vet[i]);
        }
    }

    void ordenar_vet (float vet[TAM]){
        int i, j, menor_id;
        float menor, vet_ord[TAM];
        printf ("\n");

        for(i=0; i<TAM; i++){
            menor = FLT_MAX;

            for(j=0; j<TAM; j++){
                if(vet[j] < menor){
                    menor = vet[j];
                    menor_id = j;
                }

            }
            vet[menor_id] = FLT_MAX;
            vet_ord[i] = menor; 
        }

        printf ("# VETOR ORDENADO DO MENOR PARA O MAIOR #\n");
        for(i=0; i<TAM; i++){
            vet[i] = vet_ord[i];
            printf ("\nVetor[%d]: %.2f", i+1, vet[i]);
        }
    }

    float mediana_vet (float vet[TAM]){
        float median, m1, m2;
        int med1, med2;

        med1 = (TAM/2) - 1;
        med2 = TAM/2;
      
        m1 = vet[med1];
        m2 = vet[med2];
          
        median = (m1 + m2)/2;

        return median;
    }