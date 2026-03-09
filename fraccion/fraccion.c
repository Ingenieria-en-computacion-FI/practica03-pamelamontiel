#include "fraccion.h"
#include <stdlib.h>
#include <stdio.h>


Fraccion *crearFraccion(int num, int den) {
    if (den == 0) return NULL;
    
    Fraccion *f = (Fraccion*)malloc(sizeof(Fraccion));
    if (f) {
        f->num = num; 
        f->den = den; 
    }
    return f;
}
void simplificar(Fraccion *f) {
    if (!f) return;

    int p = f->num;
    int q = f->den;
    int r;

    while (q != 0) {
        r = p % q;
        p = q;
        q = r;
    }
    
    f->num /= p;
    f->den /= p;
}

Fraccion *sumar(const Fraccion *f1, const Fraccion *f2) {
    if (!f1 || !f2) return NULL;
    Fraccion *res = crearFraccion(f1->num * f2->den + f2->num * f1->den,  f1->den * f2->den);
    
    simplificar(res); 
    return res;
}
void imprimirFraccion(const Fraccion *f) {
    if (!f) return;
    printf("%d/%d\n", f->num, f->den); 
}
void destruirFraccion(Fraccion* f) {
    if (!f) return;
    free(f);
}


