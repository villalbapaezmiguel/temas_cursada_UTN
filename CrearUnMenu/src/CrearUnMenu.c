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

	char cadena [15] = "programacion";

	printf("\nINgrese algo : ");
	__fpurge(stdin);//lo estas limpiando
	scanf("%s", cadena);



	return EXIT_SUCCESS;
}
