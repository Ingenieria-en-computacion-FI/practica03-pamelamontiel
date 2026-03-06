#ifndef __FRACCION_H__
#define __FRACCION_H__

/* Tipo opaco */
typedef struct Fraccion Fraccion;

/* Crear una fracción */
Fraccion* crearFraccion(int num, int den);

/* Simplificar la fracción */
void simplificar(Fraccion* f);

/* Sumar dos fracciones y regresar una nueva */
Fraccion* sumar(Fraccion* a, Fraccion* b);

/* Imprimir la fracción */
void imprimir(Fraccion* f);

/* Liberar memoria */
void destruir(Fraccion* f);

#endif
