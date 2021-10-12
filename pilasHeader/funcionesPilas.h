#ifndef FUNCIONESPILAS_H
#define FUNCIONESPILAS_H

typedef int tipoElemento;

typedef struct nodo_pila {
    tipoElemento dato;
    struct nodo_pila* siguiente;
} nodo_pila;

typedef nodo_pila pila;

void agregarPila(pila* nuevo, tipoElemento entero);
void mostrarPila();
tipoElemento getPrimeroPila(pila* primeroDato);
void pilaBorrar();
void pilaBorrar(pila* borrarPrimero);



#endif /* FUNCIONESPILAS_H */

