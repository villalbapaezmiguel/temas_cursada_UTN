/*
 ============================================================================
 Name        : Tema5_VectoresYFunciones_5-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio_ext.h>
#include <stdlib.h>

int main(void) {

/*Ejercicio 5-1: Miguel Antonio Villalba Paez
Pedir el ingreso de 5 números. Mostrarlos y calcular la sumatoria de los mismos.
 * */

	setbuf(stdout, NULL);
	int vector[5];
	int suma = 0;

	for (int i = 0; i < 5; ++i) {

		printf("\nIngrese un numero : ");
		scanf("%d", &vector[i]);

		suma += vector[i];
	}
	for (int j = 0; j < 5; ++j) {

		printf("\n Ingreso :%d", vector[j]);
	}
	printf("\nLa suma es : %d", suma);


	return EXIT_SUCCESS;
}
