#include <stdio.h>
#include <cs50.h>

int main()
{
     int matriz[3][4] = {{10,20,30,110},
     {40,50,60,101},
     {70,80,90,100}};

for(int i = 0; i < 3; i++)
{
    for(int j = 0; j < 4; j++)
    {
        printf("matriz[%d][%d] = %d \n", i, j, matriz[i][j]);
    }
}
}
