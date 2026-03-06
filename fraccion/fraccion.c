#include <stdio.h>
#include <stdlib.h>
#include "fraccion.h"

/* TODO
   Definir la estructura Fraccion
   Debe contener:
   - numerador
   - denominador
*/
struct Fraccion
{
    /* TODO */
};


/* TODO
   Crear una función auxiliar para calcular
   el máximo común divisor (MCD)
*/
int mcd(int a, int b)
{
    /* TODO */

    return 1;
}


/* Crear fracción */
Fraccion* crearFraccion(int num, int den)
{
    /* TODO
       1 Verificar que el denominador no sea 0
       2 Reservar memoria con malloc
       3 Asignar numerador y denominador
       4 Simplificar la fracción
       5 Regresar la fracción
    */

    return NULL;
}


/* Simplificar fracción */
void simplificar(Fraccion* f)
{
    /* TODO
       1 Calcular el MCD
       2 Dividir numerador y denominador entre el MCD
    */
}


/* Sumar fracciones */
Fraccion* sumar(Fraccion* a, Fraccion* b)
{
    /* TODO
       1 Calcular numerador resultante

          a/b + c/d =
          (a*d + b*c) / (b*d)

       2 Crear nueva fracción
       3 Simplificar
       4 Regresar resultado
    */

    return NULL;
}


/* Imprimir fracción */
void imprimir(Fraccion* f)
{
    /* TODO
       Imprimir en formato:

       numerador/denominador
    */
}


/* Liberar memoria */
void destruir(Fraccion* f)
{
    /* TODO
       Liberar memoria con free
    */
}
