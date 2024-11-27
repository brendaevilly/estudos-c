#include <stdio.h>
#include <stdlib.h>

    int tamanho_stl(char stl[50]);

    int main(){
        char stl[50];
        printf ("Digite um nome: \n");
        scanf ("%s", stl);
        int tam = tamanho_stl(stl);

        printf ("A string %s tem %d caracteres!\n", stl, tam);

        system ("PAUSE");
        return 0;
    }

    int tamanho_stl(char stl[50]){
        int cont = 0;
        for(int i=0; i<50; i++){
            if(stl[i] == '\0'){
                break;
            }
            cont ++;
        }

        return cont;
    }