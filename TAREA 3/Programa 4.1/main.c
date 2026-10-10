#include <stdio.h>

/* Cubo-1.
El programa calcula el cubo de los diez primeros numeros naturales con la ayuda de una funcion. En la solucion del problema se utiliza una variable global, aundque esto, como veremos mas adelante, no es muhy recomendable.*/
int cubo (void);
int I;

void main (void)
{
    int CUB;
    for (I=1; I<=10;I++)
    {
        CUB=cubo( );
        printf("\nEl cubo de %d", I, CUB);

    }
}
int cubo (void)
{
    return(I*I*I);
}
