#include <stdio.h>
#include <cs50.h>

int main()
{
    // declara una variable
    int nota = 10;
    nota = 20 -15;
    // float
    float promedio = 3.55;
    // string
    string saludo = "Hola mundo";
    string exclamación =  "!";
    // char
    char simbolo = '!';
    nota = -100;
    printf("La nota del estudiante es de %d, el promedio fue de %.2f\n%s\n%c", nota, promedio, saludo, simbolo);
    const int constante = 100;
    constante = 10;
}

