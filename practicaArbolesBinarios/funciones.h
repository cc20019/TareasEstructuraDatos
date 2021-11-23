#ifndef FUNCIONES_H
#define FUNCIONES_H

typedef struct nodo{
    int valor;
    struct nodo* izquierda;
    struct nodo* derecha;
}Nodo;

typedef Nodo Arbol;

Nodo* crearNodo(int valor);
void destruirNodo(Nodo* nodo);
void insertar(Nodo** arbol, int valor);
int existe(Nodo* arbol, int valor);
void determinarExistencia(Nodo* arbol, int valor);
void preOrden(Nodo* arbol);
void inorden(Nodo* arbol);
void postOrden(Nodo* arbol);
#endif /* FUNCIONES_H */

