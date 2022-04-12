/*
 ============================================================================
 Name        : Tema3_Funciones_3-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int ingresoEntero(int entero);
int main(void) {
	//Villalba Paez MIguel Antonio
/*Ejercicio 3-4:
Especializar la función anterior para que permita validar el entero ingresado en un rango determinado.
 * *///nos falta terminar porque no lo entendemos
	int numero ;

//	numero = ingresoEntero(numero);
//
//	printf("\nIngreso : %d", numero);
//

	printf("\npedime : ");
	scanf("%d",&numero);

	printf("%f", &numero);

	return EXIT_SUCCESS;
}
int ingresoEntero(int entero)
{
	printf("\nIngrese un entero : ");
	scanf("%d", &entero);

	return entero ;
}

