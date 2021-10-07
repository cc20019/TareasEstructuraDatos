#include <stdio.h>
#include <stdlib.h>
#include "funcionesColas.h"

nodo* primero = NULL;
nodo* ultimo = NULL;

void insertarNodo() {
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

void desplegarCola() {
    nodo* actual = (nodo*) malloc(sizeof (nodo));
    actual = primero;

    if (primero != NULL) {
        while (actual != NULL) {
            printf("\n%i", actual->dato);
            actual = actual->siguiente;
        }
    } else {
        printf("la cola no existe\n");
    }
}

void buscarNodo() {
    int datoBuscado, encontrado = 0, posicion = 0;
    nodo* actual = (nodo*) malloc(sizeof (nodo));
    actual = primero;
    if (primero != NULL) {
        printf("Que dato desea buscar de en la cola\n-->");
        scanf("%d", &datoBuscado);
        while (actual != NULL && encontrado != 1) {
            posicion++;
            if (actual->dato == datoBuscado) {
                printf("El dato buscado [%d] fue encontrado con exito, y se encuentra en la posicion [%d]\n", datoBuscado, posicion);
                encontrado = 1;
            }
            actual = actual->siguiente;
        }

        if (encontrado == 0) {
            printf("UPS. El dato buscado [%d] no ha sido encontrado\n", datoBuscado);
        }
    } else {
        printf("la cola no existe\n");
    }
}

void modificarNodo() {
    int datoBuscado, encontrado = 0, posicion = 0;
    nodo* actual = (nodo*) malloc(sizeof (nodo));
    actual = primero;
    if (primero != NULL) {
        printf("Que dato desea buscar de en la cola para modificar\n-->");
        scanf("%d", &datoBuscado);
        while (actual != NULL && encontrado != 1) {
            posicion++;
            if (actual->dato == datoBuscado) {
                printf("El dato buscado [%d] fue encontrado con exito, y se encuentra en la posicion [%d]\n", datoBuscado, posicion);
                printf("ingrese el nuevo dato a asignar porfavor.\n-->");
                scanf("%d", &actual->dato);
                printf("Nodo modificado con exito\n");
                encontrado = 1;
            }
            actual = actual->siguiente;
        }
        if (encontrado == 0) {
            printf("UPS. El dato buscado [%d] no ha sido encontrado\n", datoBuscado);
        }
    } else {
        printf("la cola no existe\n");
    }
}

void eliminarCola() {
    int datoBuscado, encontrado = 0, posicion = 0;
    nodo* actual = (nodo*) malloc(sizeof (nodo));
    nodo* anterior = (nodo*) malloc(sizeof (nodo));
    anterior = NULL;
    actual = primero;
    if (primero != NULL) {
        printf("Que dato desea buscar de en la cola, para poder eliminarlo\n-->");
        scanf("%d", &datoBuscado);
        while (actual != NULL && encontrado != 1) {
            posicion++;
            if (actual->dato == datoBuscado) {
                printf("El dato buscado [%d] fue encontrado con exito, y se encuentra en la posicion [%d]\n", datoBuscado, posicion);
                if (actual == primero) {
                    primero = primero->siguiente;
                } else if (actual == ultimo) {
                    anterior->siguiente = NULL;
                    ultimo = anterior;
                } else {
                    anterior->siguiente = actual->siguiente;

                }

                encontrado = 1;
            }
            anterior = actual;
            actual = actual->siguiente;
        }

        if (encontrado == 0) {
            printf("UPS. El dato buscado [%d] no ha sido encontrado\n", datoBuscado);
        } else {
            printf("El dato buscado [%d] ha sido elimiando de la cola\n", datoBuscado);
            free(anterior);
        }
    } else {
        printf("la cola no existe\n");
    }
}