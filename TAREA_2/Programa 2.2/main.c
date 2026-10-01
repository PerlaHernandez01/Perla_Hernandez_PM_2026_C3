#include <stdio.h>
#include <stdlib.h>

/* Incremento de costo del 11% si el producto es inferior a 1500 */
void main (void)
{
    float PRE, NPR;
    printf("ingrese el precio del producto: ");
    scanf("%f",&PRE);
    if(PRE < 1500)
    {
        NPR = PRE * 1.11;
        printf("\nNuevo precio: %7.2f",NPR);

    }
}
