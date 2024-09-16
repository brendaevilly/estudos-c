#include <stdio.h>
#include <stdlib.h>

    struct frutas{
        int *pmorango;
        int *pbanana;
        int *pmelao;
    };

    struct frutas mercado;

    int main (){
        int morango = 100, banana = 200, melao = 300;

        mercado.pmorango = &morango;
        mercado.pbanana = &banana;
        mercado.pmelao = &melao;

        printf ("Preco morango: %d\n", *mercado.pmorango);
        printf ("Preco banana: %d\n", *mercado.pbanana);
        printf ("Preco melao: %d\n", *mercado.pmelao);

        printf ("Preco morango: %d\n", mercado.pmorango);
        printf ("Preco banana: %d\n", mercado.pbanana);
        printf ("Preco melao: %d\n", mercado.pmelao);


        system ("PAUSE");
        return 0;
    }