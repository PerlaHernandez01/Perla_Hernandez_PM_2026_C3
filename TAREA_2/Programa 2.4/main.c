#include <stdio.h>
#include <stdlib.h>

/*Incremento del precio.*/

void main (void)
{
    float PRE, NPR;
    printf("ingrese el precio del producto:");
    scanf("%f",&PRE);
    if (PRE<1500)
        NPR=PRE*1.11;
    else
    NPR=PRE*1.08;
     printf("\nNuevo precio del producto",NPR);

}
