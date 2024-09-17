/*

Fac¸a um programa que leia 2 valores inteiros e chame uma func¸ao que receba estas ˜
2 variaveis e troque o seu conte ´ udo, ou seja, esta func¸ ´ ao˜ e chamada passando duas ´
variaveis A e B por exemplo e, ap ´ os a execuc¸ ´ ao da func¸ ˜ ao, A conter ˜ a o valor de B e B ´
tera o valor de A. 

*/

#include <stdio.h>
#include <stdlib.h>

    void troca (int *fa, int *fb);

    int main(){
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
        // x recebe o valor apontado por fa
        int x = *fa;
        // fa recebe o valor apontado por fb
        *fa = *fb;
        *fb = x;
    }