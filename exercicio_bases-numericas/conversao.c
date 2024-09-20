// conversor de numeros binarios em decimais
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int binarioPdecimal (int bin);
    void decimalPbinario (int dec);
    void binarioFracPdecimal (int binF);

    int main(){
        int opcao, binario, decimal;
        printf ("\n");
        printf ("######### CONVERSAO BINARIOS E DECIMAIS ########\n");
        printf ("\n");
        printf ("====================== MENU ====================\n");
        printf ("# 1 - CONVERTER BINARIO INTEIRO P/ DECIMAL\n");
        printf ("# 2 - CONVERTER DECIMAL INTEIRO P/ BINARIO\n");
        printf ("# 3 - CONVERTER BINARIO FRACIONADO P/ DECIMAL\n");
        printf ("# 4 - CONVERTER DECIMAL FRACIONADO P/ INTEIRO\n");
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
                printf ("\n# digite o valor binario fracionado: ");
                scanf ("%d", &binario);
                binarioFracPdecimal (binario);
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
        while (divisao != 1){
            divisao = dec/2;
            i++;
        }
        int vetor[i];
        for (int l=0; l<=i; l++){
            vetor[l] = auxiliar%2;
            auxiliar = auxiliar/2;
        }
        printf ("\n# valor de %d em binario: %d", dec, divisao);
        for (int l=i-1; l>=0; l--){
            printf ("%d", vetor[l]);
        }

    }

    void binarioFracPdecimal (int binF){
        int pInteira = binF/1;
        float pFracionada = binF - pInteira;

        int decimalInt = binarioPdecimal (pInteira);
        
        printf ("\n parte inteira: %d", decimalInt);
    }




