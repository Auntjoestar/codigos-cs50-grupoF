#include <stdio.h>
#include <cs50.h>

void miau();

int main()
{
    int veces = get_int("Dame un numero: \n");
    miau(veces);
}

void miau(int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("miau\n");
    }
}

