#include <stdio.h>
#include <math.h>

/* Pares e impares.
El programa, al recibir como datos N numeros enteros, obtiene la suma de los numeros pares y calcula el promedio de los impares.

I,N,NUM,SPA, SIM, CIM: variables de tipo entero.*/

void main (void)
{
    int I,N,NUM,SPA=0, SIM=0, CIM=0;
    printf("Ingrese el numero de datos que se van a proceesar:\t");
    scanf("%d",&N);
    if(N>0)
    {
        for(I=1; I<=N; I++)
        {
            printf("\nIngrese el numero %d:",I);
            scanf("%d", &NUM);
            if(NUM)
                if(pow(-1,NUM)>0)
                SPA=SPA+NUM;
            else
            {
                SIM=SIM+NUM;
                CIM++;
            }
            printf("n La suma de los numeros pares es: %d", SPA);
            printf("\n El promedio de numeros impares es: %5.3f",(float)(SIM/CIM));

        }
        printf("\n La suma de los nuemeros pares es: %d", SPA);
        printf("\n El pomedio de numeros impares es: %5.2", (float)(SIM/CIM));

    }
    else
        printf("\n Elvalor de N es incorrecto");
}
