#include <stdio.h>
#include <stdlib.h>

    int main(){
        float preco = 0;
        int quantidade;

        printf ("\n# Quantidade: ");
        scanf ("%d", &quantidade);

        while(quantidade < 0){
            printf ("\n== [ERROR] Insira um numero inteiro positivo!");
            printf ("\n# Quantidade: ");
            scanf ("%d", &quantidade);
        }

        if(quantidade < 12){
            preco = quantidade * 1.30;
        }else{
            preco = quantidade;
        }

        printf ("\n# Preco = %.2f\n", preco);

        system ("PAUSE");
        return 0;
    }