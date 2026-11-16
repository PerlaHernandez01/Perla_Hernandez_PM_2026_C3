#include <stdio.h>
#include <string.h>
typedef struct
{
    char calle[20];
    int numero;
    int cp;
    char localidad[20];
} domicilio;

struct empleado

{
    char nombre[20];
    char departamento[20];
    float sueldo;
          domicilio direccion;
};

void Lectura (struct empleado *a)

{
    printf("\nIngrese el nombre del empleado: ");
    gets(a->nombre);
    fflush(stdin);
    printf("Ingrese el departamento de la empresa: ");
    gets(a->departamento);
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &a->sueldo);
    fflush(stdin);
    printf("-- Ingrese la direccion del empleado--");
    printf("\n\tCalle:");
    gets(a->direccion.calle);
    printf("\tNumero: ");
    scanf("%d", &a->direccion.numero);
    printf("\tCodigo Postal: ");
    scanf("%d", &a->direccion.cp);
    fflush(stdin);
    printf("\tLocalidad: ");
    gets(a->direccion.localidad);

}
void main (void)
{
    struct empleado e0= {"Arturo", "Compras", 15500.75, "San Jeronimo", 120,3490, "Toluca"};
}
