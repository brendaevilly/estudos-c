#include <stdio.h>
#include <stdlib.h>

    int main(){
        int tam;

        printf ("\n# Tamanho do vetor: ");
        scanf ("%d", &tam);

        while(tam < 1){
            printf ("\n== [ERROR] Insira um tamanho maior que 0!");
            printf ("\n# Tamanho do vetor: ");
            scanf ("%d", &tam);
        }

        int vetor[tam];
        int maior = 0, p_maior = 0, menor = 0, p_menor = 0;
        int i = 0;

        printf ("\n- Vetor[%d]: ", i);
        scanf ("%d", &vetor[i]);

        maior = vetor[i];
        menor = vetor[i];

        for(i=1; i<tam; i++){
            printf ("\n- Vetor[%d]: ", i);
            scanf ("%d", &vetor[i]);

            if(vetor[i] > maior){
                maior = vetor[i];
                p_maior = i;
            }

            if(vetor[i] < menor){
                menor = vetor[i];
                p_menor = i;
            }
        }

        if(maior == menor){
            if(tam == 1){
                printf ("\n# O vetor tem apenas 1 elemento! O maior e o menor valor eh %d\n", maior);
            }else{
                printf ("\n# Os valores do vetor sao iguais! O maior e o menor valor eh %d\n", maior);
            }
        }else{
            int p_maior2 = 0, p_menor2 = 0;

            for(i=1; i<tam; i++){
                if(vetor[i] == maior && i != p_maior){
                    p_maior2 ++;
                }

                if(vetor[i] == menor && i != p_menor){
                    p_menor2 ++;
                }
            }

            if(p_maior2 == 0){
                printf ("\n# Maior valor: %d na posicao %d", maior, p_maior);
            }else{
                printf ("\n# Maior valor: %d na posicao %d e em mais %d outras", maior, p_maior, p_maior2);
            }

            if(p_menor2 == 0){
                printf ("\n# Menor valor: %d na posicao %d\n", menor, p_menor);
            }else{
                printf ("\n# Menor valor: %d na posicao %d e em mais %d outras\n", menor, p_menor, p_menor2);
            }
        }

        system ("PAUSE");
        return 0;
    }