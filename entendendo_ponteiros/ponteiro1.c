#include <stdio.h>
#include <stdlib.h>

    int main (){
        int x = 10;
        int *ponteiro = &x;

        printf ("valor de x: %d\n", x);
        // para o ponteiro apontar o endereco de memoria da var
        printf ("numero de memoria de x: %d\n", ponteiro); 
        // para o ponteiro apontar o valor que ocupa a var
        printf ("valor do espaco de memoria do ponteiro: %d\n", *ponteiro);



        system ("PAUSE");
        return 0;
    }