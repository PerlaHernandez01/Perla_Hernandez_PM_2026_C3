#include <string.h>
#include <stdlib.h>
#include <string.h>
struct alumno
{
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio[20];
    char direccion[20];
};

void lectura (struct alumno *);

void main (void)
{
    struct alumno a0 = {120, "Maria", "Contabilidad", 8.9, "Queretano"};
    struct alumno *a3, *a4, *a5, *a6;

    a3=&a0;

a4 = new (struct alumno);

    printf("\nIngrese la matrícula del alumno 4: ");
scanf("%d", &(*a4).matricula);
fflush(stdin);
printf("Ingrese el nombre del alumno 4: ");
gets(a4->nombre);
printf("Ingrese la carrera del alumno 4: ");
gets((*a4).carrera);
printf("Ingrese promedio del alumno 4: ");
scanf("%f", &a4->promedio);
fflush(stdin);
printf("Ingrese la dirección del alumno 4: ");
gets(a4->direccion);
}
