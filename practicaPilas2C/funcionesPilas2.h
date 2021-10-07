/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   funcionesPilas2.h
 * Author: Samuel
 *
 * Created on 11 de septiembre de 2021, 15:34
 */

#ifndef FUNCIONESPILAS2_H
#define FUNCIONESPILAS2_H

#include <stdlib.h>


typedef char* URL;

typedef struct nodo {
    URL url;
    struct nodo* siguiente;

} Nodo;

typedef struct pila {
    Nodo* cima;
    int logitud;

} Pila;

Nodo* crearNodo(URL url);
Pila* crearPila();
void destruirPila(Pila* pila);
void destruirNodo(Nodo* nodo);
void apilar(Pila* pila, URL url);
void desapilar(Pila* pila);
int longitud(Pila* pila);
int estaVacia(Pila* pila);
URL cima(Pila* pila);



#endif /* FUNCIONESPILAS2_H */

