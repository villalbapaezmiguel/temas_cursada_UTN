/*
 ============================================================================
 Name        : CrearUnMenu.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
	setbuf(stdout, NULL);

//	char cadena [15] = "programacion";
//
//	printf("\nINgrese algo : ");
//	__fpurge(stdin);//lo estas limpiando
//	scanf("%s", cadena);
//
//	char nombre[31];
//
//	printf("\nIngrese nombre : ");
//	__fpurge(stdin);
////	scanf("%s", nombre);
//
//	printf("\nIngreso : %s", nombre);

/*Ejercicio 6-3:
Pedirle al usuario su nombre y apellido (en variables separadas,
una para el nombre y otra para el apellido). Ninguna de las dos variables se puede modificar.
Debemos lograr guardar en una tercer variable el apellido y el nombre con el siguiente formato:
Por ejemplo:
Si el nombre es juan ignacio y el apellido es gOmEz, la salida debería ser:
Gomez, Juan Ignacio*/

	char nombre [31];
	char apellido [31];
	char nombre_apellido[71];
	char apellido_tolower = [31];
	int cantidad  = 0;
	printf("\nIngrese nombre :");
	__fpurge(stdin);
	scanf("%[^\n]",nombre);

	printf("\nIngrese apellido :");
	__fpurge(stdin);
	scanf("%[^\n]",apellido);

	//paso a minuscula las cadenas
	tolower(apellido);
	tolower(nombre);

	//paso las iniciales a mayusculas
	apellido[0] = toupper(apellido[0]);

	nombre[0] = toupper(nombre[0]);
	cantidad = strlen(nombre);
	for (int i = 0; i < cantidad ; ++i) {

		if(nombre[i] == ' ')
		{
			nombre[i+1] = toupper(nombre[i+1]);

		}
	}

	nombre_apellido[0] = '\0';//limpiamos la mememria que nos resrvo : porque cuando le pedimos un espacio de memerio , nos lo van a dar , pero va  estar con basura

	//concateno apellido y nombre en una variable
	//saber pasar de minusculas a mayuscuolas
	//saber copiar cadenas en un nuevo char


	return EXIT_SUCCESS;
}
