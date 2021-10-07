/*
 * File:   newcunittest3.c
 * Author: Samuel
 *
 * Created on 4 sep. 2021, 23:32:43
 */

#include <stdio.h>
#include <stdlib.h>
#include <CUnit/Basic.h>

/*
 * CUnit Test Suite
 */

int init_suite(void) {
    return 0;
}

int clean_suite(void) {
    return 0;
}

void testNumeroFilas() {
    int result = numeroFilas();
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

void testNumeroColumnas() {
    int result = numeroColumnas();
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

void testLlenarMatriz() {
    int numeroFilas;
    int numeroColumnas;
    int** matriz;
    llenarMatriz(numeroFilas, numeroColumnas, matriz);
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

void testAsignar() {
    int numeroFilas;
    int numeroColumnas;
    int** matriz;
    asignar(numeroFilas, numeroColumnas, matriz);
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

void testBorrar() {
    int numeroFilas;
    int numeroColumnas;
    int** matriz;
    borrar(numeroFilas, numeroColumnas, matriz);
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

void testVerMatriz() {
    int numeroFilas;
    int numeroColumnas;
    int** matriz;
    verMatriz(numeroFilas, numeroColumnas, matriz);
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

void testMostrarMatrizTranspuesta() {
    int numeroFilas;
    int numeroColumnas;
    int** matriz;
    mostrarMatrizTranspuesta(numeroFilas, numeroColumnas, matriz);
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

void testMatrizTranspuestaFuncion() {
    int numeroFilas;
    int numeroColumnas;
    int** matriz;
    int** matrizTranspuesta;
    matrizTranspuestaFuncion(numeroFilas, numeroColumnas, matriz, matrizTranspuesta);
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("newcunittest3", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testNumeroFilas", testNumeroFilas)) ||
            (NULL == CU_add_test(pSuite, "testNumeroColumnas", testNumeroColumnas)) ||
            (NULL == CU_add_test(pSuite, "testLlenarMatriz", testLlenarMatriz)) ||
            (NULL == CU_add_test(pSuite, "testAsignar", testAsignar)) ||
            (NULL == CU_add_test(pSuite, "testBorrar", testBorrar)) ||
            (NULL == CU_add_test(pSuite, "testVerMatriz", testVerMatriz)) ||
            (NULL == CU_add_test(pSuite, "testMostrarMatrizTranspuesta", testMostrarMatrizTranspuesta)) ||
            (NULL == CU_add_test(pSuite, "testMatrizTranspuestaFuncion", testMatrizTranspuestaFuncion))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
