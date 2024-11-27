#include <stdio.h>
#include <stdlib.h>

    int main(){
        int x, y, soma_par = 0, produto_impar = 1, quant_par = 0, quant_impar = 0;
        
        printf ("\n# Digite o primeiro numero: ");
        scanf ("%d", &x);
        printf ("\n# Digite o segundo numero: ");
        scanf ("%d", &y);

        while(x > (y - 2)){
            printf ("\n[ERROR] O primeiro numero tem que ser menor que o segundo subtraido por dois!");
            printf ("\n# Digite o primeiro numero: ");
            scanf ("%d", &x);
            printf ("\n# Digite o segundo numero: ");
            scanf ("%d", &y);
        }

        for(int i=x; i<=y; i++){
            if(i % 2 == 0){
                soma_par += i;
                quant_par ++;
            }else{
                produto_impar *= i;
                quant_impar ++; 
            }
        }

        if(quant_par == 1){
            printf ("\n# Foi encontrado apenas o numero %d par no intervalo!\n", soma_par);
        }else{
            printf ("\n# Soma dos numeros pares do intervalo %d-%d: %d", x, y, soma_par);
        }

        if(quant_impar == 1){
            printf ("\n# Foi encontrado apenas o numero %d impar no intervalo!\n", produto_impar);
        }else{
            printf ("\n# Produto dos numeros impares do intervalo %d-%d: %d\n", x, y, produto_impar);
        }

        system ("PAUSE");
        return 0;
    }