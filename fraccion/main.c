#include <stdio.h>
#include "fraccion.h"

int main() {
    Fraccion *f1, *f2, *res;

    f1 = crearFraccion(2, 4);
    f2 = crearFraccion(1, 3);

    printf("Fraccion 1: "); imprimirFraccion(f1);
    printf("Fraccion 2: "); imprimirFraccion(f2);

    res = sumar(f1, f2);
    printf("Resultado suma: "); imprimirFraccion(res);

    destruirFraccion(f1);
    destruirFraccion(f2);
    destruirFraccion(res);

    f1 = NULL;
    f2 = NULL;
    res = NULL;

    printf("\nDestruimos las fracciones...\n");
    (f1 == NULL) ? printf("La fraccion f1 es nula\n") : printf("La fraccion f1 no es nula\n");
    (f2 == NULL) ? printf("La fraccion f2 es nula\n") : printf("La fraccion f2 no es nula\n");
    (res == NULL) ? printf("La fraccion resultado es nula\n") : printf("La fraccion resultado no es nula\n");

    return 0;
}

