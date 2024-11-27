#include <stdio.h>
#include <stdlib.h>

    int main(){
        float valor_entrada, valor_saida;

        printf ("\n# Digite o valor de entrada do produto: ");
        scanf ("%f", &valor_entrada);

        if(valor_entrada < 20){
            valor_saida = ((valor_entrada * 45)/100) + valor_entrada;
        }else{
            valor_saida = ((valor_entrada * 30)/100) + valor_entrada;
        }

        printf ("\n# Valor de saida do produto: %.2f\n", valor_saida);

        system ("PAUSE");
        return 0;
    }