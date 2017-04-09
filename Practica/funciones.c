#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/**
 * @brief Recibe tres números enteros y retorna el máximo.
 * @param a primer número ingresado
 * @param b segundo número ingresado
 * @param c tercer número ingresado
 * @return El máximo.
 *
 */
int maximo (int a, int b, int c){
    int max=0;
    max = a;

    if(b > max){
        max = b;
    }
    if(c > max){
        max = c;
    }

    return max;
}
