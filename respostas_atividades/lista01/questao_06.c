#include <stdio.h>
#include <stdlib.h>

    int main(){
        int num = 0, soma = 0;

        while(num >= 0){
            printf ("\n# Digite um numero (digite um negatico para parar): ");
            scanf ("%d", &num);
            if(num < 0) break;
            soma += num;
        }

        printf ("\n# Soma dos numeros positivos digitados: %d\n", soma);

        system ("PAUSE");
        return 0;
    }