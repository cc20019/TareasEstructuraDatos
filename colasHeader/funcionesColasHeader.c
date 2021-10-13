#include "funcionesColasHeader.h"
#include <stdio.h>
#include <stdlib.h>

nodo* crearNodo(tipoDato entero) {
    nodo* nuevo = (nodo*) malloc(sizeof (nodo));
    nuevo->dato = entero;
    nuevo->siguiente = NULL;
    return nuevo;
}

void destruirNodo(nodo* Nodo) {
    Nodo->dato = 0;
    Nodo->siguiente = NULL;
    free(Nodo);
}

cola* crearCola() {
    cola* _cola = (cola*) malloc(sizeof (cola));
    _cola->frente = NULL;
    _cola->final = NULL;
    return _cola;
}

void destruirCola(cola* Cola) {
    while (Cola->frente != NULL) {
        eliminar(Cola);
    }
    free(Cola);
}

void agregarACola(cola* Cola, tipoDato entero) {
    nodo* nodo = crearNodo(entero);
    if (Cola->frente == NULL) {
        Cola->frente = nodo;
        Cola->final = nodo;
    } else {
        Cola->final->siguiente = nodo;
        Cola->final = nodo;
    }
}

void desplegarCola(cola* Cola) {
    nodo* actual = (nodo*) malloc(sizeof (nodo));
    actual = Cola->frente;
    if (Cola->frente != NULL) {
        while (actual != NULL) {
            printf("%d", actual->dato);
            actual = actual->siguiente;
        }
    } else {
        printf("¡Ups!\nParece que la cola esta vacia.");
    }
}

tipoDato consultar(cola* Cola) {
    if (Cola->frente != NULL) {
        return Cola->frente->dato;
    } else {
        printf("¡Ups!\nParece que la cola esta vacia.");
    }
}

void eliminar(cola* Cola) {
    if (Cola->frente != NULL) {
        nodo* eliminado = Cola->frente;
        Cola->frente = Cola->frente->siguiente;
        destruirNodo(eliminado);

        if ((Cola->frente != NULL)) {
            Cola->final = NULL;
        }
    }
}

