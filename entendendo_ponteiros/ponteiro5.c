#include <stdio.h>
#include <stdlib.h>

    struct horario{
        int hora, minuto, segundo;
    };

    struct horario agora, *depois;

    int main (){
        depois = &agora;
        depois->hora = 20;
        depois->minuto = 30;
        depois->segundo = 40;

        int soma = 100;

        agora.hora = soma + depois->hora; //120
        agora.minuto = soma + depois->minuto; //130
        agora.segundo = depois->segundo + depois->minuto; // 170

        printf ("%d:%d:%d\n", agora.hora, agora.minuto, agora.segundo);


        system ("PAUSE");
        return 0;
    }