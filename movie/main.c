#include "pelicula.h"
#include <stdio.h>

int main() {
    Pelicula *p = crearPelicula("Orgullo y Prejuicio", "Drama", 127);
    imprimir(p);
    
    cambiarGenero(p, "Romance");
    agregarDirector(p, "Joe Wright");
    imprimir(p);

    destruir(p);
    p = NULL;

    (p == NULL) ? printf("La pelicula ahora es nula\n") : printf("No es nula\n");

    return 0;
}
