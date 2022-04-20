/*
 ============================================================================
 Name        : Tema7_Arrays_Paralelos.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio_ext.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "Productos_Apple.h"

int main(void) {

	setbuf(stdout, NULL);
	eProductoApple productos [CANTINDAD];

	if(inicializar(productos, CANTINDAD)){
		printf("\nYA se inicializo");
	}


	int i;
	for (i = 0; i < CANTINDAD; ++i) {
		printf("\n producto  : %d", productos[i].estado);
	}

	Menu( productos, CANTINDAD);


	return EXIT_SUCCESS;
}
