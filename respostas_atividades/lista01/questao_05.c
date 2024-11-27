#include <stdio.h>
#include <stdlib.h>

    int main(){
        int idade_h1, idade_h2, idade_m1, idade_m2, soma, produto;

        printf ("\n# Idade do primeiro homem: ");
        scanf ("%d", &idade_h1);
        printf ("\n# Idade do segundo homem: ");
        scanf ("%d", &idade_h2);
        while(idade_h1 == idade_h2){
            printf ("\n== [ERROR] Voce inseriu idades iguais para os dois homens! Digite idades diferentes!");
            printf ("\n# Idade do primeiro homem: ");
            scanf ("%d", &idade_h1);
            printf ("\n# Idade do segundo homem: ");
            scanf ("%d", &idade_h2);
        }

        printf ("\n# Idade da primeira mulher: ");
        scanf ("%d", &idade_m1);
        printf ("\n# Idade da segunda mulher: ");
        scanf ("%d", &idade_m2);
        while(idade_m1 == idade_m2){
            printf ("\n== [ERROR] Voce inseriu idades iguais para os duas mulheres! Digite idades diferentes!");
            printf ("\n# Idade da primeira mulher: ");
            scanf ("%d", &idade_m1);
            printf ("\n# Idade da segunda mulher: ");
            scanf ("%d", &idade_m2);
        } 

        if(idade_h1 > idade_h2){
            if(idade_m1 > idade_m2){
                soma = idade_h1 + idade_m2;
                produto = idade_h2 * idade_m1;
                printf ("\n# Soma das idades do primeiro homem e da segunda mulher: %d\n", soma);
                printf ("\n# Produto das idades do segundo homem e da primeira mulher: %d\n", produto);
            }else{
                soma = idade_h1 + idade_m1;
                produto = idade_h2 * idade_m2;
                printf ("\n# Soma das idades do primeiro homem e da primeira mulher: %d\n", soma);
                printf ("\n# Produto das idades do segundo homem e da segunda mulher: %d\n", produto);
            }
        }else{
            if(idade_m1 > idade_m2){
                soma = idade_h2 + idade_m2;
                produto = idade_h1 * idade_m1;
                printf ("\n# Soma das idades do segundo homem e da segunda mulher: %d\n", soma);
                printf ("\n# Produto das idades do primeiro homem e da primeira mulher: %d\n", produto);
            }else{
                soma = idade_h2 + idade_m1;
                produto = idade_h1 * idade_m2;
                printf ("\n# Soma das idades do segundo homem e da primeira mulher: %d\n", soma);
                printf ("\n# Produto das idades do primeiro homem e da segunda mulher: %d\n", produto);
            }
        }

        system ("PAUSE");
        return 0;
    }