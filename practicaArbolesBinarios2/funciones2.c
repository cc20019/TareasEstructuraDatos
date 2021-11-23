#include <stdio.h>
#include <stdlib.h>
#include "funciones2.h"

Nodo* crearNodo(int valor, Nodo* padre) {
    Nodo* nuevoNodo = (Nodo*) malloc(sizeof (Nodo));
    nuevoNodo->valor = valor;
    nuevoNodo->derecha = NULL;
    nuevoNodo->izquierda = NULL;
    nuevoNodo->padre = padre;
    return nuevoNodo;
}

void destruirNodo(Nodo* nodo) {
    nodo->derecha = NULL;
    nodo->izquierda = NULL;
    free(nodo);
}

static void insertarConPadre(Nodo** arbol, Nodo* padre, int valor) {
    if (*arbol == NULL) {
        *arbol = crearNodo(valor, padre);
    } else {
        int valorRaiz = (*arbol)->valor;
        if (valor < valorRaiz) {
            insertarConPadre(&(*arbol)->izquierda, *arbol, valor);
        } else {
            insertarConPadre(&(*arbol)->derecha, *arbol, valor);
        }
    }
}

void insertar(Nodo** arbol, int valor) {
    insertarConPadre(arbol, NULL, valor);
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

Nodo* obtener(Nodo* arbol, int valor) {
    if (arbol == NULL) {
        return NULL;
    } else if (arbol->valor == valor) {
        return arbol;
    } else if (valor < arbol->valor) {
        return obtener(arbol->izquierda, valor);
    } else {
        return obtener(arbol->derecha, valor);
    }
}

void determinarExistencia(Nodo* arbol, int valor) {
    if (existe(arbol, valor)) {
        printf("El nodo %d existe en el arbol\n", valor);
    } else {
        printf("El nodo %d NO existe en el arbol\n", valor);
    }
}

static void reemplazar(Nodo* arbol, Nodo* nuevoNodo) {
    if (arbol->padre) {
        //procedemos a colocar en el padre de arbol el nuevoNodo como nuevo hijo
        if (arbol->valor == arbol->padre->izquierda->valor) {
            arbol->padre->izquierda = nuevoNodo;
        } else if (arbol->valor == arbol->padre->derecha->valor) {
            arbol->padre->derecha = nuevoNodo;
        }
    }
    if (nuevoNodo) {
        //procedemos a poner como padre del nuevoNodo a arbol->padre
        nuevoNodo->padre = arbol->padre;
    }
}

static Nodo* Minimo(Nodo* arbol) {
    if (arbol == NULL) return NULL;
    if (arbol->izquierda) {
        return Minimo(arbol->izquierda);
    } else {
        return arbol;
    }
}

static void eliminarNodo(Nodo* nodoEliminar) {
    if (nodoEliminar->izquierda && nodoEliminar->derecha) {
        //Tratar de eliminar con dos hijos.
        Nodo* minimo = Minimo(nodoEliminar->derecha);
        nodoEliminar->valor = minimo->valor;
        eliminarNodo(minimo);
    } else if (nodoEliminar->izquierda) {
        //Tratar de eliminar un hijo
        reemplazar(nodoEliminar, nodoEliminar->izquierda);
        destruirNodo(nodoEliminar);
    } else if (nodoEliminar->derecha) {
        //Tratar de eliminar un hijo
        reemplazar(nodoEliminar, nodoEliminar->derecha);
        destruirNodo(nodoEliminar);
    } else {
        //Tratar de eliminar sin hijos.
        reemplazar(nodoEliminar, NULL);
        destruirNodo(nodoEliminar);
    }
}

void eliminar(Nodo* arbol, int valor) {
    if (arbol == NULL) {
        return NULL;
    } else if (valor < arbol->valor) {
        eliminar(arbol->izquierda, valor);
    } else if (valor > arbol->valor) {
        eliminar(arbol->derecha, valor);
    } else {
        eliminarNodo(arbol);
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
        printf(" %d )", arbol->valor);
    }
}

/*void inorden(Nodo* arbol) {
    if (arbol == NULL) {
        printf(" - ");
    } else {
        printf("(");
        inorden(arbol->izquierda);
        if (arbol->padre == NULL) {
            printf(" %d {//}", arbol->valor);
        }else{
            printf(" %d {%d}", arbol->valor,arbol->padre->valor);
        }
        inorden(arbol->derecha);
        printf(")");
    }
}*/