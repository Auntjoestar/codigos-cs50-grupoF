#include <stdio.h>
#include <cs50.h>

int main()
{

    string cadena = get_string("Ingrese una cadena: ");

    int longitud = 0;

    while (cadena[longitud] != '\0'){
        longitud++;
    }

    printf("La longitud de tu cadena es: %i", longitud);
}
