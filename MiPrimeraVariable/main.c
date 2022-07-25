#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int integerA;
    float floatA;
    char letterA;

    printf("ingresa el valor del entero A: ");

    scanf("%i",&integerA);

    printf("ingresa el valor del flotante A: ");

    scanf("%f",&floatA);

    printf("ingresa el valor del caracter A: ");

    scanf(" %c",&letterA);

    printf("el entero a es: %i", integerA);

    printf("el flotante a es: %f", floatA);

    printf("el caracter a es: %c", letterA);


    return 0;
}
