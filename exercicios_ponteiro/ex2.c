/*

Escreva um programa que contenha duas variaveis inteiras. Compare seus enderec¸os e ´
exiba o maior enderec¸o.

*/

#include <stdio.h>
#include <stdlib.h>

    int main(){
        int num1, num2;
        int *p1 = &num1, *p2 = &num2;

        if (p1 > p2){
            printf ("\n");
            printf ("O endereco de memoria de num1 (%p) eh maior que o de num2 (%p).\n", p1, p2);
        }else{
            printf ("\n");
            printf ("O endereco de memoria de num2 (%p) eh maior que o de num1 (%p).\n", p2, p1);
        }

        system ("PAUSE");
        return 0;
    }