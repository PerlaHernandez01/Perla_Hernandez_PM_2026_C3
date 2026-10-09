#include <stdio.h>

/* Suma pagos.
El programa obtine la sumade los pagos realizados el ultimo mes.
PAG y SPA: variables de tipo real.*/

void main (void)
{
    float PAG, SPA=0;
    printf("Ingrese el primer pago:\t");
    scanf("%f", &PAG);
    /*Observa que al utilizar la estructura do-white al menos se necesita un pago.*/
    do
    {
        SPA=SPA+PAG;
        printf("Ingrese el siguiente pago -0 para teerminar-:\t ");
        scanf("%f", &PAG);

    }
    while (PAG);
    printf("\nEl total e pagos del mes es: %.2", SPA);
}
