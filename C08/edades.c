#include <stdio.h>
#include <cs50.h>

int main()
{
    int n = get_int("¿Cuántos alumnos hay en su grupo? \n");
    int edades[n];
    float promedio = 0;


    for(int i = 0; i < n; i++)
    {
        edades[i] = get_int("Ingrese una edad \n");
        promedio += edades[i];
    }

    promedio = promedio / n;

    printf("Promedio de edades en CS50: %.2f \n", promedio);
    return 0;
}


