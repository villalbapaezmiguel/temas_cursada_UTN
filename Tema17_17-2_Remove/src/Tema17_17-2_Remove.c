/*
 ============================================================================
 Name        : Tema17_17-2_Remove.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "UTN.h"

int encontrarEntero(int* arrayEnteros  , int sizeArray , int* encontrarEntero , int* encontrado );
int revomeEnteros(int* arrayEnteros  , int sizeArray);
int inicializar (int* arrayEnteros  , int sizeArray , int valorInicial );
void imprimir (int* arrayEnteros  , int sizeArray );

int main(void) {

/*Ejercicio 17-2: (Remove)
Realizar una función que reciba como parámetro un array de enteros,
su tamaño y un entero.
La función se encargará de buscar el valor entero y borrará la primera ocurrencia del mismo.
El array deberá reestructurarse dinámicamente.
 * */

	int* arrayEnteros = NULL;
	int sizeArray = 10;

	arrayEnteros = (int*)malloc(sizeof(int)* sizeArray);
	if(arrayEnteros != NULL)
	{
		if(inicializar(arrayEnteros, sizeArray, 0) == 0)
		{
			imprimir(arrayEnteros, sizeArray );
			printf("\nRemover : ");

			revomeEnteros(arrayEnteros, sizeArray);
			imprimir(arrayEnteros, sizeArray );
		}
	}


	return EXIT_SUCCESS;
}

int revomeEnteros(int* arrayEnteros  , int sizeArray)
{
	int enteroIngresado ;
	int enteroEncontrado ;
	int estado = -1;
	int* pAuxArrayEnteros;
	int sizeNuevo ;

	if(arrayEnteros != NULL && sizeArray > 0)
	{
		utn_pedirInt(&enteroIngresado, "\nIngrese el numero a elimnar : ", "\nERROR ",0, sizeArray,2 );
		if(encontrarEntero(arrayEnteros, sizeArray, &enteroIngresado, &enteroEncontrado) == 0)
		{
			utn_pedirInt(&sizeNuevo, "\nIngrese nuevo tamaño : ", "\nERROR ",0, sizeArray,2 );

			pAuxArrayEnteros = (int *)realloc(arrayEnteros , sizeof(int )*sizeNuevo);
			if(pAuxArrayEnteros != NULL )
			{
				sizeArray = sizeNuevo ;
				arrayEnteros = pAuxArrayEnteros;
				estado = 0;

			}


		}

	}

	return estado ;
}

int encontrarEntero(int* arrayEnteros  , int sizeArray , int* encontrarEntero , int* encontrado )
{
	int estado = -1;
	int i;

	if(arrayEnteros != NULL && sizeArray > 0)
	{
		for (i = 0; i < sizeArray; ++i) {

			if(arrayEnteros[i] == *encontrarEntero)
			{
				*encontrado = i ;
				break;
			}

		}

	}
	return estado ;
}


int inicializar (int* arrayEnteros  , int sizeArray , int valorInicial )
{
	int estado = -1;

	if(arrayEnteros != NULL && sizeArray > 0)
	{
		estado = 0;

		arrayEnteros = {10,2,4,5,6,5,90,88,22,30};
	}


	return estado ;
}


void imprimir (int* arrayEnteros  , int sizeArray )
{

	int i ;

	for (i = 0; i < sizeArray; ++i) {


		printf("\n posicion : %d ||  valor : %d", i , arrayEnteros[i]);

	}

}

















