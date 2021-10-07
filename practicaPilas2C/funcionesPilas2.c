
#include <stdio.h>
#include <stdlib.h>
#include "funcionesPilas2.h"

Nodo* crearNodo(URL url) {
    Nodo* nodo = (Nodo*) malloc(sizeof (Nodo));
    nodo->url = url;
    nodo->siguiente = NULL;
    return nodo;
}

void destruirNodo(Nodo* nodo) {
    nodo->siguiente = NULL;
    free(nodo);
}

Pila* crearPila() {
    Pila* pila = (Pila*) malloc(sizeof (Pila));
    pila->cima = NULL;
    pila->logitud = 0;
    return pila;
}

void destruirPila(Pila* pila) {
    while (pila->cima != NULL) {
        desapilar(pila);
    }
    free(pila);
}

void aplilar(Pila* pila, URL url) {
    Nodo* nodo = crearNodo(url);
    nodo->siguiente = pila->cima;
    pila->cima = nodo;
    pila->logitud++;
}

void desapilar(Pila * pila) {
    if (pila->cima != NULL) {
        Nodo* eliminar = pila->cima;
        pila->cima = pila->cima->siguiente;
        destruirNodo(eliminar);
        pila->logitud--;
    }
}

URL cima(Pila* pila) {
    if (pila->cima == NULL) {
        return NULL;
    } else {
        return pila->cima->url;
    }
}

int longitud(Pila* pila) {
    return pila->logitud;
}

int estaVacia(Pila* pila) {
    return pila->logitud = 0;
}