/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   funcionesPilas.h
 * Author: Samuel
 *
 * Created on 11 de septiembre de 2021, 14:08
 */

#ifndef FUNCIONESPILAS_H
#define FUNCIONESPILAS_H

typedef struct {
    struct elemento* siguiente;
    char* nombre;
} elemento;

elemento* ultimo;
void agregarElemento(elemento* _elemento);
elemento* extraer();






#endif /* FUNCIONESPILAS_H */

