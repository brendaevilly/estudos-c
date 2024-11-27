#include <stdio.h>
#include <stdlib.h>

    float potenciaN(float base, int exp);

    int main(){
        float b;
        int ep;

        printf ("\n# Base: ");
        scanf ("%f", &b);
        printf ("\n# Expoente: ");
        scanf ("%d", &ep);

        while(ep < 0){
            printf ("\n# [ERROR] Digite um expoente inteiro positivo!");
            printf ("\n# Expoente: ");
            scanf ("%d", &ep);
        }

        float resultado = potenciaN(b, ep);

        printf ("\n# %.1f elevado a %d = %.1f\n", b, ep, resultado);

        system ("PAUSE");
        return 0;
    }

    float potenciaN(float base, int exp){
        float potencia = base;

        if(exp == 0){
            return 1;
        }else{
            for(int i=1; i < exp; i++){
                potencia *= base;
            }
        }

        return potencia;
    }