#ifndef FUNCIONTRANSPUESTA_H
#define FUNCIONTRANSPUESTA_H
#include <stdio.h>
#include <stdlib.h>
//variables

//funciones
int numeroFilas();
int numeroColumnas();
void llenarMatriz(int numeroFilas, int numeroColumnas, int matriz[][numeroColumnas]);
void asignar(int numeroFilas, int numeroColumnas, int matriz[][numeroColumnas]);
void borrar(int numeroFilas, int numeroColumnas, int matriz[][numeroColumnas]);
void verMatriz(int numeroFilas, int numeroColumnas, int matriz[][numeroColumnas]);
void mostrarMatrizTranspuesta(int numeroFilas, int numeroColumnas, int matriz[][numeroColumnas]);
void matrizTranspuestaFuncion(int numeroFilas, int numeroColumnas, int matriz[][numeroColumnas], int matrizTranspuesta[][numeroFilas]);
void crearCSVCarnets(char carnets[][7]);
//void motrarTodosDatos(char *nombreArchivo, char *matrizFinal[][7]);

#endif /* FUNCIONTRANSPUESTA_H */

