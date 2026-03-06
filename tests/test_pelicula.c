#include <stdio.h>
#include "../movie/pelicula.h"

int main()
{

    Pelicula* p = crearPelicula("Matrix",1999,"SciFi");

    if(p == NULL)
        return 1;

    agregarDirector(p,"Wachowski");

    cambiarGenero(p,"Accion");

    imprimir(p);

    destruir(p);

    printf("Pelicula OK\n");

    return 0;
}
