#include <stdio.h>
#include <stdlib.h>

    int somar(int num1, int num2);

    int main(){
        int n1, n2, resultado = 0;

        printf ("\nPrimeiro numero: ");
        scanf ("%d", &n1);
        printf ("\nSegundo numero: ");
        scanf ("%d", &n2);

        resultado = somar(n1, n2);

        printf ("\nSoma de %d + %d = %d\n", n1, n2, resultado);

        system ("PAUSE");
        return 0;
    }

    int somar(int num1, int num2){
        return num1 + num2;
    }