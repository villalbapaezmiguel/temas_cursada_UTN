/*
 * Funciones.c
 *
 *  Created on: 5 abr. 2022
 *      Author: miguel
 */
#include "Funciones.h"

/*si es par devuelve 1 	|| si es impar devuelve 2 || sino ninguno retorna -1*/
int esPar_o_Impar(int numero )
{
	int estado = -1;

	if(numero %2 == 0)
	{
		estado = 1;
	}else {
		estado = 2;
	}

	return estado ;
}

/*d	Listado de los números ingresados.
e	Listado de los números pares.
f	Listado de los números de las posiciones impares.*/

void listadoNumerosIngresados (int numeros[], int largo)
{
	printf("\n-------------LISTADO NUMEROS INGRESADOS---------------------");
	for (int i = 0; i < largo; ++i) {

		printf("\nC) - %d) numero ingresado : %d", i , numeros[i]);
	}


}
void listadoNumerosPares(int vector [], int largo)
{
	for (int i = 0; i < largo; ++i) {

		printf("\nE) Listado de los números pares : %d", vector[i]);
	}

}

