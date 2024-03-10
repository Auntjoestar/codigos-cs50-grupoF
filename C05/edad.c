#include <stdio.h>
#include <cs50.h>

int main()
{
    int edad = get_int("Ingrese su edad: \n");
    string nombre = get_string("Ingrese su nombre: \n");
    printf("Hola %s, tu edad es %i\n", nombre, edad);
    printf("Hola \t Mundo\n");
    return 0;
}
