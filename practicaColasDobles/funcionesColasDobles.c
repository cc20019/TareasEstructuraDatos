#include <stdio.h>
#include <stdlib.h>
#include "funcionesColasDobles.h"
#define true 0
#define false 1

nodo* primero = NULL;
nodo* ultimo = NULL;
nodo* anterior = NULL;

// primero=2 nuevo=2 anterior=2 ,ultimo=1;

// 3->2->1->NULL;

void agregarPrimero() {
    nodo* nuevo = (nodo*) malloc(sizeof (nodo));
    printf("Escribir el dato a insertar porfavor\n-->");
    scanf("%d", &nuevo->dato);

    if (primero == NULL) {
        primero = nuevo;
        primero->siguiente = NULL;
        ultimo = nuevo;
        anterior = nuevo;
    } else {
        primero = nuevo;
        primero->siguiente = anterior;
        anterior = nuevo;
    }

    printf("dato ingresado con exito\n");
}

void agregarUltimo() {
    nodo* nuevo = (nodo*) malloc(sizeof (nodo));
    printf("Escribir el dato a insertar porfavor\n-->");
    scanf("%d", &nuevo->dato);

    if (primero == NULL) {
        primero = nuevo;
        primero->siguiente = NULL;
        ultimo = nuevo;
    } else {
        ultimo->siguiente = nuevo;
        nuevo->siguiente = NULL;
        ultimo = nuevo;
    }
    printf("dato ingresado con exito\n");
}

void desplegar() {
    nodo* actual = (nodo*) malloc(sizeof (nodo));
    actual = primero;
    if (primero != NULL) {
        while (actual != NULL) {
            printf("\n%d", actual->dato);
            actual = actual->siguiente;
        }
    } else {
        printf("Ups lo sentimos parece que la cola esta llena\n");
    }
}

void eliminarInicio() {
    nodo* anterior = (nodo*) malloc(sizeof (nodo));
    if (primero != NULL) {
        anterior = primero;
        primero = primero->siguiente;
        free(anterior);
        printf("El primero de la cola se elimino con exito\n");
    } else {
        printf("Ups lo sentimos para que la cola esta vacia\n");
    }
}

void eliminarFinal() {
    nodo* actual = (nodo*) malloc(sizeof (nodo));
    nodo* anterior = (nodo*) malloc(sizeof (nodo));
    actual = primero;
    if (primero != NULL) {
        while (actual->siguiente != NULL) {
            anterior = actual;
            actual = actual->siguiente;

        }
        ultimo = anterior;
        ultimo->siguiente = NULL;
        printf("El ultimo de la cola se elimino con exito\n");
        free(anterior->siguiente);
    } else {
        printf("Ups lo sentimos para que la cola esta vacia\n");
    }
}