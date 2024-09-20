/*
Fac¸a um programa que leia dois valores inteiros e chame uma func¸ao que receba estes ˜
2 valores de entrada e retorne o maior valor na primeira variavel e o menor valor na ´
segunda variavel. Escreva o conte ´ udo das 2 vari ´ aveis na tela.
*/

#include <stdio.h>
#include <stdlib.h>

    void troca (int *fa, int *fb);

    int main (){
        int a, b;

        // lendo dois valores inteiros
        printf ("valor de A: \n");
        scanf ("%d", &a);
        printf ("valor de B: \n");
        scanf ("%d", &b);

        // chamando a função de troca
        troca (&a, &b);

        // valores modificados
        printf ("\n");
        printf ("valor de A: %d\n", a);
        printf ("valor de B: %d\n", b);

        system ("PAUSE");
        return 0;
    }

     void troca (int *fa, int *fb){
        
        if (fb > fa){
             int x = *fa;
            *fa = *fb;
            *fb = x;
        }
    }