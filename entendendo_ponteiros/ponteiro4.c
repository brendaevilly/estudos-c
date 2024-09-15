#include <stdio.h>
#include <stdlib.h>

    struct horario{
        int hora, minuto, segundo;
    };

    struct horario agora, *depois;

    int main (){
        depois = &agora;
        depois->hora = 20;
        depois->minuto = 20;
        depois->segundo = 20;

        printf ("%d:%d:%d\n", agora.hora, agora.minuto, agora.segundo);


        system ("PAUSE");
        return 0;
    }