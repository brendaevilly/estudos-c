#include <stdio.h>
#include <stdlib.h>

    int main (){

        /* 
            o endereco desse ponteiro está apontando o endereco de x
            ponteiro = &x; 
            o valor desse ponteiro eh igual ao endereco de memoria de x
            *ponteiro = &x;

        */

        int x = 10;
        float y = 25.5;
        char z = 'a';

        int *px = &x;
        float *py = &y;
        char *pz = &z;

        printf ("valor de x: %d -- endereco de memoria de x: %d\n", *px, px);
        printf ("valor de y: %.2f -- endereco de memoria de y: %d\n", *py, py);
        printf ("valor de z: %c -- endereco de memoria de z: %d\n", *pz, pz);
        
        int *memoria;
        memoria = 6422284;

        printf ("valor de x: %d\n", *memoria);


        system ("PAUSE");
        return 0;
    }