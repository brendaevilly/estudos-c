#include <stdio.h>
#include <stdlib.h>

    int main(){
        int lado1, lado2;

        printf ("\n# Digite o valor do lado 1: ");
        scanf ("%d", &lado1);
        printf ("\n# Digite o valor do lado 2: ");
        scanf ("%d", &lado2);

        while(lado1 < 1 || lado2 < 1){
            if(lado1 < 1 && lado2 >= 1){
                printf ("\n== [ERROR] Digite um valor maior que zero para o lado 1");
                printf ("\n# Digite o valor do lado 1: ");
                scanf ("%d", &lado1);
            }else if(lado2 < 1 && lado1 >= 1){
                printf ("\n== [ERROR] Digite um valor maior que zero para o lado 2");
                printf ("\n# Digite o valor do lado 2: ");
                scanf ("%d", &lado2);
            }else{
                printf ("\n== [ERROR] Digite um valor maior que zero para os lados 1 e 2");
                printf ("\n# Digite o valor do lado 1: ");
                scanf ("%d", &lado1);
                printf ("\n# Digite o valor do lado 2: ");
                scanf ("%d", &lado2);
            }
        }

        printf ("\n");

        for(int i=0; i<lado1; i++){
            for(int j=0; j<lado2; j++){
                printf ("*  ");
            }
            printf ("\n");
        }

        system ("PAUSE");
        return 0;
    }