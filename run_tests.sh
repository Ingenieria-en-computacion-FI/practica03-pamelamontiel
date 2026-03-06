#!/bin/bash

TOTAL=0

echo "===================="
echo "Pruebas TAD Nodo"
echo "===================="

gcc nodo/nodo.c tests/test_nodo.c -o test_nodo

if ./test_nodo
then
    echo "Nodo: 10 puntos"
    TOTAL=$((TOTAL+10))
else
    echo "Nodo: 0 puntos"
fi


echo "===================="
echo "Pruebas TAD Fraccion"
echo "===================="

gcc fraccion/fraccion.c tests/test_fraccion.c -o test_fraccion

if ./test_fraccion
then
    echo "Fraccion: 10 puntos"
    TOTAL=$((TOTAL+10))
else
    echo "Fraccion: 0 puntos"
fi


echo "===================="
echo "Pruebas TAD Pelicula"
echo "===================="

gcc movie/pelicula.c tests/test_pelicula.c -o test_pelicula

if ./test_pelicula
then
    echo "Pelicula: 10 puntos"
    TOTAL=$((TOTAL+10))
else
    echo "Pelicula: 0 puntos"
fi


echo "===================="
echo "PUNTOS TOTALES: $TOTAL / 30"
echo "===================="

exit 0
