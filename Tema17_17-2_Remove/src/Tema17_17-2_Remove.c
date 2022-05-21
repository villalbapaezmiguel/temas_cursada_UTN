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
int revomeEnteros(int* arrayEnteros  , int sizeArray , int entero);
int inicializar (int* arrayEnteros  , int sizeArray );
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
	int enteroIngresado;

	arrayEnteros = (int*)malloc(sizeof(int)* sizeArray);
	if(arrayEnteros != NULL)
	{
		if(inicializar(arrayEnteros, sizeArray) == 0)
		{
			imprimir(arrayEnteros, sizeArray );
			printf("\nRemover : ");
			utn_pedirInt(&enteroIngresado, "\nIngrese el entero a elimnar : ", "\nERROR ",0, 1000,2 );
			if(revomeEnteros(arrayEnteros, sizeArray , enteroIngresado) == 0)
			{
				imprimir(arrayEnteros, sizeArray );
			}
		}
	}


	return EXIT_SUCCESS;
}

int revomeEnteros(int* arrayEnteros  , int sizeArray , int entero)
{
	int estado = -1;
	int* pAuxArrayEnteros = NULL;
	int i;
	if(arrayEnteros != NULL && sizeArray > 0)
	{

		for (i = 0; i < sizeArray; ++i) {

			printf("\n array " );
			if(arrayEnteros[i] == entero)
			{
				printf("\nEntro");

				pAuxArrayEnteros = (int *)realloc(arrayEnteros , sizeof(int )*sizeArray);
				if(pAuxArrayEnteros != NULL )
				{
					sizeArray -= 1 ;
					arrayEnteros = pAuxArrayEnteros;
					estado = 0;

					break;
				}else{
					printf("\nNo hay mas espacio ");
				}


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
				estado = 0;
				break;
			}

		}

	}
	return estado ;
}


int inicializar (int* arrayEnteros  , int sizeArray )
{
	int estado = -1;
	int i;

	if(arrayEnteros != NULL && sizeArray > 0)
	{
		estado = 0;

		for (i = 0; i < sizeArray; ++i) {

			arrayEnteros[i] = i*3;
		}
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

















