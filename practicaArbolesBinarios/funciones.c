#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

Nodo* crearNodo(int valor) {
    Nodo* nuevoNodo = (Nodo*) malloc(sizeof (Nodo));
    nuevoNodo->valor = valor;
    nuevoNodo->derecha = NULL;
    nuevoNodo->izquierda = NULL;
    return nuevoNodo;
}

void destruirNodo(Nodo* nodo) {
    nodo->derecha = NULL;
    nodo->izquierda = NULL;
    free(nodo);
}

void insertar(Nodo** arbol, int valor) {
    if (*arbol == NULL) {
        *arbol = crearNodo(valor);
    } else {
        int valorRaiz = (*arbol)->valor;
        if (valor < valorRaiz) {
            insertar(&(*arbol)->izquierda, valor);
        } else
            insertar(&(*arbol)->derecha, valor);
    }
}

int existe(Nodo* arbol, int valor) {
    if (arbol == NULL) {
        return 0;
    } else if (arbol->valor == valor) {
        return 1;
    } else if (valor < arbol->valor) {
        return existe(arbol->izquierda, valor);
    } else
        return existe(arbol->derecha, valor);
}

void determinarExistencia(Nodo* arbol, int valor) {
    if (existe(arbol, valor)) {
        printf("El nodo %d existe en el arbol\n", valor);
    } else {
        printf("El nodo %d NO existe en el arbol\n", valor);
    }
}

void preOrden(Nodo* arbol) {
    if (arbol == NULL) {
        printf(" - ");
    } else {
        printf("( %d ", arbol->valor);
        preOrden(arbol->izquierda);
        preOrden(arbol->derecha);
        printf(")");
    }
}

void inorden(Nodo* arbol) {
    if (arbol == NULL) {
        printf(" - ");
    } else {
        printf("(");
        inorden(arbol->izquierda);
        printf(" %d ", arbol->valor);
        inorden(arbol->derecha);
        printf(")");
    }
}

void postOrden(Nodo* arbol) {
    if (arbol == NULL) {
        printf(" - ");
    } else {
        printf("(");
        postOrden(arbol->izquierda);
        postOrden(arbol->derecha);
        printf(" %d )",arbol->valor);
    }
}