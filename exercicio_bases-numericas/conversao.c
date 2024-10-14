// conversor de numeros binarios em decimais
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int main(){
        int opcao, binario, decimal;
        printf ("\n");
        printf ("######### CONVERSAO DE BASES NUMERICAS ########\n");
        printf ("\n");
        printf ("====================== MENU ====================\n");
        printf ("# 1 - CONVERTER BINARIO INTEIRO P/ DECIMAL\n");
        printf ("# 2 - CONVERTER DECIMAL INTEIRO P/ BINARIO\n");
        printf ("================================================\n");
        printf ("\n");
        printf ("\n# DIGITE SUA OPCAO: ");
        scanf ("%d", &opcao);
        printf ("\n");

        switch (opcao){
            case 1: 
                printf ("\n# digite o valor em binario: ");
                scanf ("%d", &binario);
            break;
            case 2:
                printf ("\n# digite o valor em decimal: ");
                scanf ("%d", &decimal);
            break;
            case 3:
            break;
            case 4:
            break;
            default:
            break;

        }
        printf ("\n");

        system ("PAUSE");
        return 0;
    }




