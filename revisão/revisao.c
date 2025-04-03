#include <stdio.h>
#include <stdlib.h>

    int destino_ (int opc);

    int main(){
        int op, preco;

        printf ("OPCAOES DE PASSAGEM\n1- IDA\n2- IDA E VOLTA\n");
        scanf ("%d", &op);

        while (op != 1 && op != 2){
            printf ("[ERROR] Digite uma opcao valida! (1- IDA | 2- IDA E VOLTA)\n");
            scanf ("%d", &op);
        }

        preco = destino_(op);
        printf ("Preco da passagem: %d\n", preco);
                
        system("PAUSE");
        return 0;
    }

    int destino_(int opc){
        int destino, prec;

        printf ("DESTINO\n1- NORTE\n2- NORDESTE\n3- CENTRO-OESTE\n4- SUL\n");
        scanf ("%d", &destino);
        while (destino != 1 && destino != 2 && destino != 3 && destino != 4){
            printf ("[ERROR] Digite uma opcao valida!\nDESTINO\n1- NORTE\n2- NORDESTE\n3- CENTRO-OESTE\n4- SUL\n");
            scanf ("%d", &destino);
        }
        if (opc == 1){
            if(destino == 1) prec = 500;
            else if(destino == 2 || destino == 3) prec = 350; 
            else if(destino == 4) prec = 300;
        }else{
            if(destino == 1) prec = 900;
            else if(destino == 2) prec = 650;
            else if(destino == 3) prec = 600; 
            else if(destino == 4) prec = 550;
        }

        return prec;
    }