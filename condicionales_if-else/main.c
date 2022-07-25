#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("condicion if, else, else if \n");

    float valA, valB, valC;

    valA = 50;
    valB = 100;
    valC = 150;

    printf("condicion: \n");

    if (valA == valB)
        printf("no se va a cumplir esta condicion");

    else if (valB == valC)
        printf("tampoco se va a cumplir");

    else
    {
        printf("ninguna condicion se cumplio: \n");
        printf("despues de esta linea el programa va a terminar");
    }
}
