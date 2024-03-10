//librerias
#include <cs50.h>
#include <stdio.h>

//funcion principal
int main()
{
    //declaracion int a;
    //inicializar int edad =18;
    int num1 = get_int("Ingrese un numero: ");
    int num2 = get_int("Ingrese otro numero: ");

    if(num1 > num2)
    {
        printf("%d es mayor que %d", num1,num2);
    }
    else if(num1 < num2)
    {
        printf("%d es menor que %d", num1,num2);
    }else{
        printf("Los numeros son iguales");
    }
}
