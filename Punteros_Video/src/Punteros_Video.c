/*
 ============================================================================
 Name        : Punteros_Video.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

//	int var1 = 15;
//	int* pVar1 = &var1;// le estamos asignando la direccion de memoria de var1
//
//	printf("\n valor var1 : %d", var1);//mostramos el valor de var1
//	*pVar1 = 50;//apuntar el direccion de memoria de var1
//	printf("\n valor var1 : %d", var1);//modifico el valor de var1 desde el puntero pVar1
//

	//parte dos
	//logica de punteros *
	//solo podemos usar los operadores -- , ++ , += , -=
	int arreglo[6] = {9,8,4,10,90,77};
	//las dos maneras son validas
//	int* pArreglo = arrelgo;
	int* pArreglo = &arreglo[0];

	/*los int tienen 4 bits**/
	pArreglo++;//estamos diciendo que : nos vamos a mover 4 bits mas , osea vamos a mostrar el elemento 1 (8)
	printf("\nContenido de la direccion de memoria apuntada por pArreglo : %d", *pArreglo);
/*si nos queremos desplazar tenemos que movernos en
 * osea si queremos mostra el ultimo elemento , lo que vamos a hacer es :*/

	pArreglo += 4;// le estamos sumando al apuntador 4 unidades
	printf("\nContenido de la direccion de memoria apuntada por pArreglo : %d", *pArreglo);

	pArreglo --;//le restamos una unidad , asi que nos va a mostrar la direccion de memoria del elemento 4
	printf("\nContenido de la direccion de memoria apuntada por pArreglo : %d", *pArreglo);
	//vamos a optener la direccion de memoria del primer elemento

	pArreglo -= 4;
	printf("\nContenido de la direccion de memoria apuntada por pArreglo : %d", *pArreglo);

	//falta ver Programación en C - MANEJO DE CADENAS - Parte 1
	return EXIT_SUCCESS;
}
