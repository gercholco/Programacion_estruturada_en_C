#include <stdio.h>
#include <stdlib.h>

int main()
{
int myX;

int myY;

int viejoChismoso;

printf("selecciona el valor de X: \n");

scanf("%i", &myX);

printf("selecciona el valor de Y: \n");

scanf("%i", &myY);

viejoChismoso = myY;

printf("Valor cambiado del entero X es: %i",viejoChismoso);

viejoChismoso = myX;

printf("Valor cambiado del entero Y es: %i",viejoChismoso);

}
