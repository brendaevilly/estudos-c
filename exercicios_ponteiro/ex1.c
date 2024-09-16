/*

Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de ´
cada variavel usando os ponteiros. Imprima os valores das vari ´ aveis antes e ap ´ os a ´
modificac¸ao.

*/

#include <stdio.h>
#include <stdlib.h>

    int main(){
        int num = 10;
        float num2 = 10.5;
        char letra = 'a';

        int *pnum = &num;
        float *pnum2 = &num2;
        char *pletra = &letra;

        printf ("\n");

        // imprimindo os valores iniciais
        printf ("int: %d\n", num);
        printf ("float: %.2f\n", num2);
        printf ("char: %c\n", letra);

        printf ("\n");

        // modificando os valores
        *pnum = *pnum + 10;
        *pnum2 = *pnum2 + 10.5;
        *pletra = 'b';

        printf ("valor int: %d\n", num);
        printf ("valor float: %.2f\n", num2);
        printf ("valor char: %c\n", letra);

        printf ("\n");

        printf ("endereco de memoria int: %d\n", pnum);
        printf ("endereco de memoria float: %d\n", pnum2);
        printf ("endereco de memoria char: %d\n", pletra);



        system ("PAUSE");
        return 0;
    }