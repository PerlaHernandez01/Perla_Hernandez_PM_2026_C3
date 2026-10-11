#include <stdio.h>

/*Eleccion.
El programa almacena los votos emitidos en una eleccion en la que hubo cinco candidatos e imprime el total de votos que obtuvo cada de ellos. */
void main (void)
{
    int ELE[5]={0}; /*Declaracion del arreglo entero ELE de cinco elementos. Todos sus elementos se inicializan en 0. */
    int I, VOT;
    printf("Ingresa el primer voto (0-para terminar:)");
    scanf("%d",&VOT);
    while (VOT)
    {
        if((VOT>0)&&(VOT<6))
            ELE[VOT-1]++;
        else
            printf("\nEl voto ingrseado es incorrecto.\n");
        printf("Ingresa el siguiente  voto (0-para terminar):");
        scanf("%d",&VOT);

    }
    printf("\n\nResultados del a declaracion");
    for (I=0; I<=4; I++)
        printf("\nCandidato %d",I+1,ELE[I]);
}
