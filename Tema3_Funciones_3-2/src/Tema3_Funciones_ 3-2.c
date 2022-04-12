/*
 ============================================================================
 Name        : Tema3(Funciones).c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

int determidanorParImpar(int numero);
int main(void) {

	//VIllalba Paez Miguel Antonio
	/*Ejercicio 3-2:
	Crear una función que permita determinar si un número es par o no.
	La función retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.
	 * */

	int numero ;
	int estado;

	printf("\nIngrese un numero : ");
	scanf("%d", &numero);

	estado = determidanorParImpar(numero);

	if(estado == 1)
	{
		printf("\nes Par");

	}else if(estado == 0)
	{
		printf("\nes Impar");
	}

	return EXIT_SUCCESS;
}

int determidanorParImpar(int numero)
{
	int estado ;

	if(numero %2 == 0)
	{
		//es Par
		estado = 1;
	}else{
		//es Impar
		estado = 0;
	}

	return estado ;
}


