#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pelicula.h"


/* TODO
   Definir la estructura Pelicula

   Debe contener:
   - titulo (cadena dinámica)
   - anio
   - genero (cadena dinámica)
   - arreglo de directores
   - contador de directores
*/
struct Pelicula
{
    /* TODO */
};


/* TODO
   Crear función auxiliar para copiar cadenas
   usando malloc + strcpy
*/
char* copiarCadena(const char* texto)
{
    /* TODO */

    return NULL;
}


/* Crear película */
Pelicula* crearPelicula(const char* titulo, int anio, const char* genero)
{
    /* TODO
       1 Reservar memoria para Pelicula
       2 Copiar titulo
       3 Copiar genero
       4 Inicializar anio
       5 Inicializar contador de directores en 0
       6 Regresar la película
    */

    return NULL;
}


/* Imprimir película */
void imprimir(Pelicula* p)
{
    /* TODO
       Imprimir:

       Titulo
       Año
       Genero
       Lista de directores
    */
}


/* Cambiar género */
void cambiarGenero(Pelicula* p, const char* nuevoGenero)
{
    /* TODO
       1 Liberar el genero anterior
       2 Copiar nuevoGenero
    */
}


/* Agregar director */
void agregarDirector(Pelicula* p, const char* director)
{
    /* TODO
       1 Verificar que no exceda MAX_DIRECTORES
       2 Copiar el nombre del director
       3 Guardarlo en el arreglo
       4 Incrementar contador
    */
}


/* Liberar memoria */
void destruir(Pelicula* p)
{
    /* TODO
       1 Liberar titulo
       2 Liberar genero
       3 Liberar cada director
       4 Liberar la estructura
    */
}
