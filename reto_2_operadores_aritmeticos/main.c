#include <stdio.h>
#include <stdlib.h>

int main()
{

    float farenheit;

    printf ("Inserta la temperatura en grados farenheit:");

    scanf("%f", &farenheit);

    printf("la temperatura en grados celsius es: %f", (farenheit - 32) / 1.8);
}
