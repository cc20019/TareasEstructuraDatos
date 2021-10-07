#include <stdio.h>
#include <stdlib.h>
#include "funcionTranspuesta.h"

int main(int argc, char** argv) {

    int filas = numeroFilas(), columnas = numeroColumnas(), cerrar, menu;
    int matriz[filas][columnas];
    int matrizTranspuesta[columnas][filas];

    llenarMatriz(filas, columnas, matriz);
    do {
        printf("menu\n1. Asignar numero\n2. borrar un puesto\n3. Ver matriz\n4. Ver transpuesta\n0. Salir\n-->");
        scanf("%i", &menu);
        switch (menu) {
            case 1:
                asignar(filas, columnas, matriz);
                break;
            case 2:
                borrar(filas, columnas, matriz);
                break;
            case 3:
                verMatriz(filas, columnas, matriz);
                break;
            case 4:
                //mostrarMatrizTranspuesta(filas, columnas, matriz);
                matrizTranspuestaFuncion(filas, columnas, matriz, matrizTranspuesta);
                break;
            case 0:
                cerrar = 0;
                break;
            default:
                printf("Ups tenemos un problema opcion no valida\n");
                break;
        }

    } while (cerrar != 0);

    printf("Salio");

    return 0;
}

