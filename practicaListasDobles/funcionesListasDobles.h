#ifndef FUNCIONESLISTASDOBLES_H
#define FUNCIONESLISTASDOBLES_H

typedef struct nodo {
    int dato;
    struct nodo* siguiente;
    struct nodo* atras;
} nodo;

void insertarNodo();
void desplegarListaPU();
void desplegarListaUP();
void buscadoNodo();
void eliminarNodo();
#endif /* FUNCIONESLISTASDOBLES_H */

