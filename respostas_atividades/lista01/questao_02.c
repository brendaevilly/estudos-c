#include <stdio.h>
#include <stdlib.h>

    int main(){
        float sal_bruto, desconto = 0, sal_final = 0;

        printf ("\n# Digite o salario bruto: ");
        scanf ("%f", &sal_bruto);

        if(sal_bruto <= 600){
            printf ("\n# Insento do desconto do INSS!\n# Salario final: %.2f\n", sal_bruto);
        }else{
            if(sal_bruto > 600 && sal_bruto <= 1200){
                desconto = (sal_bruto * 20)/100;
                sal_final = sal_bruto - desconto;
            }else if(sal_bruto > 1200 && sal_bruto <= 2000){
                desconto = (sal_bruto * 25)/100;
                sal_final = sal_bruto - desconto;
            }else{
                desconto = (sal_bruto * 30)/100;
                sal_final = sal_bruto - desconto;
            }

            printf ("\n# Desconto do INSS: %.2f", desconto);
            printf ("\n# Salario final: %.2f\n", sal_final);
        }

        system ("PAUSE");
        return 0;
    }