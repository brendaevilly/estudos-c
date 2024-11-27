#include <stdio.h>
#include <stdlib.h>

    float mediaN(float num1, float num2);

    int main(){
        float n1, n2;

        printf ("\nPrimeiro numero: ");
        scanf ("%f", &n1);
        printf ("\nSegundo numero: ");
        scanf ("%f", &n2);

        float media = mediaN(n1, n2);

        printf ("\nMedia entre %.1f e %.1f = %.1f\n", n1, n2, media);

        system ("PAUSE");
        return 0;
    }

    float mediaN(float num1, float num2){
        return (num1 + num2)/2;
    }