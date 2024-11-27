#include <stdio.h>
#include <stdlib.h>

    int fatorialN(int num);

    int main(){
        int n;

        printf ("\n# Digite um numero: ");
        scanf ("%d", &n);

        while(n < 0){
            printf ("# [ERROR] Digite um numero inteiro positivo!");
            printf ("\n# Digite um numero: ");
            scanf ("%d", &n);
        }

        int fat = fatorialN(n);

        printf ("\n# Fatorial de %d = %d\n", n, fat);

        system ("PAUSE");
        return 0;
    }

    int fatorialN(int num){
        int fatorial = 1, auxi = num, auxi2 = num;

        if(num == 0 || num == 1){
            return fatorial;
        }else{
            for(int i=1; i<auxi2; i++){
                fatorial = auxi * (num - 1);
                auxi = fatorial;
                num = num - 1;
            }
        }

        return fatorial;
    }