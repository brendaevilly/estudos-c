#include <stdio.h>
#include <stdlib.h>

    int primoN(int num);

    int main(){
        int n;

        printf ("\nDigite um numero: ");
        scanf ("%d", &n);

        while(n < 1){
            printf ("\n[ERROR] Insira um numero natural maior que zero! ");
            printf ("\nDigite um numero: ");
            scanf ("%d", &n);
        }

        if(primoN(n) == 1){
            printf ("\n%d eh primo!\n", n);
        }else{
            printf ("\n%d nao eh primo!\n", n);
        }

        system ("PAUSE");
        return 0;
    }

    int primoN(int num){
        int cont = 1;

        if(num == 1){
            return cont = 0;
        }else if(num == 2){
            return cont;
        }else{
            for(int i=2; i<num; i++){
                if(num % i == 0) cont = 0;
            }
        }

        return cont;
    }