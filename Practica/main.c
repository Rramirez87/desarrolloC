#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main(){

    int a,b,c;

    printf("Ingrese por favor tres números: \n");
    scanf("%d %d %d", &a,&b,&c);
    printf("El máximo es el número: %d", maximo(a,b,c) );

    return 0;
}


