#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val,res;

    val = 25;

    printf("el valor es: %i \n: ", val);

    res = val++;

    printf("el valor es: %i \n",res);

    res = ++val;

    printf("el valor es: %i \n",res);

    res = val--;

    printf("el valor es: %i \n",res);

    res= --val;

    printf("el valor es: %i \n",res);
}
