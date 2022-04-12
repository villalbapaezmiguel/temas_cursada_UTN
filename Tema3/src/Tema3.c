/*
 ============================================================================
 Name        : Tema3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio_ext.h>//para linux
#include <stdlib.h>
#include <string.h>

void mostrarNumeroFlotante(float numero );
int main(void) {

//Villalba Paez Miguel Anotonio
/*Ejercicio 3-1:
Crear una función que muestre por pantalla el número flotante  que recibe como parámetro.
 * */
	float numero;
	printf("\nIngrese un numero flotante : ");
	scanf("%f", &numero);

	mostrarNumeroFlotante(numero);

	return EXIT_SUCCESS;
}

void mostrarNumeroFlotante(float numero )
{
	printf("\n el numero flotante es : %.2f", numero);

}

