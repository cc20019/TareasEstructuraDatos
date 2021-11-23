#include <stdio.h>
#include <stdlib.h>
#include "funciones2.h"

int main(int argc, char** argv) {

    Nodo* arbol = NULL;

    inorden(arbol);
    printf("\n");
    insertar(&arbol, 5);
    inorden(arbol);
    printf("\n");
    insertar(&(arbol), 10);
    inorden(arbol);
    printf("\n");
    insertar(&arbol, 4);
    inorden(arbol);
    printf("\n");
    insertar(&arbol, 9);
    inorden(arbol);
    printf("\n");
    insertar(&arbol, 15);
    inorden(arbol);
    printf("\n");
    insertar(&arbol, 20);
    inorden(arbol);
    printf("\n");
    insertar(&arbol, 2);
    inorden(arbol);
    printf("\n");

    eliminar(arbol, 4);
    inorden(arbol);
    printf("\n");
    
    eliminar(arbol, 15);
    inorden(arbol);
    printf("\n");
    
    eliminar(arbol, 5);
    inorden(arbol);
    printf("\n");

    return 0;
}
