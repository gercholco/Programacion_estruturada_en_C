#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entero;

    printf("ingresa un numero entero: ");

    scanf("%i", &entero);

    entero %= 5;

    entero++;

    printf("el valor del modulo es: %i",entero);
}
