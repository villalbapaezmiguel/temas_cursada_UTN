/*
 ============================================================================
 Name        : MemoriaDinamica_Video.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "UTN.h"
#include <string.h>

int inicializar(int* pArrayEdades , int sizeArrayEdades , int valorAInicializar);
int mostrar(int* pArrayEdades , int sizeArrayEdades );
int nuevoSize(int* pArrayEdades, int* sizeActual , int sizeNuevo);

int main(void) {
/*Justificacion :
 * Las variables y vectores en C ocupan unt tamaño prefijado y
 * este no se puede modificar durante la ejecucion del programa ,
 * de alli surge la necesidad de utilizar algun mecanismo que permita reservar o liberar memoria dinamicamente.*/

/*Uso de malloc():
 * La funcion malloc , devuelve un puntero * nulo(NULL) si la reserva de memoria no puede realizarse ,
 * generalmemto por falta de memoria disponible**/

//	int* a ;
//
//	a = (int*)malloc(sizeof(int));//duevuelve null o una direccion de memoria de lo que estamos pidiendo
//	if(a != NULL)
//	{
//		*a = 22;
//		printf("\n %d", *a);
//	}
//
///*Uso de realloc :
// * El redimensionamiento de memeoria intentara cambiar el tamaño de un bloque previamente asignado
// * void realloc(void *ptr , usigned int numberByts)
// * Si el tamaño del bloque original no puede ser redimensionado , entonces realloc intentara asignar un
// * nuevo bloque de memoria y copiara el contenido anterior
// *
// * Uso de realloc*/
//
//	int *puntero ;
//	int *pAux ;
//
//	puntero = (int* )malloc(sizeof(int)*20);//le asignamos espacio para 20 enteros
//
//	/*si puntero consigui el espacio en memoria pasa */
//	if(puntero != NULL)
//	{
//		pAux = realloc(puntero , sizeof(int)*300);//le asignamos espacio para 200 enteros
///*realloc copia cada uno de los 20 elementos originales a donde corresponda , y lo que va haceer es devolver en el puntero
// * en donde pudo dejar la informacion . siempre hay que verificar que no sea null*/
//		if(pAux != NULL)
//		{
//			puntero = pAux;
//		}
//
//	}

	//como inicializar un array dinamico

	int* pArrayEdades = NULL ;
	int sizeArrayEdades  = 10;
//	int* pAuxArrayEdadesTemporal = NULL;
//	int nuevaCantidadByts ;

	pArrayEdades = (int* ) malloc(sizeof(int )* sizeArrayEdades);//declaramos al array de manera dinamica
	//lo siguiente es verificar que no sea nullo
	if(pArrayEdades != NULL)
	{

		printf("\nTodo bien ");
		if(inicializar(pArrayEdades, sizeArrayEdades, 0) == 0)
		{
			printf("\nYa se inicializo ");
			if(mostrar(pArrayEdades, sizeArrayEdades) == 0)
			{
				printf("\nTodo salio bienn");
/*asi seria una manera de declarar un array de una manera dinamica*/
			}
		}
//realloc requeire una variable de tipo puntero temporal

		//esta es una manera :
//		utn_getNumero(&nuevaCantidadByts, "\nIngrese la nueva cantidad de byts a reservar :", "\nERROR", 0, 100000, 2);
//		pAuxArrayEdadesTemporal = (int*)realloc(pArrayEdades, sizeof(int )* (nuevaCantidadByts));
//
//		if(pAuxArrayEdadesTemporal != NULL)
//		{
//			pArrayEdades = pAuxArrayEdadesTemporal;
//			sizeArrayEdades  = nuevaCantidadByts;
//			mostrar(pArrayEdades, sizeArrayEdades);
//		}
		//esta es otra manera :
		if(nuevoSize(pArrayEdades, &sizeArrayEdades, 30) == 0)
		{
			mostrar(pArrayEdades, sizeArrayEdades);
		}


	}



	return EXIT_SUCCESS;
}

int inicializar(int* pArrayEdades , int sizeArrayEdades , int valorAInicializar)
{
	int estado = -1;
	int i ;

	if(pArrayEdades != NULL &&  sizeArrayEdades > 0 )
	{
		estado = 0;
		for (i = 0; i < sizeArrayEdades; ++i) {

			pArrayEdades[i] = valorAInicializar;
			//o tambien como aritmetica de punteros:
//			*(pArrayEdades+i) = valorAInicializar;

		}
	}


	return estado ;
}


int mostrar(int* pArrayEdades , int sizeArrayEdades )
{
	int estado = -1;
	int i ;

	if(pArrayEdades != NULL &&  sizeArrayEdades > 0 )
	{
		estado = 0;
		for (i = 0; i < sizeArrayEdades; ++i) {

//			printf("\n %d", pArrayEdades[i]);
			printf("\n %d", *(pArrayEdades+i));//algebra de punteros

		}
	}


	return estado ;
}

int nuevoSize(int* pArrayEdades, int* sizeActual , int sizeNuevo)
{
	int* pAuxArrayEdadesTemporal = NULL;
	int estado = -1;

	if(pArrayEdades != NULL &&  (sizeActual != NULL  && sizeNuevo > 0))
	{

		pAuxArrayEdadesTemporal = (int*)realloc(pArrayEdades, sizeof(int)* sizeNuevo);

		if(pAuxArrayEdadesTemporal != NULL)
		{
			pArrayEdades = pAuxArrayEdadesTemporal;
			*sizeActual  = sizeNuevo;
			estado = 0;
		}

	}

	return estado;
}



