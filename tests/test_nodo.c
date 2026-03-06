#include <stdio.h>
#include <stdlib.h>
#include "../nodo/nodo.h"

int main()
{

    Nodo* n = crearNodo(10);

    if(n == NULL)
        return 1;

    if(obtenerValor(n) != 10)
        return 1;

    asignarValor(n,20);

    if(obtenerValor(n) != 20)
        return 1;

    destruirNodo(n);

    printf("Nodo OK\n");

    return 0;
}
