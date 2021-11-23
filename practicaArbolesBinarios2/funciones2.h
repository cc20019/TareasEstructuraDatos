#ifndef FUNCIONES_H
#define FUNCIONES_H

typedef struct nodo {
    int valor;
    struct nodo* izquierda;
    struct nodo* derecha;
    struct nodo* padre;
} Nodo;

typedef Nodo Arbol;

Nodo* crearNodo(int valor, Nodo* padre);
void destruirNodo(Nodo* nodo);
static void insertarConPadre(Nodo** arbol, Nodo* padre, int valor);
void insertar(Nodo** arbol, int valor);
int existe(Nodo* arbol, int valor);
Nodo* obtener(Nodo* arbol, int valor);
void determinarExistencia(Nodo* arbol, int valor);
static void reemplazar(Nodo* arbol, Nodo* nuevoNodo);
static Nodo* Minimo(Nodo* arbol);
static void eliminarNodo(Nodo* nodoEliminar);
void eliminar(Nodo* arbol, int valor);
void preOrden(Nodo* arbol);
void inorden(Nodo* arbol);
void postOrden(Nodo* arbol);
#endif /* FUNCIONES_H */

