#include <stdio.h>

void main (void)
{
    int i,j,n, mat;
    float cal, pro;
    FILE *ar;
    if ((ar= fopen("arc.txt", "r")) !=NULL)
    {
                fscanf(ar, "%d", &n);
        for (j=0; j<5; j++)
        {
            fscanf(ar, "%d", &mat);
            printf("%d\t", mat);
            pro=0;
            for (j=0; j<5; j++)
        {

        fscanf(ar, "%d", &cal);
    pro += cal;
        }

        printf("\t %.2f", pro/5);
        printf("\n");

    }
    fclose (ar);
    }
    else
        printf("No se puede abrir el archivo");
}
