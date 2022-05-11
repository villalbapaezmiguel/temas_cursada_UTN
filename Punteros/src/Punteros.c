/*
 ============================================================================
 Name        : Punteros.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio_ext.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct{

	int dia;
	int mes ;
	int anio ;

}eFecha;

int main(void) {
// UNA DE LAS VENTAJAS DE LOS PUNTEROS ES QUE PASA EL VALOR PÓR REFERENCIA

	//HAY DOS FORMAS DE PASAR UN ARRAY (int* array o int array[] )
//el puntero guarda la direccioon de memoria de otra variable
	//todo puntero siempre tiene que tener la letra "p"   (int" pEntero ;)

//	int x ;
//	x = 100000;
//	x = sizeof(x);
//
//	printf("\n %d", x);
//	int n ;
//	printf("\n %p", &n);

//siempre cada vez que declaramos un puntero tenemos que inicializar el puntero en NULL 	int* pEntero = NULL ;

	//inicialializar punteros
	int* pEntero = NULL ;//lo que guarda es NULL /
	eFecha* pFecha = NULL ;

	//operador de direccion( *) , operador de indireccion (&)
	//si le queremos guardar algo

	int varEntera = 5;

	printf("%p\n", &pEntero);// devuelve la direccion de memoria / duevulve la direccion de memorioa
	printf("%p\n", pEntero);// devuelve el valor guardado / devuelve NULL /lo que tiene cargado

	pEntero = &varEntera ;//le estampos diciendo que se guarde la posicion de memoria de varEntera

	//para mostrar la dereccion de memoria de pEntero se usa la mascara ("%p ", &pEntero)

	printf("%d \n", varEntera); //valor
	printf("%p \n", pEntero);
	printf("%p \n", &pEntero);

	//un puntero es una variable que tiene la particularidad de apuntar la direccion de memoria
	//el valor de un puntero es la direccion de memoria
	//todos los punteros guardan 8 bits






	return EXIT_SUCCESS;
}
