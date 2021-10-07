
#include <stdio.h>
#include <stdlib.h>
#include "funcionesPilas.h"

void agregarElemento(elemento* _elemento) {
    _elemento->siguiente = NULL;
    if (ultimo == NULL) {
        ultimo = _elemento;
    } else {
        _elemento->siguiente = ultimo;
        ultimo = _elemento;
    }
}

elemento* extraer() {
    if (ultimo == NULL) {
        return NULL;
    }
    elemento* elementoRetorno = ultimo;
    ultimo = elementoRetorno->siguiente;
    return elementoRetorno;
}