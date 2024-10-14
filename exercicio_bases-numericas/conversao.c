// conversor de numeros binarios em decimais
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int binarioPdecimal (int bin);
    void decimalPbinario (int dec);
    void decimalPoctal (int dec);

    int main(){
        int opcao, binario, decimal;
        printf ("\n");
        printf ("######### CONVERSAO BINARIOS E DECIMAIS ########\n");
        printf ("\n");
        printf ("====================== MENU ====================\n");
        printf ("# 1 - CONVERTER BINARIO INTEIRO P/ DECIMAL\n");
        printf ("# 2 - CONVERTER DECIMAL INTEIRO P/ BINARIO\n");
        printf ("# 3 - CONVERTER DECIMAL PARA OCTAL\n");
        printf ("# 4 - \n");
        printf ("================================================\n");
        printf ("\n");
        printf ("\n# DIGITE SUA OPCAO: ");
        scanf ("%d", &opcao);
        printf ("\n");

        switch (opcao){
            case 1: 
                printf ("\n# digite o valor em binario: ");
                scanf ("%d", &binario);
                binarioPdecimal (binario);
                decimal = binarioPdecimal (binario);
                printf ("\n# valor de %d em decimal: %d", binario, decimal);
            break;
            case 2:
                printf ("\n# digite o valor em decimal: ");
                scanf ("%d", &decimal);
                decimalPbinario (decimal);
            break;
            case 3:
                printf ("\n# digite o valor em decimal: ");
                scanf ("%d", &decimal);
                decimalPoctal (decimal);
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

    int binarioPdecimal (int bin){
        int decimal = 0, i = 0;
        while (bin != 0){
            decimal += (bin % 10) * pow(2, i);
            bin = bin/10;
            i++;
        }
        return decimal;
    }

    void decimalPbinario (int dec){
        int divisao = 0, auxiliar = dec, i = 0;

        if (dec == 1){
            printf ("\n# valor de %d em binario: %d", dec, dec);
        }else if(dec == 0){
            printf ("\n# valor de %d em binario: %d", dec, dec);
        }else{
            while (divisao != 1){ 
                divisao = dec/2;
                i++; // 123
            }

            int vetor[i];
            for (int l=0; l<=i; l++){
                vetor[l] = auxiliar%2; // 010
                auxiliar = auxiliar/2; //521
            }
            printf ("\n# valor de %d em binario: %d", dec, divisao);
            for (int l=i-1; l>=0; l--){
                printf ("%d", vetor[l]);
            }
        } 

        

    }

    void decimalPoctal (int dec){
     
    }




