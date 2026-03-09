#ifndef FRACCION_H
#define FRACCION_H

struct fraccion {
    int num; 
    int den; 
};

typedef struct fraccion Fraccion;

Fraccion *crearFraccion(int num, int den); 
void simplificar(Fraccion *f);
Fraccion *sumar(const Fraccion *f1, const Fraccion *f2);
void imprimirFraccion(const Fraccion *f);
void destruirFraccion(Fraccion *f);

#endif

