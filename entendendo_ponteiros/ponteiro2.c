#include <stdio.h>
#include <stdlib.h>

    int main (){
        int x = 10;
        int *ponteiro = &x;

        int y = 20;
        *ponteiro = y;

        printf ("valor de x: %d\n", x);
        printf ("endereco de memoria de x: %d\n", ponteiro);
        printf ("valor do espaco de memoria do ponteiro: %d\n", *ponteiro);



        system ("PAUSE");
        return 0;
    }