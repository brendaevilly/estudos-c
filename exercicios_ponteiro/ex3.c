/*

Escreva um programa que contenha duas variaveis inteiras. Leia essas vari ´ aveis do ´
teclado. Em seguida, compare seus enderec¸os e exiba o conteudo do maior enderec¸o. 

*/

#include <stdio.h>
#include <stdlib.h>

    int main (){
        int num1, num2;

        printf ("\n");
        printf ("primeiro numero: \n");
        scanf ("%d", &num1);
        printf ("segundo numero: \n");
        scanf ("%d", &num2);

        int *p1 = &num1, *p2 = &num2;

        if (p1 > p2){
            printf ("o conteudo contido na variavel com maior endereco (primeiro numero) eh: %d -- endereco: %p\n", *p1, p1);
        }else{
            printf ("o conteudo contido na variavel com maior endereco (segundo numero) eh: %d -- endereco: %p\n", *p2, p2);
        }

        system ("PAUSE");
        return 0;
    }