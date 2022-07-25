#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("condicion if \n");

    float valA, valB, valC;

    valA = valB = 100;

    printf("Primera condicion\n");

    if (valA == valB)
        printf("ambos son iguales \n");

    printf("segunda condicion \n");

    if (valA == valB)
    {
        printf("ambos son iguales \n");
        valC = valA + valB;
        printf("ademas la suma de los dos es: %f",valC);
    }
}
