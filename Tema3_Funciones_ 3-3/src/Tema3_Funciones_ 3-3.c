/*
 ============================================================================
 Name        : Tema3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

int ingresoEntero(int entero);
int main(void) {

	//Villalba Paez MIguel Antonio
	/*Ejercicio 3-3:
Crear una función que pida el ingreso de un entero y lo retorne. */

	int numero ;

	numero = ingresoEntero(numero);

	printf("\nIngreso : %d", numero);


	return EXIT_SUCCESS;
}

int ingresoEntero(int entero)
{
	printf("\nIngrese un entero : ");
	scanf("%d", &entero);

	return entero ;
}
