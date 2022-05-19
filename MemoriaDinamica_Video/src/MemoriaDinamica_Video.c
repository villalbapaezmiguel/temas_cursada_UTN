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

int main(void) {
/*Justificacion :
 * Las variables y vectores en C ocupan unt tamaño prefijado y
 * este no se puede modificar durante la ejecucion del programa ,
 * de alli surge la necesidad de utilizar algun mecanismo que permita reservar o liberar memoria dinamicamente.*/

/*Uso de malloc():
 * La funcion malloc , devuelve un puntero * nulo(NULL) si la reserva de memoria no puede realizarse ,
 * generalmemto por falta de memoria disponible**/

	int* a ;

	a = (int*)malloc(sizeof(int));//duevuelve null o una direccion de memoria de lo que estamos pidiendo
	if(a != NULL)
	{
		*a = 22;
		printf("\n %d", *a);
	}

/*Uso de realloc :
 * El redimensionamiento de memeoria intentara cambiar el tamaño de un bloque previamente asignado
 * void realloc(void *ptr , usigned int numberByts)
 * Si el tamaño del bloque original no puede ser redimensionado , entonces realloc intentara asignar un
 * nuevo bloque de memoria y copiara el contenido anterior
 *
 * Uso de realloc*/

	int *puntero ;
	int *pAux ;

	puntero = (int* )malloc(sizeof(int)*20);//le asignamos espacio para 20 enteros

	/*si puntero consigui el espacio en memoria pasa */
	if(puntero != NULL)
	{
		pAux = realloc(puntero , sizeof(int)*300);//le asignamos espacio para 200 enteros
/*realloc copia cada uno de los 20 elementos originales a donde corresponda , y lo que va haceer es devolver en el puntero
 * en donde pudo dejar la informacion . siempre hay que verificar que no sea null*/
		if(pAux != NULL)
		{
			puntero = pAux;
		}

	}

	return EXIT_SUCCESS;
}
