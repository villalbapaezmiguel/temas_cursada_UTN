/*
 ============================================================================
 Name        : Tema4_Biblioteca-Recursividad.c
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
/*Ejercicio 4-1:
Realizar un programa EN EL MAIN que permita calcular y mostrar el factorial de un número. Utilizar la función PedirNumero de la ejercitación 3-4.
Por ejemplo:
5! = 5*4*3*2*1 = 120
 * */

	char letra ;
	printf("\nningrese opcion  S/N:");
	__fpurge(stdin);
	scanf("%c", &letra);



	while(letra != 's' && letra != 'n')
	{
		printf("\ningrese opcion  S/N:");
		__fpurge(stdin);
		scanf("%c", &letra);

	}

	return EXIT_SUCCESS;
}

//buscar y practicar : toupper , getch(no existe para linux) y getche //que es path
