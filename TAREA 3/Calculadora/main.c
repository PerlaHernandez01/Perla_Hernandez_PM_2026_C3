#include <stdio.h>
int main() {
    int op;
    float num, cuad, raiz;
    float est, ant;
    printf("--- CALCULADORA BASICA ---\n");
    printf("1. Elevar al cuadrado\n");
    printf("2. Raiz cuadrada por aproximaciones\n");
    printf("Elija una opcion: ");
    scanf("%d", &op);
    switch (op) {
        case 1:
            printf("Ingrese un numero: ");
            scanf("%f", &num);
            cuad = num * num;
            printf("El cuadrado de %.2f es: %.2f\n", num, cuad);
            break;

        case 2:
            printf("Ingrese un numero positivo: ");
            scanf("%f", &num);

            if (num < 0) {
                printf("Error: Numero negativo.\n");
            } else if (num == 0) {
                printf("La raiz cuadrada es: 0.00\n");
            } else {
                // Algoritmo clásico de aproximaciones sucesivas (Método Babilónico)
                est = num / 2.0;
                ant = 0;

                // Estructura repetitiva similar a los ejemplos del libro
                while ((est - ant > 0.00001) || (ant - est > 0.00001)) {
                    ant = est;
                    est = (est + (num / est)) / 2.0;
                }

                printf("La raiz cuadrada aproximada es: %.4f\n", est);
            }
            break;

        default:
            printf("Opcion incorrecta.\n");
    }

    return 0;
}
